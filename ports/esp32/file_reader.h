#ifndef LIB_FILE_READER_H
#define LIB_FILE_READER_H

#include <stdint.h>
#include <stddef.h>
#include "lib/littlefs/lfs2.h"

struct lib_file_reader {
    lfs2_t*     lfs;
    lfs2_file_t lfs_file;
    struct lfs2_file_config fcfg;
    uint8_t* lfscache;
	int bufsize;
	int buflen;
	int bufpos;
	uint8_t buf[0];
};

extern struct lib_file_reader * lib_file_new(const char *filename, int bufsize);
extern ssize_t lib_file_read(struct lib_file_reader *fr, uint8_t *buf, size_t buf_len);
extern void lib_file_destroy(struct lib_file_reader *fr);

#endif // LIB_FILE_READER_H
