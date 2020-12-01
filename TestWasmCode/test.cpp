
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include "wasgo/wasgo.h"

extern "C" {
void _notification(int p_what) {
	printf("are we sure it worked?");
}
}
extern "C" {
int test(){
	printf("this is my new test function 4");
	// _notification(0);
	return 57;
}
}

