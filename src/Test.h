#ifndef WASGO_TEST_H
#define WASGO_TEST_H

// #include <core/engine.h>
// #include <core/variant.h>
#include <core/variant/variant.h>
#include <scene/main/node.h>

class WasGoTest : public Object {
	GDCLASS(WasGoTest, Object);

public:
	WasGoTest();

	static int test();
	// static void assert(char *test_name, bool assertion);
	// static void assert(char *test_name, float value1, float value2);
};

#endif