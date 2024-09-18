#include <TXLib.h>
#include <assert.h>

#include "str_size.h"

int str_size(char *line)
{
    assert(line);

    size_t count = 0;

    while(line)
    {
        count++;
        line++;
    }

    return count;
}