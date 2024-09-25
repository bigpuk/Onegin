#ifndef COMMON_H
#define COMMON_H

#include <stdlib.h>

struct commmon
{
    char **line_ptrs;
    size_t ptr_num;
};

typedef int (*comparator)(const void *line1, const void *line2);

#endif