#include <TXLib.h>
#include <assert.h>
#include <sys/stat.h>
#include <string.h>

#include "input.h"

int input(FILE *text, char *text_lines, const char *file_name)
{
    assert(text_lines);
    assert(text);

    struct stat file_info = {};

    stat(file_name, &file_info);         //long      //TODO stat man; проверки

    size_t symbol_num = 0;

    while(text_lines[symbol_num])
    {
        fscanf(text, "%s", &text_lines[symbol_num]);

        symbol_num++;
    }

    strcat(text_lines, "\0");

    size_t str_num = 0;

    for(size_t i = 0; i < symbol_num; i++)
    {
        if(text_lines[i] == '\0' && text_lines[i + 1] == '\0') str_num++;
    }

    symbol_num = 0;

    while(text_lines[symbol_num])
    {
        if(text_lines[symbol_num] == '\r' || text_lines[symbol_num] == '\n') text_lines[symbol_num] = '\0';
    }

    return str_num;
}