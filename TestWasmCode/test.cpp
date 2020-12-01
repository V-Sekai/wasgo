
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "otherfile.h"
// #include "ustring.cpp"
// #include "Variant.cpp"
// #include "hashfuncs.h"
#include "wasgo/wasgo.h"

extern "C"{
void _notification(int p_what) {
	String bro = "hello world";
	printf("we just made a variant\n");
	printf("the variant value is: %s", bro.ascii().ptrw());
	printf("\n");

	Variant var = bro;
	
}
}

extern "C" {
void asdfasdf(int p_what) {
	printf("in the special function that we exported\n");
	// printf("the variant value is: ");
	// printf((char const *)bro.c_str());
	// printf("\n");
}
}

// extern "C" {
// int test(){
// 	printf("this is my new test function 4");
// 	_notification(0);
// 	return 57;
// }
// }
// extern "C" {
// int test() {
// 	_notification(0);
// 	Test::testMe();
// 	return 11111111;
// }
// }