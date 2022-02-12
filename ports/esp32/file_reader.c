#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

#include "file_reader.h"
#include <py/mpstate.h>
#include <extmod/vfs.h>
#include <extmod/vfs_lfs.h>
#include "lib/littlefs/lfs2.h"

typedef struct _mp_obj_vfs_lfs2_t {
    mp_obj_base_t base;
    mp_vfs_blockdev_t blockdev;
    bool enable_mtime;
    vstr_t cur_dir;
    struct lfs2_config config;
    lfs2_t lfs;
} mp_obj_vfs_lfs2_t;


struct lib_file_reader *
lib_file_new(const char *filename, int bufsize)
{
    mp_vfs_mount_t *vfs = MP_STATE_VM(vfs_mount_table);
    mp_obj_vfs_lfs2_t *self = MP_OBJ_TO_PTR(vfs->obj);

	struct lib_file_reader *fr = (struct lib_file_reader *) malloc(sizeof(struct lib_file_reader) + bufsize);
	if (fr == NULL) {
        return NULL;
    }

	memset(fr, 0, sizeof(struct lib_file_reader) + bufsize);
	fr->bufsize = bufsize;
    fr->lfs = &self->lfs;
    fr->lfscache = malloc(fr->lfs->cfg->cache_size);
    if (fr->lfscache == NULL) {
        printf("failed to allocate %d bytes for lfs cache\n", fr->lfs->cfg->cache_size);
        lib_file_destroy(fr);
        return NULL;
    }
    fr->fcfg.buffer = fr->lfscache;
	int ret = lfs2_file_opencfg(fr->lfs, &fr->lfs_file, filename, LFS2_O_RDONLY, &fr->fcfg);
    if (ret < 0) {
        printf("lfs2: failed to open file=%d\n", ret);
        lib_file_destroy(fr);
        return NULL;
    }
	return fr;
}

ssize_t
lib_file_read(struct lib_file_reader *fr, uint8_t *buf, size_t buf_len)
{
	ssize_t res = 0;
	while (buf_len > 0)
	{
		if (fr->buflen == 0)
		{
			ssize_t r = lfs2_file_read(fr->lfs, &fr->lfs_file, fr->buf, fr->bufsize);
			if (r < 0)
				return r;
			if (r == 0)
				return res;
			fr->bufpos = 0;
			fr->buflen = r;
		}

		if (fr->buflen)
		{
			ssize_t maxcopy = fr->buflen > buf_len ? buf_len : fr->buflen;
			memcpy(buf, &fr->buf[fr->bufpos], maxcopy);
			buf = &buf[maxcopy];
			buf_len -= maxcopy;
			res += maxcopy;
			fr->bufpos += maxcopy;
			fr->buflen -= maxcopy;
		}
	}

	return res;
}

void
lib_file_destroy(struct lib_file_reader *fr)
{
    if (fr->lfscache) {
        free(fr->lfscache);
        lfs2_file_close(fr->lfs, &fr->lfs_file);
    }
	free(fr);
}
