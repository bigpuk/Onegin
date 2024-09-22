#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <assert.h>

#include "input.h"
#include "my_strcmp.h"
#include "text_split.h"
#include "str_sort.h"
#include "output.h"

int main()
{
    const char *file_name = "Onegin.txt";

    FILE* text_data = fopen(file_name, "r");

    assert(text_data);                         // TODO read about argc argv 

    struct stat file_info = {};

    stat(file_name, &file_info);

    size_t file_size = file_info.st_size;

    char *buffer = (char *)calloc(file_size, sizeof(char *));

    if(!buffer)
    {
        printf("Out of memory!");

        return 1;
    }

    input(text_data, buffer, file_name, file_size);

    char **line_ptrs = (char **)calloc(file_size, sizeof(char **));

    size_t ptr_num = text_split(buffer, line_ptrs, file_size);

    str_sort(line_ptrs, file_size);

    output(line_ptrs, ptr_num);
    

    char s1[] = "asd";
    char s2[] = "zxc";
    printf("%d", my_strcmp(s1, s2));
}