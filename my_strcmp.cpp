#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "my_strcmp.h"

// int my_strcmp(const void *line1, const void *line2)
// { 
//     assert(line1);
//     assert(line2);
    
//     return strcmp((char *)line1, (char *)line2);
// }
int my_strcmp(const void *line1, const void *line2) 
{
    const char *str1 = *(const char **)line1;
    const char *str2 = *(const char **)line2;
    return strcmp(str1, str2);
}