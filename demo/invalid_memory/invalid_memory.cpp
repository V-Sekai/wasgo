
#include <stdio.h>
#include "wasgo/wasgo.h"
#include "keyboard.h"

bool crash_time = false;

void _ready() {
	printf("Memory access violation script loaded. Press 2 to write to an illegal memory address.\n");
}

void _unhandled_key_input(InputEventKey p_key_event) {
	p_key_event.get_scancode();
	switch (p_key_event.get_scancode()) {
		case KEY_2: {
			crash_time = true;
		} break;

		default:
			break;
	}
}

void _process(float delta){
	if (crash_time) {
		// crash_time = false;
		int bad_address = (int)(delta * 100000000000);
		int *ptr = (int *)bad_address;
		printf("writing to memory address: %d\n", bad_address);
		*ptr = 100;
	}
}