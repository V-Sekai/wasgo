#include "register_types.h"
#include "stdio.h"
#include "src/Test.h"

void register_WasGo_types() {
	printf("REGISTERING WASGO\n");
	printf("Creating some test wasgo objects\n");

	WasGoTest::test();

	printf("DONE\n");
}

void unregister_WasGo_types(){

}