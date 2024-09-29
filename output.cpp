#include <stdio.h>
#include <assert.h>

#include "output.h"

void output(common *data)
{
    assert(data);

    for(size_t current_ptr = 0; current_ptr < data->ptr_num; current_ptr++)
    {
        if(data->line_ptrs[current_ptr]) printf("%s\n", data->line_ptrs[current_ptr]);
    }
}