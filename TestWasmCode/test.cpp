#include <stdio.h>
#include "wasgo/wasgo.h"
#include "Spatial.h"
#include "WasGoState.h"

Spatial spin_node;

WasGoState other_state;

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
	// printf("ready callback\n");
	// Node this_node = WasGo::this_node();
	// NodePath other_path = WasGo::get_property_nodepath("other_state");
	// other_state = (WasGoState)this_node.get_node(WasGo::get_property_nodepath("other_state"));
	// if (other_state) {
	// 	printf("got node: %ls\n", other_state.get_name().ascii().ptr());
	// }
	// WasGo::set_property_int("pls just work2", 456);
}

void _process(float delta) {
	// printf("this code runs every frame\n");
	// Spatial spin_node = (Spatial)WasGo::this_node().get_node(WasGo::get_property("spin_node", Variant::NODE_PATH));
	// if (spin_node) {
	// 	printf("spin time %d\n", (int)(((float)WasGo::get_property("spin_speed")) * 100.0f));
	// 	spin_node.rotate_y(WasGo::get_property("spin_speed"));
	// } else {
	// 	printf("spin_node is null %d\n", spin_node._get_wasgo_id());
	// 	Node this_node = WasGo::this_node();
	// 	Variant path = WasGo::get_property("other_node", Variant::NODE_PATH);
	// 	spin_node = (Spatial)this_node.get_node(path);
	// }

	other_state = (WasGoState)WasGo::this_node().get_node(WasGo::get_property_nodepath("other_state"));
	if (other_state) {
		// other_state.set_int_property(69, "asdfasdfasdfasdf");
		other_state.set_property_int("asdfasdfasdfasdf", 69);
		// other_state.set_property_string("foo", "bar");
		// other_state.set_property_vector3("asdff", Vector3(1,2,3));
		// printf("got node: %ls\n", other_state.get_name().ascii().ptr());
	} else {
		printf("other state doesn't exist\n");
		other_state = (WasGoState)WasGo::this_node().get_node(WasGo::get_property_nodepath("other_state"));
	}
}

	// void _input(InputEvent event){
	// 	// printf("We got input!!!: %ls\n", event.as_text().ascii().ptr());
	// }

	// void _unhandled_key_input(InputEventKey p_key_event){
	// 	// printf("we got the key: %ls\n", p_key_event.as_text().ascii().ptr());
	// 	if (other_state) {
	// 		printf("other state's property being set\n");
	// 		other_state.set_property_int("some_property", 123);
	// 		printf("other state property set to %d\n", (int)other_state.get_property_int("some_property"));
	// 	} else {
	// 		printf("other state doesn't exist\n");
	// 		other_state = (WasGoState)WasGo::this_node().get_node(WasGo::get_property_nodepath("other_state"));
	// 	}
	// }