#include <stdio.h>
#include <assert.h>

#include "output.h"

void output(char **line_ptrs, size_t ptr_num)
{
    assert(line_ptrs);

    // for(size_t lineptr_num = 0; lineptr_num < str_num; lineptr_num ++)
    // {
    //     printf("%s", line_ptrs[lineptr_num]);
    // }

    for(size_t current_ptr = 0; current_ptr < ptr_num; current_ptr++)
    {
        printf("%s", *(line_ptrs[current_ptr]));
    }
}