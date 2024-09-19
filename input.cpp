#include <TXLib.h>
#include <assert.h>
#include <sys/stat.h>
#include <string.h>

#include "input.h"

void input(FILE *text, char *text_lines, const char *file_name)
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

    symbol_num = 0;
    
    while(text_lines[symbol_num])
    {
        if(text_lines[symbol_num] == '\r' || text_lines[symbol_num] == '\n') text_lines[symbol_num] = '\0';
    }
}