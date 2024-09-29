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
    
    qsort((void *)(data->line_ptrs), data->ptr_num, sizeof(char *), my_strcmp);
}