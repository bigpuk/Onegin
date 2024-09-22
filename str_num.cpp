#include <stdio.h>
#include <assert.h>

#include "str_num.h"

int str_num(char *buffer, size_t file_size)
{
    assert(buffer);
    size_t count = 0;

    for(size_t i = 0; i < file_size; i++)
    {
        if(text_lines[i] == "\0" && text_lines[i + 1] == "\0") count++;
    }

    return count;
}