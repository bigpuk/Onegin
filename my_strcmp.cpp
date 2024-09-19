#include <string.h>
#include <TXLib.h>

#include "my_strcmp.h"

int my_strcmp(char *line1, char *line2)
{ 
    assert(line1);
    assert(line2);
    
    return strcmp(line1, line2);
}