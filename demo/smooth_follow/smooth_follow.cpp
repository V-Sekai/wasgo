#include "wasgo/wasgo.h"
#include "Spatial.h"

Spatial parent;
Spatial child;
float smoothness;
Transform last_transform;

void _ready() {
	child = (Spatial)WasGo::this_node().get_node(WasGo::get_property_nodepath("child_node"));
	parent = (Spatial)WasGo::this_node().get_node(WasGo::get_property_nodepath("parent_node"));
	smoothness = WasGo::get_property_float("smoothness");
}

void _process(float delta){
	if(child && parent){
		Transform parent_transform = parent.get_transform();
		last_transform = parent_transform.interpolate_with(last_transform, smoothness);
		last_transform.set_basis(parent_transform.get_basis().slerp(last_transform.get_basis(), smoothness / 2));
		child.set_transform(last_transform);
		// child.set_rotation(parent.get_rotation() / 0.5);
	} else {
		child = (Spatial) WasGo::this_node().get_node(WasGo::get_property_nodepath("child_node"));
		parent = (Spatial) WasGo::this_node().get_node(WasGo::get_property_nodepath("parent_node"));
		last_transform = child.get_transform();
	}
}