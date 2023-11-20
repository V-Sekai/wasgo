#ifndef WASGO_TEST_H
#define WASGO_TEST_H

#include "core/variant/variant.h"
#include "scene/main/node.h"

class WasGoTest : public Object {
	GDCLASS(WasGoTest, Object);

public:
	WasGoTest();

	static int test();
};

#endif