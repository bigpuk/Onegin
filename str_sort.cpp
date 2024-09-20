#include <TXLib.h>
#include <stdlib.h>
#include <assert.h>

#include "str_swap.h"
#include "str_sort.h"

void str_sort(char **line_ptrs,  size_t str_num)
{
    assert(line_ptrs);
    // for(size_t ptr_num = 0; ptr_num < str_num; ptr_num++)
    // {
    //     str_swap(*line_ptrs[ptr_num], *line_ptrs[ptr_num + 1]);
    // }

    // qsort(*line_ptrs, 0, str_num);
    for(size_t i = 0; i < str_num; i++)
    {
        for(size_t j = 0; j < str_num; j++)
        {
            str_swap(line_ptrs[j], line_ptrs[i + 1]);
        }
    }
}