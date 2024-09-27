#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <assert.h>

#include "input.h"
#include "my_strcmp.h"
#include "text_split.h"
#include "str_sort.h"
#include "output.h"
#include "common.h"

int main()
{
    //common data = {.line_ptrs = nullptr, .ptr_num = 0, .buffer = nullptr};
    common data = {};// = {.line_ptrs = nullptr, .ptr_num = 0, .buffer = nullptr, .file_size = 0};
    input(&data);

    text_split(&data);
    
    str_sort(&data);

    //qsort((void *) line_ptrs, ptr_num, sizeof(char*), my_strcmp);

    output(&data);
    
    // char s1[] = "asd";
    // char s2[] = "zxc";
    // printf("%d", my_strcmp(s1, s2));
}