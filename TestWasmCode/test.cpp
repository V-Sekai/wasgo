#include <stdio.h>
#include "wasgo/wasgo.h"
#include "Spatial.h"

Spatial spin_node;

// void _ready() {
// 	Node this_node = WasGo::this_node();
// 	Variant path = WasGo::get_property("other_node", Variant::NODE_PATH);
// 	printf("NodePath: %ls\n", String(path).ascii().ptr());
// 	if (path.booleanize()) {
// 		spin_node = (Spatial)this_node.get_node(path);
// 		if (spin_node._get_wasgo_id()) {
// 			printf("rotating wasgo object id but not locally: %d\n", spin_node._get_wasgo_id());
// 			// node2.rotate_object_local(Vector3(0, 1, 0), 0.1f);
// 			// spin_node.rotate_y(0.1);
// 		} else {
// 			printf("unable to rotate wasgo object id: %d\n", spin_node._get_wasgo_id());
// 		}
// 	} else {
// 		printf("path was not valid :(\n");
// 	}
// 	// printf("This is the name of the node from the node path: %ls\n", node2.get_name().ascii().ptrw());
// }

void _ready() {
	printf("ready callback\n");
}

void _process(float delta) {
	printf("this code runs every frame\n");
	Spatial spin_node = (Spatial)WasGo::this_node().get_node(WasGo::get_property("spin_node", Variant::NODE_PATH));
	if (spin_node) {
		printf("spin time %d\n", (int)(((float)WasGo::get_property("spin_speed")) * 100.0f));
		spin_node.rotate_y(WasGo::get_property("spin_speed"));
	} else {
		printf("spin_node is null %d\n", spin_node._get_wasgo_id());
		Node this_node = WasGo::this_node();
		Variant path = WasGo::get_property("other_node", Variant::NODE_PATH);
		spin_node = (Spatial)this_node.get_node(path);
	}
}