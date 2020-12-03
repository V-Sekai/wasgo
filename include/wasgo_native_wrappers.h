#ifndef WASGO_NATIVE_WRAPPER_HEADERS
#define WASGO_NATIVE_WRAPPER_HEADERS
#include "wasm_export.h"
#include "wasgo_state.h"
#include "core/io/marshalls.h"
#include "core/variant.h"
#include "scene/register_scene_types.h"
#include "scene/scene_string_names.h"
#include "scene/2d/animated_sprite.h"
#include "scene/2d/area_2d.h"
#include "scene/2d/audio_stream_player_2d.h"
#include "scene/2d/back_buffer_copy.h"
#include "scene/2d/camera_2d.h"
#include "scene/2d/canvas_item.h"
#include "scene/2d/canvas_modulate.h"
#include "scene/2d/collision_object_2d.h"
#include "scene/2d/collision_polygon_2d.h"
#include "scene/2d/collision_shape_2d.h"
#include "scene/2d/cpu_particles_2d.h"
#include "scene/2d/joints_2d.h"
#include "scene/2d/light_2d.h"
#include "scene/2d/light_occluder_2d.h"
#include "scene/2d/line_2d.h"
#include "scene/2d/line_builder.h"
#include "scene/2d/mesh_instance_2d.h"
#include "scene/2d/multimesh_instance_2d.h"
#include "scene/2d/navigation_2d.h"
#include "scene/2d/navigation_polygon.h"
#include "scene/2d/node_2d.h"
#include "scene/2d/parallax_background.h"
#include "scene/2d/parallax_layer.h"
#include "scene/2d/particles_2d.h"
#include "scene/2d/path_2d.h"
#include "scene/2d/physics_body_2d.h"
#include "scene/2d/polygon_2d.h"
#include "scene/2d/position_2d.h"
#include "scene/2d/ray_cast_2d.h"
#include "scene/2d/remote_transform_2d.h"
#include "scene/2d/skeleton_2d.h"
#include "scene/2d/sprite.h"
#include "scene/2d/tile_map.h"
#include "scene/2d/touch_screen_button.h"
#include "scene/2d/visibility_notifier_2d.h"
#include "scene/2d/y_sort.h"
#include "scene/3d/area.h"
#include "scene/3d/arvr_nodes.h"
#include "scene/3d/audio_stream_player_3d.h"
#include "scene/3d/baked_lightmap.h"
#include "scene/3d/bone_attachment.h"
#include "scene/3d/camera.h"
#include "scene/3d/collision_object.h"
#include "scene/3d/collision_polygon.h"
#include "scene/3d/collision_shape.h"
#include "scene/3d/cpu_particles.h"
#include "scene/3d/gi_probe.h"
#include "scene/3d/immediate_geometry.h"
#include "scene/3d/interpolated_camera.h"
#include "scene/3d/light.h"
#include "scene/3d/listener.h"
#include "scene/3d/mesh_instance.h"
#include "scene/3d/multimesh_instance.h"
#include "scene/3d/navigation.h"
#include "scene/3d/navigation_mesh.h"
#include "scene/3d/particles.h"
#include "scene/3d/path.h"
#include "scene/3d/physics_body.h"
#include "scene/3d/physics_joint.h"
#include "scene/3d/position_3d.h"
#include "scene/3d/proximity_group.h"
#include "scene/3d/ray_cast.h"
#include "scene/3d/reflection_probe.h"
#include "scene/3d/remote_transform.h"
#include "scene/3d/skeleton.h"
#include "scene/3d/soft_body.h"
#include "scene/3d/spatial.h"
#include "scene/3d/spatial_velocity_tracker.h"
#include "scene/3d/spring_arm.h"
#include "scene/3d/sprite_3d.h"
#include "scene/3d/vehicle_body.h"
#include "scene/3d/visibility_notifier.h"
#include "scene/3d/visual_instance.h"
#include "scene/3d/voxel_light_baker.h"
#include "scene/3d/world_environment.h"
#include "scene/animation/animation_blend_space_1d.h"
#include "scene/animation/animation_blend_space_2d.h"
#include "scene/animation/animation_blend_tree.h"
#include "scene/animation/animation_cache.h"
#include "scene/animation/animation_node_state_machine.h"
#include "scene/animation/animation_player.h"
#include "scene/animation/animation_tree.h"
#include "scene/animation/animation_tree_player.h"
#include "scene/animation/root_motion_view.h"
#include "scene/animation/skeleton_ik.h"
#include "scene/animation/tween.h"
#include "scene/audio/audio_stream_player.h"
#include "scene/debugger/script_debugger_remote.h"
#include "scene/gui/base_button.h"
#include "scene/gui/box_container.h"
#include "scene/gui/button.h"
#include "scene/gui/center_container.h"
#include "scene/gui/check_box.h"
#include "scene/gui/check_button.h"
#include "scene/gui/color_picker.h"
#include "scene/gui/color_rect.h"
#include "scene/gui/container.h"
#include "scene/gui/control.h"
#include "scene/gui/dialogs.h"
#include "scene/gui/file_dialog.h"
#include "scene/gui/gradient_edit.h"
#include "scene/gui/graph_edit.h"
#include "scene/gui/graph_node.h"
#include "scene/gui/grid_container.h"
#include "scene/gui/item_list.h"
#include "scene/gui/label.h"
#include "scene/gui/line_edit.h"
#include "scene/gui/link_button.h"
#include "scene/gui/margin_container.h"
#include "scene/gui/menu_button.h"
#include "scene/gui/nine_patch_rect.h"
#include "scene/gui/option_button.h"
#include "scene/gui/panel.h"
#include "scene/gui/panel_container.h"
#include "scene/gui/popup.h"
#include "scene/gui/popup_menu.h"
#include "scene/gui/progress_bar.h"
#include "scene/gui/range.h"
#include "scene/gui/reference_rect.h"
#include "scene/gui/rich_text_effect.h"
#include "scene/gui/rich_text_label.h"
#include "scene/gui/scroll_bar.h"
#include "scene/gui/scroll_container.h"
#include "scene/gui/separator.h"
#include "scene/gui/shortcut.h"
#include "scene/gui/slider.h"
#include "scene/gui/spin_box.h"
#include "scene/gui/split_container.h"
#include "scene/gui/tabs.h"
#include "scene/gui/tab_container.h"
#include "scene/gui/texture_button.h"
#include "scene/gui/texture_progress.h"
#include "scene/gui/texture_rect.h"
#include "scene/gui/text_edit.h"
#include "scene/gui/tool_button.h"
#include "scene/gui/tree.h"
#include "scene/gui/video_player.h"
#include "scene/gui/viewport_container.h"
#include "scene/main/canvas_layer.h"
#include "scene/main/http_request.h"
#include "scene/main/instance_placeholder.h"
#include "scene/main/node.h"
#include "scene/main/resource_preloader.h"
#include "scene/main/scene_tree.h"
#include "scene/main/timer.h"
#include "scene/main/viewport.h"
#include "scene/resources/animation.h"
#include "scene/resources/audio_stream_sample.h"
#include "scene/resources/bit_map.h"
#include "scene/resources/box_shape.h"
#include "scene/resources/capsule_shape.h"
#include "scene/resources/capsule_shape_2d.h"
#include "scene/resources/circle_shape_2d.h"
#include "scene/resources/concave_polygon_shape.h"
#include "scene/resources/concave_polygon_shape_2d.h"
#include "scene/resources/convex_polygon_shape.h"
#include "scene/resources/convex_polygon_shape_2d.h"
#include "scene/resources/curve.h"
#include "scene/resources/cylinder_shape.h"
#include "scene/resources/dynamic_font.h"
#include "scene/resources/environment.h"
#include "scene/resources/font.h"
#include "scene/resources/gradient.h"
#include "scene/resources/height_map_shape.h"
#include "scene/resources/line_shape_2d.h"
#include "scene/resources/material.h"
#include "scene/resources/mesh.h"
#include "scene/resources/mesh_data_tool.h"
#include "scene/resources/mesh_library.h"
#include "scene/resources/multimesh.h"
#include "scene/resources/packed_scene.h"
#include "scene/resources/particles_material.h"
#include "scene/resources/physics_material.h"
#include "scene/resources/plane_shape.h"
#include "scene/resources/polygon_path_finder.h"
#include "scene/resources/primitive_meshes.h"
#include "scene/resources/ray_shape.h"
#include "scene/resources/rectangle_shape_2d.h"
#include "scene/resources/resource_format_text.h"
#include "scene/resources/segment_shape_2d.h"
#include "scene/resources/shader.h"
#include "scene/resources/shape.h"
#include "scene/resources/shape_2d.h"
#include "scene/resources/skin.h"
#include "scene/resources/sky.h"
#include "scene/resources/sphere_shape.h"
#include "scene/resources/style_box.h"
#include "scene/resources/surface_tool.h"
#include "scene/resources/texture.h"
#include "scene/resources/text_file.h"
#include "scene/resources/theme.h"
#include "scene/resources/tile_set.h"
#include "scene/resources/video_stream.h"
#include "scene/resources/visual_shader.h"
#include "scene/resources/visual_shader_nodes.h"
#include "scene/resources/world.h"
#include "scene/resources/world_2d.h"
#include "scene/resources/default_theme/default_theme.h"

    WasGoState::WasGoID _wasgo_Node_constructor(){
        return 0;
    }
    void _wasgo_Node_destructor(WasGoState::WasGoID p_wasgo_id){

    }
            

