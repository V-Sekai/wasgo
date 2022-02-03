#ifndef WASGO_FUNCTION_TABLE
#define WASGO_FUNCTION_TABLE
#include "wasm_export.h"
#include "src/wasgo_state.h"
#include "wasgo_math.h"
#include "wasgo_native_wrappers.h"
#include <math.h>
static NativeSymbol native_symbols[] = 
{
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_this_node,"()i"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_bool,"(*~)i"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_bool,"(*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_int,"(*~)i"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_int,"(*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_float,"(*~)f"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_float,"(*~f)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_string,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_string,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_vector2,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_vector2,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_rect2,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_rect2,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_vector3,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_vector3,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_transform2d,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_transform2d,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_plane,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_plane,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_quat,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_quat,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_basis,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_basis,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_aabb,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_aabb,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_transform,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_transform,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_color,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_color,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_nodepath,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_nodepath,"(*~*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_get_property_object,"(*~)i"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_property_object,"(*~i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_process,"(i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_physics_process,"(i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_process_internal,"(i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_physics_process_internal,"(i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_process_input,"(i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_process_unhandled_input,"(i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_set_process_unhandled_key_input,"(i)"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_is_processing,"()"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_is_physics_processing,"()"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_is_processing_internal,"()"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_is_physics_processing_internal,"()"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_is_processing_input,"()"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_is_processing_unhandled_input,"()"),
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_is_processing_unhandled_key_input,"()"),
//MATH
{"cos",(void *) _wasgo_cos, "(F)F", nullptr},
{"sin",(void *) _wasgo_sin, "(F)F", nullptr},
{"tan",(void *) _wasgo_tan, "(F)F", nullptr},
{"acos",(void *) _wasgo_acos, "(F)F", nullptr},
{"asin",(void *) _wasgo_asin, "(F)F", nullptr},
{"atan",(void *) _wasgo_atan, "(F)F", nullptr},
{"atan2",(void *) _wasgo_atan2, "(FF)F", nullptr},
{"cosf",(void *) _wasgo_cosf, "(f)f", nullptr},
{"sinf",(void *) _wasgo_sinf, "(f)f", nullptr},
{"tanf",(void *) _wasgo_tanf, "(f)f", nullptr},
{"acosf",(void *) _wasgo_acosf, "(f)f", nullptr},
{"asinf",(void *) _wasgo_asinf, "(f)f", nullptr},
{"atanf",(void *) _wasgo_atanf, "(f)f", nullptr},
{"atan2f",(void *) _wasgo_atan2f, "(ff)f", nullptr},
{"rand",(void *) _wasgo_rand, "()i", nullptr},

//Variant
EXPORT_WASM_API_WITH_SIG(_wasgo_variant_deconstructor,"(I)"),

//Input
EXPORT_WASM_API_WITH_SIG((void *)_wasgo_is_processing_unhandled_key_input,"()"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_action_press, "(*~f)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_action_release, "(*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_add_joy_mapping, "(*~i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_accelerometer, "(*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_action_strength, "(*~)f"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_connected_joypads, "()i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_current_cursor_shape, "()i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_gravity, "(*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_gyroscope, "(*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_joy_axis, "(ii)f"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_joy_axis_index_from_string, "(*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_joy_axis_string, "(*~i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_joy_button_index_from_string, "(*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_joy_button_string, "(*~i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_joy_guid, "(*~i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_joy_name, "(*~i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_joy_vibration_duration, "(i)f"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_joy_vibration_strength, "(*~i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_last_mouse_speed, "(*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_magnetometer, "(*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_mouse_button_mask, "()i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_get_mouse_mode, "()i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_is_action_just_pressed, "(*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_is_action_just_released, "(*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_is_action_pressed, "(*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_is_joy_button_pressed, "(ii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_is_joy_known, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_is_key_pressed, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_is_mouse_button_pressed, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_joy_connection_changed, "(ii*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_parse_input_event, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_remove_joy_mapping, "(*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_set_custom_mouse_cursor, "(ii*~i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_set_default_cursor_shape, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_set_mouse_mode, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_set_use_accumulated_input, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_start_joy_vibration, "(iffif)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_stop_joy_vibration, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_vibrate_handheld, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Input_wrapper_warp_mouse_position, "(*~)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_Input_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_accumulate, "(ii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_as_text, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_get_action_strength, "(i*~)f"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_get_device, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_is_action, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_is_action_pressed, "(i*~ii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_is_action_released, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_is_action_type, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_is_echo, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_is_pressed, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_set_device, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_shortcut_match, "(ii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_wrapper_xformed_by, "(i*~i*~)i"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_InputEvent_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventAction_wrapper_get_action, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventAction_wrapper_get_strength, "(i)f"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventAction_wrapper_set_action, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventAction_wrapper_set_pressed, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventAction_wrapper_set_strength, "(if)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventAction_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventKey_wrapper_get_scancode, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventKey_wrapper_get_scancode_with_modifiers, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventKey_wrapper_get_unicode, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventKey_wrapper_set_echo, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventKey_wrapper_set_pressed, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventKey_wrapper_set_scancode, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventKey_wrapper_set_unicode, "(ii)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventKey_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouse_wrapper_get_button_mask, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouse_wrapper_get_global_position, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouse_wrapper_get_position, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouse_wrapper_set_button_mask, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouse_wrapper_set_global_position, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouse_wrapper_set_position, "(i*~)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouse_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseButton_wrapper_get_button_index, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseButton_wrapper_get_factor, "(i)f"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseButton_wrapper_is_doubleclick, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseButton_wrapper_set_button_index, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseButton_wrapper_set_doubleclick, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseButton_wrapper_set_factor, "(if)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseButton_wrapper_set_pressed, "(ii)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseButton_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseMotion_wrapper_get_pressure, "(i)f"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseMotion_wrapper_get_relative, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseMotion_wrapper_get_speed, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseMotion_wrapper_get_tilt, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseMotion_wrapper_set_pressure, "(if)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseMotion_wrapper_set_relative, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseMotion_wrapper_set_speed, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseMotion_wrapper_set_tilt, "(i*~)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventMouseMotion_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_wrapper_get_alt, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_wrapper_get_command, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_wrapper_get_control, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_wrapper_get_metakey, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_wrapper_get_shift, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_wrapper_set_alt, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_wrapper_set_command, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_wrapper_set_control, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_wrapper_set_metakey, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_wrapper_set_shift, "(ii)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_InputEventWithModifiers_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_add_child, "(iii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_add_child_below_node, "(iiiii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_add_to_group, "(i*~ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_can_process, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_duplicate, "(ii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_find_node, "(i*~iii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_find_parent, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_child, "(ii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_child_count, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_children, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_custom_multiplayer, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_filename, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_groups, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_index, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_multiplayer, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_name, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_network_master, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_node, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_node_and_resource, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_node_or_null, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_owner, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_parent, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_path, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_path_to, "(i*~ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_pause_mode, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_physics_process_delta_time, "(i)f"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_position_in_parent, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_process_delta_time, "(i)f"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_process_priority, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_scene_instance_load_placeholder, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_tree, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_get_viewport, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_has_node, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_has_node_and_resource, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_a_parent_of, "(ii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_displayed_folded, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_greater_than, "(ii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_in_group, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_inside_tree, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_network_master, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_physics_processing, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_physics_processing_internal, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_processing, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_processing_input, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_processing_internal, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_processing_unhandled_input, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_is_processing_unhandled_key_input, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_move_child, "(iii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_print_stray_nodes, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_print_tree, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_print_tree_pretty, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_propagate_call, "(i*~iii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_propagate_notification, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_queue_free, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_raise, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_remove_and_skip, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_remove_child, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_remove_from_group, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_replace_by, "(iii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_request_ready, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_rpc, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_rpc_config, "(i*~ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_rpc_id, "(i*~ii*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_rpc_unreliable, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_rpc_unreliable_id, "(i*~ii*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_rset, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_rset_config, "(i*~ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_rset_id, "(ii*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_rset_unreliable, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_rset_unreliable_id, "(ii*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_custom_multiplayer, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_display_folded, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_filename, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_name, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_network_master, "(iii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_owner, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_pause_mode, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_physics_process, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_physics_process_internal, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_process, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_process_input, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_process_internal, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_process_priority, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_process_unhandled_input, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_process_unhandled_key_input, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_set_scene_instance_load_placeholder, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node_wrapper_update_configuration_warning, "(i)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_Node_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_duplicate, "(ii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_get_local_scene, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_get_name, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_get_path, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_get_rid, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_is_local_to_scene, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_set_local_to_scene, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_set_name, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_set_path, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_setup_local_to_scene, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_wrapper_take_over_path, "(i*~)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_Resource_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_call_group, "(i*~i*~*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_call_group_flags, "(i*~ii*~*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_change_scene, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_change_scene_to, "(ii)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_create_timer, "(ifi)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_current_scene, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_edited_scene_root, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_frame, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_multiplayer, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_network_connected_peers, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_network_peer, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_network_unique_id, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_node_count, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_nodes_in_group, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_root, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_get_rpc_sender_id, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_has_group, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_has_network_peer, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_is_debugging_collisions_hint, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_is_debugging_navigation_hint, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_is_input_handled, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_is_multiplayer_poll_enabled, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_is_network_server, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_is_paused, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_is_refusing_new_network_connections, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_is_using_font_oversampling, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_notify_group, "(i*~ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_notify_group_flags, "(ii*~ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_queue_delete, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_quit, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_reload_current_scene, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_auto_accept_quit, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_current_scene, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_debug_collisions_hint, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_debug_navigation_hint, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_edited_scene_root, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_group, "(i*~i*~*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_group_flags, "(ii*~i*~*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_input_as_handled, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_multiplayer, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_multiplayer_poll_enabled, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_network_peer, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_pause, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_quit_on_go_back, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_refuse_new_network_connections, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_screen_stretch, "(iiii*~f)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_wrapper_set_use_font_oversampling, "(ii)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_SceneTree_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_force_update_transform, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_get_gizmo, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_get_global_transform, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_get_parent_Node3D, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_get_rotation, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_get_rotation_degrees, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_get_scale, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_get_transform, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_get_translation, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_get_world, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_global_rotate, "(i*~if)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_global_scale, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_global_translate, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_hide, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_is_local_transform_notification_enabled, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_is_scale_disabled, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_is_set_as_toplevel, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_is_transform_notification_enabled, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_is_visible, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_is_visible_in_tree, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_look_at, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_look_at_from_position, "(i*~i*~*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_orthonormalize, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_rotate, "(i*~if)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_rotate_object_local, "(i*~if)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_rotate_x, "(if)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_rotate_y, "(if)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_rotate_z, "(if)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_scale_object_local, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_as_toplevel, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_disable_scale, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_gizmo, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_global_transform, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_identity, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_ignore_transform_notification, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_notify_local_transform, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_notify_transform, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_rotation, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_rotation_degrees, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_scale, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_transform, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_translation, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_set_visible, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_show, "(i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_to_global, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_to_local, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_translate, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_translate_object_local, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_wrapper_update_gizmo, "(i)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_Node3D_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_VelocityTracker3D_wrapper_get_tracked_linear_velocity, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_VelocityTracker3D_wrapper_is_tracking_physics_step, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_VelocityTracker3D_wrapper_reset, "(i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_VelocityTracker3D_wrapper_set_track_physics_step, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_VelocityTracker3D_wrapper_update_position, "(i*~)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_VelocityTracker3D_constructor,"()i"),
        
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_heap_size, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_properties, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_aabb, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_basis, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_bool, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_color, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_float, "(i*~)f"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_int, "(i*~)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_nodepath, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_plane, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_quat, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_rect2, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_string, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_transform, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_transform2d, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_vector2, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_property_vector3, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_stack_size, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_get_wasm_script, "(i)i"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_heap_size, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_int_property, "(ii*~i)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_properties, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_aabb, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_basis, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_bool, "(i*~ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_color, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_float, "(i*~if)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_int, "(i*~ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_nodepath, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_plane, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_quat, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_rect2, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_string, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_transform, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_transform2d, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_vector2, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_property_vector3, "(i*~i*~)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_stack_size, "(ii)"),
// 	EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_wrapper_set_wasm_script, "(ii)"),

//     EXPORT_WASM_API_WITH_SIG(_wasgo_WasGoState_constructor,"()i"),
        
};
#endif