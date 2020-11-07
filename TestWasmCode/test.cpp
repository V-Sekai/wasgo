
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern "C" {
int intToStr(int x, char *str, int str_len, int digit);
int get_pow(int x, int y);
int32_t calculate_native(int32_t n, int32_t func1, int32_t func2);

int test(){
	// printf("this is my new test function");
	return 57;
}
}