void _wasgo_Node_wrapper_add_child(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node, bool p_legible_unique_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			bool legible_unique_name = (bool) p_legible_unique_name;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node, (Variant *)&legible_unique_name};
			Variant wasgo_ret = caller->call((String)"add_child", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_add_child_below_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node, WasGoState::WasGoID p_child_node, bool p_legible_unique_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			Node *child_node = (Node *) state->lookup_object(p_child_node);
			bool legible_unique_name = (bool) p_legible_unique_name;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node, (Variant *)child_node, (Variant *)&legible_unique_name};
			Variant wasgo_ret = caller->call((String)"add_child_below_node", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_add_to_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_group, int p_wasgo_buffer_size_wasgo_buffer_size_group, bool p_persistent){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_group = String();
			decode_variant(v_group, p_group, 256);
			Variant * group = &v_group;
			bool persistent = (bool) p_persistent;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)group, (Variant *)&persistent};
			Variant wasgo_ret = caller->call((String)"add_to_group", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

int _wasgo_Node_wrapper_can_process(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"can_process", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Node_wrapper_duplicate(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_flags){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int flags = (int) p_flags;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&flags};
			Variant wasgo_ret = caller->call((String)"duplicate", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_find_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_mask, int p_wasgo_buffer_size_wasgo_buffer_size_mask, bool p_recursive, bool p_owned){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_mask = String();
			decode_variant(v_mask, p_mask, 256);
			Variant * mask = &v_mask;
			bool recursive = (bool) p_recursive;
			bool owned = (bool) p_owned;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)mask, (Variant *)&recursive, (Variant *)&owned};
			Variant wasgo_ret = caller->call((String)"find_node", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_find_parent(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_mask, int p_wasgo_buffer_size_wasgo_buffer_size_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_mask = String();
			decode_variant(v_mask, p_mask, 256);
			Variant * mask = &v_mask;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)mask};
			Variant wasgo_ret = caller->call((String)"find_parent", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_child(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int idx = (int) p_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&idx};
			Variant wasgo_ret = caller->call((String)"get_child", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Node_wrapper_get_child_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"get_child_count", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_children(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_children", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_custom_multiplayer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_custom_multiplayer", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_Node_wrapper_get_filename(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_local_ret = caller->call((String)"get_filename", varargs, 0, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

WasGoState::WasGoID _wasgo_Node_wrapper_get_groups(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_groups", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Node_wrapper_get_index(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"get_index", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_multiplayer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_multiplayer", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_Node_wrapper_get_name(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_local_ret = caller->call((String)"get_name", varargs, 0, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

int _wasgo_Node_wrapper_get_network_master(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"get_network_master", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_path, int p_wasgo_buffer_size_wasgo_buffer_size_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_path = NodePath();
			decode_variant(v_path, p_path, 256);
			Variant * path = &v_path;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)path};
			Variant wasgo_ret = caller->call((String)"get_node", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_node_and_resource(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_path, int p_wasgo_buffer_size_wasgo_buffer_size_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_path = NodePath();
			decode_variant(v_path, p_path, 256);
			Variant * path = &v_path;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)path};
			Variant wasgo_ret = caller->call((String)"get_node_and_resource", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_node_or_null(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_path, int p_wasgo_buffer_size_wasgo_buffer_size_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_path = NodePath();
			decode_variant(v_path, p_path, 256);
			Variant * path = &v_path;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)path};
			Variant wasgo_ret = caller->call((String)"get_node_or_null", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_owner(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_owner", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_parent(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_parent", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_Node_wrapper_get_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_local_ret = caller->call((String)"get_path", varargs, 0, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

void _wasgo_Node_wrapper_get_path_to(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node};
			Variant wasgo_local_ret = caller->call((String)"get_path_to", varargs, 1, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

WasGoState::WasGoID _wasgo_Node_wrapper_get_pause_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_pause_mode", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_Node_wrapper_get_physics_process_delta_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float wasgo_ret = (float) caller->call((String)"get_physics_process_delta_time", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return float();
}

int _wasgo_Node_wrapper_get_position_in_parent(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"get_position_in_parent", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

float _wasgo_Node_wrapper_get_process_delta_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float wasgo_ret = (float) caller->call((String)"get_process_delta_time", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return float();
}

int _wasgo_Node_wrapper_get_process_priority(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"get_process_priority", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_get_scene_instance_load_placeholder(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"get_scene_instance_load_placeholder", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_tree(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_tree", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_viewport(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_viewport", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Node_wrapper_has_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_path, int p_wasgo_buffer_size_wasgo_buffer_size_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_path = NodePath();
			decode_variant(v_path, p_path, 256);
			Variant * path = &v_path;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)path};
			int wasgo_ret = (int) caller->call((String)"has_node", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_has_node_and_resource(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_path, int p_wasgo_buffer_size_wasgo_buffer_size_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_path = NodePath();
			decode_variant(v_path, p_path, 256);
			Variant * path = &v_path;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)path};
			int wasgo_ret = (int) caller->call((String)"has_node_and_resource", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_a_parent_of(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node};
			int wasgo_ret = (int) caller->call((String)"is_a_parent_of", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_displayed_folded(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_displayed_folded", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_greater_than(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node};
			int wasgo_ret = (int) caller->call((String)"is_greater_than", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_in_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_group, int p_wasgo_buffer_size_wasgo_buffer_size_group){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_group = String();
			decode_variant(v_group, p_group, 256);
			Variant * group = &v_group;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)group};
			int wasgo_ret = (int) caller->call((String)"is_in_group", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_inside_tree(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_inside_tree", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_network_master(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_network_master", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_physics_processing(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_physics_processing", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_physics_processing_internal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_physics_processing_internal", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_processing(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_processing", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_processing_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_processing_input", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_processing_internal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_processing_internal", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_processing_unhandled_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_processing_unhandled_input", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Node_wrapper_is_processing_unhandled_key_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_processing_unhandled_key_input", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

void _wasgo_Node_wrapper_move_child(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_child_node, int p_to_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *child_node = (Node *) state->lookup_object(p_child_node);
			int to_position = (int) p_to_position;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)child_node, (Variant *)&to_position};
			Variant wasgo_ret = caller->call((String)"move_child", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_print_stray_nodes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"print_stray_nodes", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_print_tree(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"print_tree", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_print_tree_pretty(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"print_tree_pretty", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_propagate_call(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_method, int p_wasgo_buffer_size_wasgo_buffer_size_method, WasGoState::WasGoID p_args, bool p_parent_first){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_method = String();
			decode_variant(v_method, p_method, 256);
			Variant * method = &v_method;
			Array *args = (Array *)state->lookup_variant(p_args);
			bool parent_first = (bool) p_parent_first;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)method, (Variant *)args, (Variant *)&parent_first};
			Variant wasgo_ret = caller->call((String)"propagate_call", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_propagate_notification(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_what){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int what = (int) p_what;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&what};
			Variant wasgo_ret = caller->call((String)"propagate_notification", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_queue_free(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"queue_free", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_raise(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"raise", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_remove_and_skip(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"remove_and_skip", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_remove_child(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node};
			Variant wasgo_ret = caller->call((String)"remove_child", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_remove_from_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_group, int p_wasgo_buffer_size_wasgo_buffer_size_group){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_group = String();
			decode_variant(v_group, p_group, 256);
			Variant * group = &v_group;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)group};
			Variant wasgo_ret = caller->call((String)"remove_from_group", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_replace_by(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node, bool p_keep_data){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			bool keep_data = (bool) p_keep_data;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node, (Variant *)&keep_data};
			Variant wasgo_ret = caller->call((String)"replace_by", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_request_ready(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"request_ready", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_Node_wrapper_rpc(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_method, int p_wasgo_buffer_size_wasgo_buffer_size_method){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_method = String();
			decode_variant(v_method, p_method, 256);
			Variant * method = &v_method;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)method};
			Variant wasgo_ret = caller->call((String)"rpc", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_Node_wrapper_rpc_config(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_method, int p_wasgo_buffer_size_wasgo_buffer_size_method, WasGoState::WasGoID p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_method = String();
			decode_variant(v_method, p_method, 256);
			Variant * method = &v_method;
			MultiplayerAPI::RPCMode *mode = (MultiplayerAPI::RPCMode *) state->lookup_object(p_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)method, (Variant *)&mode};
			Variant wasgo_ret = caller->call((String)"rpc_config", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_Node_wrapper_rpc_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_peer_id, const uint8_t * p_method, int p_wasgo_buffer_size_wasgo_buffer_size_method){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int peer_id = (int) p_peer_id;
			Variant v_method = String();
			decode_variant(v_method, p_method, 256);
			Variant * method = &v_method;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&peer_id, (Variant *)method};
			Variant wasgo_ret = caller->call((String)"rpc_id", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_rpc_unreliable(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_method, int p_wasgo_buffer_size_wasgo_buffer_size_method){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_method = String();
			decode_variant(v_method, p_method, 256);
			Variant * method = &v_method;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)method};
			Variant wasgo_ret = caller->call((String)"rpc_unreliable", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Node_wrapper_rpc_unreliable_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_peer_id, const uint8_t * p_method, int p_wasgo_buffer_size_wasgo_buffer_size_method){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int peer_id = (int) p_peer_id;
			Variant v_method = String();
			decode_variant(v_method, p_method, 256);
			Variant * method = &v_method;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&peer_id, (Variant *)method};
			Variant wasgo_ret = caller->call((String)"rpc_unreliable_id", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_Node_wrapper_rset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_property, int p_wasgo_buffer_size_wasgo_buffer_size_property, WasGoState::WasGoID p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_property = String();
			decode_variant(v_property, p_property, 256);
			Variant * property = &v_property;
			Variant *value = (Variant *)state->lookup_variant(p_value);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)property, (Variant *)value};
			Variant wasgo_ret = caller->call((String)"rset", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_rset_config(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_property, int p_wasgo_buffer_size_wasgo_buffer_size_property, WasGoState::WasGoID p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_property = String();
			decode_variant(v_property, p_property, 256);
			Variant * property = &v_property;
			MultiplayerAPI::RPCMode *mode = (MultiplayerAPI::RPCMode *) state->lookup_object(p_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)property, (Variant *)&mode};
			Variant wasgo_ret = caller->call((String)"rset_config", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_rset_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_peer_id, const uint8_t * p_property, int p_wasgo_buffer_size_wasgo_buffer_size_property, WasGoState::WasGoID p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int peer_id = (int) p_peer_id;
			Variant v_property = String();
			decode_variant(v_property, p_property, 256);
			Variant * property = &v_property;
			Variant *value = (Variant *)state->lookup_variant(p_value);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&peer_id, (Variant *)property, (Variant *)value};
			Variant wasgo_ret = caller->call((String)"rset_id", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_rset_unreliable(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_property, int p_wasgo_buffer_size_wasgo_buffer_size_property, WasGoState::WasGoID p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_property = String();
			decode_variant(v_property, p_property, 256);
			Variant * property = &v_property;
			Variant *value = (Variant *)state->lookup_variant(p_value);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)property, (Variant *)value};
			Variant wasgo_ret = caller->call((String)"rset_unreliable", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_rset_unreliable_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_peer_id, const uint8_t * p_property, int p_wasgo_buffer_size_wasgo_buffer_size_property, WasGoState::WasGoID p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int peer_id = (int) p_peer_id;
			Variant v_property = String();
			decode_variant(v_property, p_property, 256);
			Variant * property = &v_property;
			Variant *value = (Variant *)state->lookup_variant(p_value);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&peer_id, (Variant *)property, (Variant *)value};
			Variant wasgo_ret = caller->call((String)"rset_unreliable_id", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_custom_multiplayer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_api){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			MultiplayerAPI *api = (MultiplayerAPI *) state->lookup_object(p_api);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)api};
			Variant wasgo_ret = caller->call((String)"set_custom_multiplayer", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_display_folded(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_fold){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool fold = (bool) p_fold;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&fold};
			Variant wasgo_ret = caller->call((String)"set_display_folded", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_filename(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_filename, int p_wasgo_buffer_size_wasgo_buffer_size_filename){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_filename = String();
			decode_variant(v_filename, p_filename, 256);
			Variant * filename = &v_filename;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)filename};
			Variant wasgo_ret = caller->call((String)"set_filename", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_name(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_name, int p_wasgo_buffer_size_wasgo_buffer_size_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant v_name = String();
			decode_variant(v_name, p_name, 256);
			Variant * name = &v_name;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)name};
			Variant wasgo_ret = caller->call((String)"set_name", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_network_master(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_id, bool p_recursive){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int id = (int) p_id;
			bool recursive = (bool) p_recursive;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&id, (Variant *)&recursive};
			Variant wasgo_ret = caller->call((String)"set_network_master", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_owner(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_owner){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *owner = (Node *) state->lookup_object(p_owner);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)owner};
			Variant wasgo_ret = caller->call((String)"set_owner", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_pause_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node::PauseMode *mode = (Node::PauseMode *) state->lookup_object(p_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mode};
			Variant wasgo_ret = caller->call((String)"set_pause_mode", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_physics_process(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_physics_process", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_physics_process_internal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_physics_process_internal", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_process(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_process", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_process_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_process_input", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_process_internal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_process_internal", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_process_priority(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_priority){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int priority = (int) p_priority;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&priority};
			Variant wasgo_ret = caller->call((String)"set_process_priority", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_process_unhandled_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_process_unhandled_input", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_process_unhandled_key_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_process_unhandled_key_input", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_set_scene_instance_load_placeholder(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_load_placeholder){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool load_placeholder = (bool) p_load_placeholder;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&load_placeholder};
			Variant wasgo_ret = caller->call((String)"set_scene_instance_load_placeholder", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Node_wrapper_update_configuration_warning(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"update_configuration_warning", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

    WasGoState::WasGoID _wasgo_SceneTree_constructor(){
        return 0;
    }
    void _wasgo_SceneTree_destructor(WasGoState::WasGoID p_wasgo_id){

    }
            

WasGoState::WasGoID _wasgo_SceneTree_wrapper_call_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_group, int p_wasgo_buffer_size_wasgo_buffer_size_group, const uint8_t * p_method, int p_wasgo_buffer_size_wasgo_buffer_size_method){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant v_group = String();
			decode_variant(v_group, p_group, 256);
			Variant * group = &v_group;
			Variant v_method = String();
			decode_variant(v_method, p_method, 256);
			Variant * method = &v_method;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)group, (Variant *)method};
			Variant wasgo_ret = caller->call((String)"call_group", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_call_group_flags(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_flags, const uint8_t * p_group, int p_wasgo_buffer_size_wasgo_buffer_size_group, const uint8_t * p_method, int p_wasgo_buffer_size_wasgo_buffer_size_method){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			int flags = (int) p_flags;
			Variant v_group = String();
			decode_variant(v_group, p_group, 256);
			Variant * group = &v_group;
			Variant v_method = String();
			decode_variant(v_method, p_method, 256);
			Variant * method = &v_method;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&flags, (Variant *)group, (Variant *)method};
			Variant wasgo_ret = caller->call((String)"call_group_flags", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_change_scene(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_path, int p_wasgo_buffer_size_wasgo_buffer_size_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant v_path = String();
			decode_variant(v_path, p_path, 256);
			Variant * path = &v_path;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)path};
			Variant wasgo_ret = caller->call((String)"change_scene", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_change_scene_to(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_packed_scene){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			PackedScene *packed_scene = (PackedScene *) state->lookup_object(p_packed_scene);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)packed_scene};
			Variant wasgo_ret = caller->call((String)"change_scene_to", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_create_timer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_time_sec, bool p_pause_mode_process){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			float time_sec = (float) p_time_sec;
			bool pause_mode_process = (bool) p_pause_mode_process;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&time_sec, (Variant *)&pause_mode_process};
			Variant wasgo_ret = caller->call((String)"create_timer", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_get_current_scene(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_current_scene", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_get_edited_scene_root(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_edited_scene_root", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_SceneTree_wrapper_get_frame(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"get_frame", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_get_multiplayer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_multiplayer", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_get_network_connected_peers(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_network_connected_peers", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_get_network_peer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_network_peer", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_SceneTree_wrapper_get_network_unique_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"get_network_unique_id", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_get_node_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"get_node_count", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_get_nodes_in_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_group, int p_wasgo_buffer_size_wasgo_buffer_size_group){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant v_group = String();
			decode_variant(v_group, p_group, 256);
			Variant * group = &v_group;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)group};
			Variant wasgo_ret = caller->call((String)"get_nodes_in_group", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_get_root(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_root", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_SceneTree_wrapper_get_rpc_sender_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"get_rpc_sender_id", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_has_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_name, int p_wasgo_buffer_size_wasgo_buffer_size_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant v_name = String();
			decode_variant(v_name, p_name, 256);
			Variant * name = &v_name;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)name};
			int wasgo_ret = (int) caller->call((String)"has_group", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_has_network_peer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"has_network_peer", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_is_debugging_collisions_hint(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_debugging_collisions_hint", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_is_debugging_navigation_hint(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_debugging_navigation_hint", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_is_input_handled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_input_handled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_is_multiplayer_poll_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_multiplayer_poll_enabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_is_network_server(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_network_server", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_is_paused(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_paused", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_is_refusing_new_network_connections(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_refusing_new_network_connections", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_SceneTree_wrapper_is_using_font_oversampling(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_using_font_oversampling", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

void _wasgo_SceneTree_wrapper_notify_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_group, int p_wasgo_buffer_size_wasgo_buffer_size_group, int p_notification){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant v_group = String();
			decode_variant(v_group, p_group, 256);
			Variant * group = &v_group;
			int notification = (int) p_notification;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)group, (Variant *)&notification};
			Variant wasgo_ret = caller->call((String)"notify_group", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_notify_group_flags(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_call_flags, const uint8_t * p_group, int p_wasgo_buffer_size_wasgo_buffer_size_group, int p_notification){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			int call_flags = (int) p_call_flags;
			Variant v_group = String();
			decode_variant(v_group, p_group, 256);
			Variant * group = &v_group;
			int notification = (int) p_notification;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&call_flags, (Variant *)group, (Variant *)&notification};
			Variant wasgo_ret = caller->call((String)"notify_group_flags", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_queue_delete(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_obj){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Object *obj = (Object *) state->lookup_object(p_obj);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)obj};
			Variant wasgo_ret = caller->call((String)"queue_delete", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_quit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_exit_code){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			int exit_code = (int) p_exit_code;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&exit_code};
			Variant wasgo_ret = caller->call((String)"quit", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_SceneTree_wrapper_reload_current_scene(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"reload_current_scene", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_SceneTree_wrapper_set_auto_accept_quit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enabled};
			Variant wasgo_ret = caller->call((String)"set_auto_accept_quit", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_current_scene(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_child_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Node *child_node = (Node *) state->lookup_object(p_child_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)child_node};
			Variant wasgo_ret = caller->call((String)"set_current_scene", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_debug_collisions_hint(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_debug_collisions_hint", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_debug_navigation_hint(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_debug_navigation_hint", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_edited_scene_root(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_scene){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Node *scene = (Node *) state->lookup_object(p_scene);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)scene};
			Variant wasgo_ret = caller->call((String)"set_edited_scene_root", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_group, int p_wasgo_buffer_size_wasgo_buffer_size_group, const uint8_t * p_property, int p_wasgo_buffer_size_wasgo_buffer_size_property, WasGoState::WasGoID p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant v_group = String();
			decode_variant(v_group, p_group, 256);
			Variant * group = &v_group;
			Variant v_property = String();
			decode_variant(v_property, p_property, 256);
			Variant * property = &v_property;
			Variant *value = (Variant *)state->lookup_variant(p_value);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)group, (Variant *)property, (Variant *)value};
			Variant wasgo_ret = caller->call((String)"set_group", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_group_flags(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_call_flags, const uint8_t * p_group, int p_wasgo_buffer_size_wasgo_buffer_size_group, const uint8_t * p_property, int p_wasgo_buffer_size_wasgo_buffer_size_property, WasGoState::WasGoID p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			int call_flags = (int) p_call_flags;
			Variant v_group = String();
			decode_variant(v_group, p_group, 256);
			Variant * group = &v_group;
			Variant v_property = String();
			decode_variant(v_property, p_property, 256);
			Variant * property = &v_property;
			Variant *value = (Variant *)state->lookup_variant(p_value);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&call_flags, (Variant *)group, (Variant *)property, (Variant *)value};
			Variant wasgo_ret = caller->call((String)"set_group_flags", varargs, 4, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_input_as_handled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"set_input_as_handled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_multiplayer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_multiplayer){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			MultiplayerAPI *multiplayer = (MultiplayerAPI *) state->lookup_object(p_multiplayer);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)multiplayer};
			Variant wasgo_ret = caller->call((String)"set_multiplayer", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_multiplayer_poll_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enabled};
			Variant wasgo_ret = caller->call((String)"set_multiplayer_poll_enabled", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_network_peer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_peer){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			NetworkedMultiplayerPeer *peer = (NetworkedMultiplayerPeer *) state->lookup_object(p_peer);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)peer};
			Variant wasgo_ret = caller->call((String)"set_network_peer", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_pause(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_pause", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_quit_on_go_back(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enabled};
			Variant wasgo_ret = caller->call((String)"set_quit_on_go_back", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_refuse_new_network_connections(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_refuse){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			bool refuse = (bool) p_refuse;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&refuse};
			Variant wasgo_ret = caller->call((String)"set_refuse_new_network_connections", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_screen_stretch(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mode, WasGoState::WasGoID p_aspect, const uint8_t * p_minsize, int p_wasgo_buffer_size_wasgo_buffer_size_minsize, float p_shrink){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			SceneTree::StretchMode *mode = (SceneTree::StretchMode *) state->lookup_object(p_mode);
			SceneTree::StretchAspect *aspect = (SceneTree::StretchAspect *) state->lookup_object(p_aspect);
			Variant v_minsize = Vector2();
			decode_variant(v_minsize, p_minsize, 12);
			Variant * minsize = &v_minsize;
			float shrink = (float) p_shrink;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mode, (Variant *)&aspect, (Variant *)minsize, (Variant *)&shrink};
			Variant wasgo_ret = caller->call((String)"set_screen_stretch", varargs, 4, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SceneTree_wrapper_set_use_font_oversampling(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SceneTree *caller = (SceneTree *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_use_font_oversampling", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

    WasGoState::WasGoID _wasgo_Spatial_constructor(){
        return 0;
    }
    void _wasgo_Spatial_destructor(WasGoState::WasGoID p_wasgo_id){

    }
            

void _wasgo_Spatial_wrapper_force_update_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"force_update_transform", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_gizmo(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_gizmo", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_Spatial_wrapper_get_global_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_local_ret = caller->call((String)"get_global_transform", varargs, 0, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_parent_spatial(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_parent_spatial", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_Spatial_wrapper_get_rotation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_local_ret = caller->call((String)"get_rotation", varargs, 0, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

void _wasgo_Spatial_wrapper_get_rotation_degrees(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_local_ret = caller->call((String)"get_rotation_degrees", varargs, 0, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

void _wasgo_Spatial_wrapper_get_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_local_ret = caller->call((String)"get_scale", varargs, 0, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

void _wasgo_Spatial_wrapper_get_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_local_ret = caller->call((String)"get_transform", varargs, 0, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

void _wasgo_Spatial_wrapper_get_translation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_local_ret = caller->call((String)"get_translation", varargs, 0, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_world(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"get_world", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(wasgo_ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_Spatial_wrapper_global_rotate(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_axis, int p_wasgo_buffer_size_wasgo_buffer_size_axis, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_axis = Vector3();
			decode_variant(v_axis, p_axis, 16);
			Variant * axis = &v_axis;
			float angle = (float) p_angle;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)axis, (Variant *)&angle};
			Variant wasgo_ret = caller->call((String)"global_rotate", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_global_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_scale, int p_wasgo_buffer_size_wasgo_buffer_size_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_scale = Vector3();
			decode_variant(v_scale, p_scale, 16);
			Variant * scale = &v_scale;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)scale};
			Variant wasgo_ret = caller->call((String)"global_scale", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_global_translate(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_offset, int p_wasgo_buffer_size_wasgo_buffer_size_offset){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_offset = Vector3();
			decode_variant(v_offset, p_offset, 16);
			Variant * offset = &v_offset;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)offset};
			Variant wasgo_ret = caller->call((String)"global_translate", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_hide(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"hide", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

int _wasgo_Spatial_wrapper_is_local_transform_notification_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_local_transform_notification_enabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Spatial_wrapper_is_scale_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_scale_disabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Spatial_wrapper_is_set_as_toplevel(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_set_as_toplevel", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Spatial_wrapper_is_transform_notification_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_transform_notification_enabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Spatial_wrapper_is_visible(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_visible", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

int _wasgo_Spatial_wrapper_is_visible_in_tree(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_visible_in_tree", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

void _wasgo_Spatial_wrapper_look_at(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_target, int p_wasgo_buffer_size_wasgo_buffer_size_target, const uint8_t * p_up, int p_wasgo_buffer_size_wasgo_buffer_size_up){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_target = Vector3();
			decode_variant(v_target, p_target, 16);
			Variant * target = &v_target;
			Variant v_up = Vector3();
			decode_variant(v_up, p_up, 16);
			Variant * up = &v_up;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)target, (Variant *)up};
			Variant wasgo_ret = caller->call((String)"look_at", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_look_at_from_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_position, int p_wasgo_buffer_size_wasgo_buffer_size_position, const uint8_t * p_target, int p_wasgo_buffer_size_wasgo_buffer_size_target, const uint8_t * p_up, int p_wasgo_buffer_size_wasgo_buffer_size_up){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_position = Vector3();
			decode_variant(v_position, p_position, 16);
			Variant * position = &v_position;
			Variant v_target = Vector3();
			decode_variant(v_target, p_target, 16);
			Variant * target = &v_target;
			Variant v_up = Vector3();
			decode_variant(v_up, p_up, 16);
			Variant * up = &v_up;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)position, (Variant *)target, (Variant *)up};
			Variant wasgo_ret = caller->call((String)"look_at_from_position", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_orthonormalize(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"orthonormalize", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_rotate(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_axis, int p_wasgo_buffer_size_wasgo_buffer_size_axis, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_axis = Vector3();
			decode_variant(v_axis, p_axis, 16);
			Variant * axis = &v_axis;
			float angle = (float) p_angle;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)axis, (Variant *)&angle};
			Variant wasgo_ret = caller->call((String)"rotate", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_rotate_object_local(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_axis, int p_wasgo_buffer_size_wasgo_buffer_size_axis, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_axis = Vector3();
			decode_variant(v_axis, p_axis, 16);
			Variant * axis = &v_axis;
			float angle = (float) p_angle;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)axis, (Variant *)&angle};
			Variant wasgo_ret = caller->call((String)"rotate_object_local", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_rotate_x(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			float angle = (float) p_angle;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&angle};
			Variant wasgo_ret = caller->call((String)"rotate_x", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_rotate_y(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			float angle = (float) p_angle;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&angle};
			Variant wasgo_ret = caller->call((String)"rotate_y", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_rotate_z(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			float angle = (float) p_angle;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&angle};
			Variant wasgo_ret = caller->call((String)"rotate_z", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_scale_object_local(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_scale, int p_wasgo_buffer_size_wasgo_buffer_size_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_scale = Vector3();
			decode_variant(v_scale, p_scale, 16);
			Variant * scale = &v_scale;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)scale};
			Variant wasgo_ret = caller->call((String)"scale_object_local", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_as_toplevel(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_as_toplevel", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_disable_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_disable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool disable = (bool) p_disable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&disable};
			Variant wasgo_ret = caller->call((String)"set_disable_scale", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_gizmo(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_gizmo){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			SpatialGizmo *gizmo = (SpatialGizmo *) state->lookup_object(p_gizmo);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)gizmo};
			Variant wasgo_ret = caller->call((String)"set_gizmo", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_global_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_global, int p_wasgo_buffer_size_wasgo_buffer_size_global){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_global = Transform();
			decode_variant(v_global, p_global, 52);
			Variant * global = &v_global;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)global};
			Variant wasgo_ret = caller->call((String)"set_global_transform", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_identity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"set_identity", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_ignore_transform_notification(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enabled};
			Variant wasgo_ret = caller->call((String)"set_ignore_transform_notification", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_notify_local_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_notify_local_transform", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_notify_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_notify_transform", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_rotation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_euler, int p_wasgo_buffer_size_wasgo_buffer_size_euler){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_euler = Vector3();
			decode_variant(v_euler, p_euler, 16);
			Variant * euler = &v_euler;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)euler};
			Variant wasgo_ret = caller->call((String)"set_rotation", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_rotation_degrees(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_euler_degrees, int p_wasgo_buffer_size_wasgo_buffer_size_euler_degrees){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_euler_degrees = Vector3();
			decode_variant(v_euler_degrees, p_euler_degrees, 16);
			Variant * euler_degrees = &v_euler_degrees;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)euler_degrees};
			Variant wasgo_ret = caller->call((String)"set_rotation_degrees", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_scale, int p_wasgo_buffer_size_wasgo_buffer_size_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_scale = Vector3();
			decode_variant(v_scale, p_scale, 16);
			Variant * scale = &v_scale;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)scale};
			Variant wasgo_ret = caller->call((String)"set_scale", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_local, int p_wasgo_buffer_size_wasgo_buffer_size_local){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_local = Transform();
			decode_variant(v_local, p_local, 52);
			Variant * local = &v_local;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)local};
			Variant wasgo_ret = caller->call((String)"set_transform", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_translation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_translation, int p_wasgo_buffer_size_wasgo_buffer_size_translation){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_translation = Vector3();
			decode_variant(v_translation, p_translation, 16);
			Variant * translation = &v_translation;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)translation};
			Variant wasgo_ret = caller->call((String)"set_translation", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_visible(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_visible){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool visible = (bool) p_visible;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&visible};
			Variant wasgo_ret = caller->call((String)"set_visible", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_show(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"show", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_to_global(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len, const uint8_t * p_local_point, int p_wasgo_buffer_size_wasgo_buffer_size_local_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_local_point = Vector3();
			decode_variant(v_local_point, p_local_point, 16);
			Variant * local_point = &v_local_point;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)local_point};
			Variant wasgo_local_ret = caller->call((String)"to_global", varargs, 1, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

void _wasgo_Spatial_wrapper_to_local(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len, const uint8_t * p_global_point, int p_wasgo_buffer_size_wasgo_buffer_size_global_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_global_point = Vector3();
			decode_variant(v_global_point, p_global_point, 16);
			Variant * global_point = &v_global_point;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)global_point};
			Variant wasgo_local_ret = caller->call((String)"to_local", varargs, 1, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

void _wasgo_Spatial_wrapper_translate(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_offset, int p_wasgo_buffer_size_wasgo_buffer_size_offset){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_offset = Vector3();
			decode_variant(v_offset, p_offset, 16);
			Variant * offset = &v_offset;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)offset};
			Variant wasgo_ret = caller->call((String)"translate", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_translate_object_local(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_offset, int p_wasgo_buffer_size_wasgo_buffer_size_offset){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant v_offset = Vector3();
			decode_variant(v_offset, p_offset, 16);
			Variant * offset = &v_offset;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)offset};
			Variant wasgo_ret = caller->call((String)"translate_object_local", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_update_gizmo(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_ret = caller->call((String)"update_gizmo", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

    WasGoState::WasGoID _wasgo_SpatialVelocityTracker_constructor(){
        return 0;
    }
    void _wasgo_SpatialVelocityTracker_destructor(WasGoState::WasGoID p_wasgo_id){

    }
            

void _wasgo_SpatialVelocityTracker_wrapper_get_tracked_linear_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, uint8_t * wasgo_ret, int wasgo_ret_len){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SpatialVelocityTracker *caller = (SpatialVelocityTracker *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant wasgo_local_ret = caller->call((String)"get_tracked_linear_velocity", varargs, 0, error);
			Error wasgo_encode_error = encode_variant(wasgo_local_ret, wasgo_ret, wasgo_ret_len);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}}

int _wasgo_SpatialVelocityTracker_wrapper_is_tracking_physics_step(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SpatialVelocityTracker *caller = (SpatialVelocityTracker *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int wasgo_ret = (int) caller->call((String)"is_tracking_physics_step", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return wasgo_ret;
		}
	}
	return int();
}

void _wasgo_SpatialVelocityTracker_wrapper_reset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_position, int p_wasgo_buffer_size_wasgo_buffer_size_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SpatialVelocityTracker *caller = (SpatialVelocityTracker *) state->lookup_object(caller_id);
		if(caller){
			Variant v_position = Vector3();
			decode_variant(v_position, p_position, 16);
			Variant * position = &v_position;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)position};
			Variant wasgo_ret = caller->call((String)"reset", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SpatialVelocityTracker_wrapper_set_track_physics_step(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SpatialVelocityTracker *caller = (SpatialVelocityTracker *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant wasgo_ret = caller->call((String)"set_track_physics_step", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_SpatialVelocityTracker_wrapper_update_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, const uint8_t * p_position, int p_wasgo_buffer_size_wasgo_buffer_size_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SpatialVelocityTracker *caller = (SpatialVelocityTracker *) state->lookup_object(caller_id);
		if(caller){
			Variant v_position = Vector3();
			decode_variant(v_position, p_position, 16);
			Variant * position = &v_position;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)position};
			Variant wasgo_ret = caller->call((String)"update_position", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}
#endif