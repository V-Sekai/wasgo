
#include <stdio.h>
#include "wasgo/wasgo.h"
#include "keyboard.h"

void foo(int i)
{
    int arr[10];
    arr[0] = 5;
    arr[9] = 10;
    foo (i + 1);
    printf("%d\n", arr[0] + arr[0]);
}

void _ready(){
	printf("Stack overflow script loaded. Press 1 to trigger a stack overflow.\n");
}

void _unhandled_key_input(InputEventKey p_key_event) {
	p_key_event.get_scancode();
	switch (p_key_event.get_scancode()) {
		case KEY_1: {
			printf("triggering\n");
			foo(1);
		} break;

		default:
			break;
	}
}