#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#include "str_swap.h"
#include "str_sort.h"
#include "my_strcmp.h"

void str_sort(common *data)
{
    assert(data);
    // for(size_t ptr_num = 0; ptr_num < str_num; ptr_num++)
    // {
    //     str_swap(*line_ptrs[ptr_num], *line_ptrs[ptr_num + 1]);
    // }

    //void *line_ptrs_temp = (void *) *line_ptrs;

    qsort((void *)(data->line_ptrs), data->ptr_num, sizeof(char *), my_strcmp);


    //char * line_ptrs_temp = nullptr;

    // for(size_t i = 0; i < ptr_num - 1; i++)
    //     for(size_t current_ptr = 0; current_ptr < ptr_num - 1; current_ptr++)
    //         {
    //             printf("%s %s", line_ptrs[current_ptr], line_ptrs[current_ptr + 1]);
    //             if(my_strcmp(line_ptrs[current_ptr], line_ptrs[current_ptr + 1]) == 1)
    //             {
    //                 line_ptrs_temp = line_ptrs[current_ptr];
    //                 line_ptrs[current_ptr] = line_ptrs[current_ptr + 1];
    //                 line_ptrs[current_ptr + 1] = line_ptrs_temp;
    //             }
    //         }
    
    // for(size_t i = 0; i < str_num; i++)
    // {
    //     for(size_t j = 0; j < str_num; j++)
    //     {
    //         str_swap(line_ptrs[j], line_ptrs[i + 1]);
    //     }
    // }
}