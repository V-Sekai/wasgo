#include <stdio.h>
#include "wasgo/wasgo.h"
#include "Spatial.h"

void _notification(int p_what) {
	// printf("Getting a reference to this node\n");
	Node this_node = WasGo::this_node();
	String this_name = this_node.get_name();
	// printf("%ls\n", this_name.ascii().ptrw());
	Variant path = WasGo::get_property("other_node", Variant::NODE_PATH);
	String test_str = WasGo::get_property("string_key", Variant::STRING);
	int test_int = WasGo::get_property("int_key", Variant::INT);
	printf("%ls\n", this_name.ascii().ptr());
	printf("NodePath: %ls\n", String(path).ascii().ptr());
	printf("test_str: %ls\n", test_str.ascii().ptr());
	printf("test_int: %d\n", test_int);

	Spatial node2 = (Spatial) this_node.get_node(path);
	node2.rotate_object_local(Vector3(0,1,0), 0.1f);

	printf("This is the name of the node from the node path: %ls\n", node2.get_name().ascii().ptrw());
}