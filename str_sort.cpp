#include <TXLib.h>

#include "str_swap.h"
#include "my_strcmp.h"

void str_sort(char **line_ptrs, int str_num)
{
    for(size_t ptr_num = 0; ptr_num < str_num; ptr_num++)
    {
        if(my_strcmp(*line_ptrs[i], *line_ptrs[i + 1]) == 1)
        {
            str_swap(*line_strs[i], *line_ptrs[i + 1]);
        }
    }
}