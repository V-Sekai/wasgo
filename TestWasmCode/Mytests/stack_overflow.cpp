
#include <stdio.h>
#include "wasgo/wasgo.h"

void foo(int i)
{
    int arr[10];
    arr[0] = 5;
    arr[9] = 10;
    foo (i + 1);
    printf("%d\n", arr[0] + arr[0]);
}

void _process(float delta)
{
    foo(1);
}