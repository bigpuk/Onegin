#include <TXLib.h>
#include <string.h>
#include <assert.h>

#include "str_swap.h"
#include "str_size.h"
#include "my_strcmp.h"

void str_swap(char *line1, char *line2)
{
    assert(line1);
    assert(line2);  

    char *ptr_temp = 0;   // FIXME char *ptr_temp = NULL;  NULL for pointers (nullptr better)

    if(my_strcmp(line1, line2) == 1)
    {                                       // TODO swap pointers
        ptr_temp = line1;
        line1 = line2;
        line2 = ptr_temp;
    }
}