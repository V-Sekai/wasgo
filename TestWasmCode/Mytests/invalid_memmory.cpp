
#include <stdio.h>
#include "wasgo/wasgo.h"

void _process(float delta)
{
    int *x;
    x = 0;
    printf("overwriting null\n");
    *x = 5;

}