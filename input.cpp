#include <stdio.h>
#include <assert.h>
#include <sys/stat.h>
#include <string.h>

#include "input.h"

int input(FILE *text, char *buffer, const char *file_name, size_t file_size)
{
    assert(buffer);
    assert(text);
    assert(file_name);
    //long      //TODO stat man; проверки

    // while(buffer[symbol_num - 1])
    // {
    //     fscanf(text, "%s", &buffer[symbol_num]);
    //     printf("%d", symbol_num);

    //     symbol_num++;
    // }

    fread(buffer, sizeof(char), file_size, text);

    //strcat(buffer, "\0");

    size_t str_num = 0;

    size_t beginning_check = 1;

    for(size_t current_symbol = 0; current_symbol < file_size; current_symbol++)
    {
        if(buffer[current_symbol] == '\r' || buffer[current_symbol] == '\n') buffer[current_symbol] = '\0';
    }

    for(size_t current_symbol = 0; current_symbol < file_size; current_symbol++)
    {
        if(beginning_check) str_num++;

        if(buffer[current_symbol - 1] == '\0' && buffer[current_symbol] != '\0') beginning_check = 1;
        else beginning_check = 0;
    }

    strcat(buffer, "\0");

    return str_num;
}