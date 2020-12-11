#include "wasgo/wasgo.h"
#include "Input.h"
#include <stdio.h>
#include "InputEvent.h"
#include "InputEventMouseMotion.h"
#include "Spatial.h"

Vector2 mouse_speed;
Spatial plane;
float sensitivity;

void _ready(){
	// Input::set_mouse_mode(Input::MOUSE_MODE_CAPTURED);
	plane = (Spatial) WasGo::this_node().get_node((WasGo::get_property_nodepath("plane_node")));
	sensitivity = WasGo::get_property_float("sensitivity");
}

void _physics_process(float delta) {
	if (plane) {
		Input::set_mouse_mode(Input::MOUSE_MODE_CAPTURED);
		plane.rotate_object_local(Vector3(1, 0, 0), mouse_speed.y);
		plane.rotate_object_local(Vector3(0, 0, 1), mouse_speed.x);
	} else {
		plane = (Spatial)WasGo::this_node().get_node((WasGo::get_property_nodepath("plane_node")));
	}
}

void _input(InputEvent event){
	// InputEventMouse mouse_event = (InputEventMouse)event;
	InputEventMouseMotion mouse_motion = InputEventMouseMotion(InputEventMouse(InputEventWithModifiers(event)));
	mouse_speed = mouse_speed.linear_interpolate(mouse_motion.get_relative() / 1000, sensitivity);
	// printf("mouse speed: %d %d\n", int(mouse_speed.x * 1000), int(mouse_speed.y * 1000));
}