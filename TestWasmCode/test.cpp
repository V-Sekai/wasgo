
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wasgo/wasgo.h"

extern "C" {
int test(){
	printf("this is my new test function 2");
	return 57;
}
}

void _notification(int p_what) {
	printf("it worked");
}
