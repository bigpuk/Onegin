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

    

    //return strcmp(str1, str2);

    //.-, !?*;()':

    char *strtemp1 = (char*)calloc(strlen(str1) + 1, sizeof(char));
    char *strtemp2 = (char*)calloc(strlen(str2) + 1, sizeof(char));

    // for(size_t current_elem = 0; current_elem < strlen(str1); current_elem++) strtemp1[current_elem] = tolower((int) str1[current_elem]);
    // for(size_t current_elem = 0; current_elem < strlen(str2); current_elem++) strtemp2[current_elem] = tolower((int) str2[current_elem]);

   // int tempelem1 = 0, tempelem2 = 0;
   // int isletter1 = -5, isletter2 = -5;
    size_t current_temp1 = 0, current_temp2 = 0;

    size_t minlen = 0;

    if(strlen(str1) < strlen(str2)) minlen = strlen(str2);
    else minlen = strlen(str1);

    size_t current_elem = 0;

    //strcat(strtemp1, "\0");

    while(str1[current_elem] != '\0' && str2[current_elem] != '\0')
    {
        if( str1[current_elem] != '.' && 
            str1[current_elem] != '-' &&
            str1[current_elem] != ',' &&
            str1[current_elem] != ' ' &&
            str1[current_elem] != '!' &&
            str1[current_elem] != '?' &&
            str1[current_elem] != '*' &&
            str1[current_elem] != ';' &&
            str1[current_elem] != '(' &&
            str1[current_elem] != ')' &&
            str1[current_elem] != '"' &&
            str1[current_elem] != ':')
            {
                strtemp1[current_temp1] = (char) tolower(str1[current_elem]);
                current_temp1++;
            }

        if( str2[current_elem] != '.' && 
            str2[current_elem] != '-' &&
            str2[current_elem] != ',' &&
            str2[current_elem] != ' ' &&
            str2[current_elem] != '!' &&
            str2[current_elem] != '?' &&
            str2[current_elem] != '*' &&
            str2[current_elem] != ';' &&
            str2[current_elem] != '(' &&
            str2[current_elem] != ')' &&
            str2[current_elem] != '"' &&
            str2[current_elem] != ':')
            {
                strtemp2[current_temp2] = (char) tolower(str2[current_elem]);
                current_temp2++;
            }

            current_elem++;
    }

    minlen = 0;

    if(strlen(strtemp1) < strlen(strtemp2)) minlen = current_temp2;
    else minlen = current_temp1;

    for(size_t temp_elem = 0; temp_elem < minlen; temp_elem++)
    {
        if(strtemp1[temp_elem] < strtemp2[temp_elem]) return -1;
        else if(strtemp1[temp_elem] > strtemp2[temp_elem]) return 1;

        if(strtemp1[temp_elem] == '\0' && strtemp2[temp_elem] == '\0') return 0;
        else if(strtemp1[temp_elem] == '\0') return -1;
        else if(strtemp2[temp_elem] == '\0') return 1;
    }

    return 999;
}