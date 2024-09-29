#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>

#include "input.h"

int input(common *data)
{
    assert(data);

    FILE* text_data = fopen(file_name, "r");
    if(!(text_data))
    {
        printf("Input error!");
        return 1;
    }                        // TODO read about argc argv 

    struct stat file_info = {};

    stat(file_name, &file_info);

    data->file_size = file_info.st_size;

    data->buffer = (char *)calloc(data->file_size + 1, sizeof(char));

    if(!data->buffer)
    {
        printf("Out of memory!");

        return 1;
    }

    fread(data->buffer, sizeof(char), data->file_size, text_data);

    for(size_t current_symbol = 0; current_symbol < data->file_size; current_symbol++)
    {
        if(data->buffer[current_symbol] == '\r' || data->buffer[current_symbol] == '\n') data->buffer[current_symbol] = '\0';
    }

    size_t beginning_check = 1;

    for(size_t current_line = 0; current_line < data->file_size; current_line++)
    {
        if(beginning_check) (data->ptr_num)++;

        if(((data->buffer)[current_line] == '\0') && ((data->buffer)[current_line + 1] != '\0')) beginning_check = 1;
        else beginning_check = 0;
    }

    data->line_ptrs = (char **)calloc(data->ptr_num, sizeof(char *));


    strcat(data->buffer, "\0");

    fclose(text_data);

    return 0;
}