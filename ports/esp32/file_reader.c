#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

#include "file_reader.h"
#include "mpfile.h"

struct lib_file_reader *
lib_file_new(const char *filename, int bufsize)
{
    const char mode[] = "rb";
    mp_file_t* fp = mp_open(filename, mode);
    if (fp == NULL) {
        return NULL;
    }

	struct lib_file_reader *fr = (struct lib_file_reader *) malloc(sizeof(struct lib_file_reader) + bufsize);
	if (fr == NULL) {
        return NULL;
    }

	memset(fr, 0, sizeof(struct lib_file_reader) + bufsize);
	fr->fp = fp;
	fr->bufsize = bufsize;

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
			ssize_t r = mp_readinto(fr->fp, fr->buf, fr->bufsize);
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
	if (fr->fp)
		mp_close(fr->fp);
	free(fr);
}
