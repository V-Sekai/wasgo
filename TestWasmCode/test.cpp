#include <stdio.h>
#include "wasgo/wasgo.h"

void _notification(int p_what) {
	// printf("Getting a reference to this node\n");
	Node this_node = WasGo::this_node();
	String this_name = this_node.get_name();
	// printf("%ls\n", this_name.ascii().ptrw());
	// NodePath path("/MainScene/ThisIsMySpatialNode/NestedSpatial");
	// Node node2 = this_node.get_node(path);

	StringName str_name_test;
	
	str_name_test = "asdfasdfasdf";
	printf("string name test = %ls\n", String(str_name_test).ascii().ptrw());

	// printf("this is the target node path: %ls\n", String(path.get_concatenated_subnames()).ascii().ptr());
	// printf("this is the current node path: %ls\n", String(this_node.get_path().get_name(0)).ascii().ptr());
	// printf("%ls\n", node2.get_name().ascii().ptrw());
}