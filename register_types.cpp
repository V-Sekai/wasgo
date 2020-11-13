#include "register_types.h"
#include "stdio.h"
#include "src/Test.h"
#include "src/wasgo_state.h"

void register_WasGo_types() {
	printf("REGISTERING WASGO\n");
	printf("Creating some test wasgo objects\n");

	WasGoTest::test();

	printf("DONE\n");
	ClassDB::register_class<WasGoState>();
}

void unregister_WasGo_types(){

}