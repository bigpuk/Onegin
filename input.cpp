#include <TXLib.h>
#include <assert.h>
#include <sys/stat.h>
#include <string.h>

#include "input.h"

void input(FILE *text, char *text_lines)
{
    assert(text_lines);
    assert(text);

    struct stat file_info = {};

    stat("Onegin.txt", &file_info);         //long      //TODO stat man; проверки
        // TODO there is repeated file name

    size_t i = 0;

    while(text_lines[i])
    {
        fscanf(text, "%s", &text_lines[i]);

        i++;
    }

    strcat(text_lines, "\0");

    i = 0;  // TODO da ti zaebal ...
    // BUG write normal variables names

    while(text_lines[i])
    {
        if(text_lines[i] == '\r' || text_lines[i] == '\n') text_lines[i] = '\0';
    }
}