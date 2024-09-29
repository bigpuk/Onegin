#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <assert.h>

#include "input.h"
#include "my_strcmp.h"
#include "text_split.h"
#include "str_sort.h"
#include "output.h"
#include "common.h"

int main()
{
    common data = {};
    
    input(&data);

    text_split(&data);
    
    str_sort(&data);

    output(&data);
}