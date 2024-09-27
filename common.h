#ifndef COMMON_H
#define COMMON_H

#include <stdlib.h>
#include <sys/stat.h>

struct common
{
    char **line_ptrs;
    size_t ptr_num;
    char * buffer;
    size_t file_size;
};

#endif