#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

    size_t current_symbol1 = 0, current_symbol2 = 0;

    char temp1 = '0';
    char temp2 = '0';

    while(str1[current_symbol1] && str2[current_symbol2])
    {
        while(isdigit(str1[current_symbol1]) && ispunct(str1[current_symbol1]) && isspace(str1[current_symbol1])) current_symbol1++;
        while(isdigit(str2[current_symbol2]) && ispunct(str2[current_symbol2]) && isspace(str2[current_symbol2])) current_symbol2++;

        temp1 = str1[current_symbol1];
        temp2 = str2[current_symbol2];

        temp1 = (char)tolower(temp1);
        temp2 = (char)tolower(temp2);

        if(temp1 < temp2) return -1;
        else if(temp1 > temp2) return 1;
    }
    
    return 0;
}