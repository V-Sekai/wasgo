#ifndef WASGO_NATIVE_WRAPPER_HEADERS
#define WASGO_NATIVE_WRAPPER_HEADERS
#include "wasm_export.h"
#include "wasgo_state.h"
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

WasGoState::WasGoID _wasgo_AnimationTree_wrapper_get_animation_player(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_animation_player", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTree_wrapper_get_process_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_process_mode", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTree_wrapper_get_root_motion_track(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_root_motion_track", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTree_wrapper_get_root_motion_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_root_motion_transform", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTree_wrapper_get_tree_root(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_tree_root", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_AnimationTree_wrapper_is_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_active", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_AnimationTree_wrapper_set_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_active){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			bool active = (bool) p_active;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&active};
			Variant ret = caller->call((String)"set_active", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTree_wrapper_set_animation_player(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_root){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			NodePath *root = (NodePath *)state->lookup_variant(p_root);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)root};
			Variant ret = caller->call((String)"set_animation_player", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTree_wrapper_set_process_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			AnimationTree::AnimationProcessMode *mode = (AnimationTree::AnimationProcessMode *) state->lookup_object(p_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mode};
			Variant ret = caller->call((String)"set_process_mode", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTree_wrapper_set_root_motion_track(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			NodePath *path = (NodePath *)state->lookup_variant(p_path);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)path};
			Variant ret = caller->call((String)"set_root_motion_track", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTree_wrapper_set_tree_root(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_root){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			AnimationNode *root = (AnimationNode *) state->lookup_object(p_root);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)root};
			Variant ret = caller->call((String)"set_tree_root", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_add_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_type, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			AnimationTreePlayer::NodeType *type = (AnimationTreePlayer::NodeType *) state->lookup_object(p_type);
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&type, (Variant *)id};
			Variant ret = caller->call((String)"add_node", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_advance(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_delta){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			float delta = (float) p_delta;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&delta};
			Variant ret = caller->call((String)"advance", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_animation_node_get_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			Variant ret = caller->call((String)"animation_node_get_animation", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_animation_node_get_master_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			Variant ret = caller->call((String)"animation_node_get_master_animation", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_AnimationTreePlayer_wrapper_animation_node_get_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			float ret = (float) caller->call((String)"animation_node_get_position", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

void _wasgo_AnimationTreePlayer_wrapper_animation_node_set_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_animation){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Animation *animation = (Animation *) state->lookup_object(p_animation);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)animation};
			Variant ret = caller->call((String)"animation_node_set_animation", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_animation_node_set_filter_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_path, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			NodePath *path = (NodePath *)state->lookup_variant(p_path);
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)path, (Variant *)&enable};
			Variant ret = caller->call((String)"animation_node_set_filter_path", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_animation_node_set_master_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_source){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			String *source = (String *)state->lookup_variant(p_source);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)source};
			Variant ret = caller->call((String)"animation_node_set_master_animation", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

int _wasgo_AnimationTreePlayer_wrapper_are_nodes_connected(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_dst_id, int p_dst_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			String *dst_id = (String *)state->lookup_variant(p_dst_id);
			int dst_input_idx = (int) p_dst_input_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)dst_id, (Variant *)&dst_input_idx};
			int ret = (int) caller->call((String)"are_nodes_connected", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

float _wasgo_AnimationTreePlayer_wrapper_blend2_node_get_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			float ret = (float) caller->call((String)"blend2_node_get_amount", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

void _wasgo_AnimationTreePlayer_wrapper_blend2_node_set_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_blend){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			float blend = (float) p_blend;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&blend};
			Variant ret = caller->call((String)"blend2_node_set_amount", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_blend2_node_set_filter_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_path, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			NodePath *path = (NodePath *)state->lookup_variant(p_path);
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)path, (Variant *)&enable};
			Variant ret = caller->call((String)"blend2_node_set_filter_path", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

float _wasgo_AnimationTreePlayer_wrapper_blend3_node_get_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			float ret = (float) caller->call((String)"blend3_node_get_amount", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

void _wasgo_AnimationTreePlayer_wrapper_blend3_node_set_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_blend){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			float blend = (float) p_blend;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&blend};
			Variant ret = caller->call((String)"blend3_node_set_amount", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_blend4_node_get_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			Variant ret = caller->call((String)"blend4_node_get_amount", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_AnimationTreePlayer_wrapper_blend4_node_set_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_blend){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Vector2 *blend = (Vector2 *)state->lookup_variant(p_blend);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)blend};
			Variant ret = caller->call((String)"blend4_node_set_amount", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_connect_nodes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_dst_id, int p_dst_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			String *dst_id = (String *)state->lookup_variant(p_dst_id);
			int dst_input_idx = (int) p_dst_input_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)dst_id, (Variant *)&dst_input_idx};
			Variant ret = caller->call((String)"connect_nodes", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_AnimationTreePlayer_wrapper_disconnect_nodes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_dst_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			int dst_input_idx = (int) p_dst_input_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&dst_input_idx};
			Variant ret = caller->call((String)"disconnect_nodes", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_get_animation_process_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_animation_process_mode", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_get_base_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_base_path", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_get_master_player(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_master_player", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_get_node_list(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_node_list", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_AnimationTreePlayer_wrapper_is_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_active", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

float _wasgo_AnimationTreePlayer_wrapper_mix_node_get_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			float ret = (float) caller->call((String)"mix_node_get_amount", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

void _wasgo_AnimationTreePlayer_wrapper_mix_node_set_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_ratio){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			float ratio = (float) p_ratio;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&ratio};
			Variant ret = caller->call((String)"mix_node_set_amount", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

int _wasgo_AnimationTreePlayer_wrapper_node_exists(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *node = (String *)state->lookup_variant(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node};
			int ret = (int) caller->call((String)"node_exists", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_AnimationTreePlayer_wrapper_node_get_input_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			int ret = (int) caller->call((String)"node_get_input_count", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_node_get_input_source(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			int idx = (int) p_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&idx};
			Variant ret = caller->call((String)"node_get_input_source", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_node_get_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			Variant ret = caller->call((String)"node_get_position", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_node_get_type(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			Variant ret = caller->call((String)"node_get_type", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_node_rename(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node, WasGoState::WasGoID p_new_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *node = (String *)state->lookup_variant(p_node);
			String *new_name = (String *)state->lookup_variant(p_new_name);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node, (Variant *)new_name};
			Variant ret = caller->call((String)"node_rename", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_AnimationTreePlayer_wrapper_node_set_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_screen_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Vector2 *screen_position = (Vector2 *)state->lookup_variant(p_screen_position);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)screen_position};
			Variant ret = caller->call((String)"node_set_position", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

float _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_autorestart_delay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			float ret = (float) caller->call((String)"oneshot_node_get_autorestart_delay", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_autorestart_random_delay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			float ret = (float) caller->call((String)"oneshot_node_get_autorestart_random_delay", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_fadein_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			float ret = (float) caller->call((String)"oneshot_node_get_fadein_time", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_fadeout_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			float ret = (float) caller->call((String)"oneshot_node_get_fadeout_time", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

int _wasgo_AnimationTreePlayer_wrapper_oneshot_node_has_autorestart(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			int ret = (int) caller->call((String)"oneshot_node_has_autorestart", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_AnimationTreePlayer_wrapper_oneshot_node_is_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			int ret = (int) caller->call((String)"oneshot_node_is_active", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&enable};
			Variant ret = caller->call((String)"oneshot_node_set_autorestart", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart_delay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_delay_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			float delay_sec = (float) p_delay_sec;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&delay_sec};
			Variant ret = caller->call((String)"oneshot_node_set_autorestart_delay", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart_random_delay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_rand_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			float rand_sec = (float) p_rand_sec;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&rand_sec};
			Variant ret = caller->call((String)"oneshot_node_set_autorestart_random_delay", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_fadein_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_time_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			float time_sec = (float) p_time_sec;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&time_sec};
			Variant ret = caller->call((String)"oneshot_node_set_fadein_time", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_fadeout_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_time_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			float time_sec = (float) p_time_sec;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&time_sec};
			Variant ret = caller->call((String)"oneshot_node_set_fadeout_time", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_filter_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_path, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			NodePath *path = (NodePath *)state->lookup_variant(p_path);
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)path, (Variant *)&enable};
			Variant ret = caller->call((String)"oneshot_node_set_filter_path", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_start(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			Variant ret = caller->call((String)"oneshot_node_start", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_stop(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			Variant ret = caller->call((String)"oneshot_node_stop", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_recompute_caches(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"recompute_caches", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_remove_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			Variant ret = caller->call((String)"remove_node", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_reset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"reset", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_set_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enabled};
			Variant ret = caller->call((String)"set_active", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_set_animation_process_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			AnimationTreePlayer::AnimationProcessMode *mode = (AnimationTreePlayer::AnimationProcessMode *) state->lookup_object(p_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mode};
			Variant ret = caller->call((String)"set_animation_process_mode", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_set_base_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			NodePath *path = (NodePath *)state->lookup_variant(p_path);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)path};
			Variant ret = caller->call((String)"set_base_path", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_set_master_player(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_nodepath){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			NodePath *nodepath = (NodePath *)state->lookup_variant(p_nodepath);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)nodepath};
			Variant ret = caller->call((String)"set_master_player", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

float _wasgo_AnimationTreePlayer_wrapper_timescale_node_get_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			float ret = (float) caller->call((String)"timescale_node_get_scale", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

void _wasgo_AnimationTreePlayer_wrapper_timescale_node_set_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			float scale = (float) p_scale;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&scale};
			Variant ret = caller->call((String)"timescale_node_set_scale", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_timeseek_node_seek(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_seconds){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			float seconds = (float) p_seconds;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&seconds};
			Variant ret = caller->call((String)"timeseek_node_seek", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_transition_node_delete_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			int input_idx = (int) p_input_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&input_idx};
			Variant ret = caller->call((String)"transition_node_delete_input", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

int _wasgo_AnimationTreePlayer_wrapper_transition_node_get_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			int ret = (int) caller->call((String)"transition_node_get_current", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_AnimationTreePlayer_wrapper_transition_node_get_input_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			int ret = (int) caller->call((String)"transition_node_get_input_count", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

float _wasgo_AnimationTreePlayer_wrapper_transition_node_get_xfade_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id};
			float ret = (float) caller->call((String)"transition_node_get_xfade_time", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

int _wasgo_AnimationTreePlayer_wrapper_transition_node_has_input_auto_advance(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			int input_idx = (int) p_input_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&input_idx};
			int ret = (int) caller->call((String)"transition_node_has_input_auto_advance", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_AnimationTreePlayer_wrapper_transition_node_set_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			int input_idx = (int) p_input_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&input_idx};
			Variant ret = caller->call((String)"transition_node_set_current", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_transition_node_set_input_auto_advance(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_input_idx, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			int input_idx = (int) p_input_idx;
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&input_idx, (Variant *)&enable};
			Variant ret = caller->call((String)"transition_node_set_input_auto_advance", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_transition_node_set_input_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_count){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			int count = (int) p_count;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&count};
			Variant ret = caller->call((String)"transition_node_set_input_count", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AnimationTreePlayer_wrapper_transition_node_set_xfade_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_time_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String *id = (String *)state->lookup_variant(p_id);
			float time_sec = (float) p_time_sec;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)id, (Variant *)&time_sec};
			Variant ret = caller->call((String)"transition_node_set_xfade_time", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer_wrapper_get_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_bus", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer_wrapper_get_mix_target(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_mix_target", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_AudioStreamPlayer_wrapper_get_pitch_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_pitch_scale", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_AudioStreamPlayer_wrapper_get_playback_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_playback_position", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer_wrapper_get_stream(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_stream", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_AudioStreamPlayer_wrapper_get_volume_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_volume_db", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

int _wasgo_AudioStreamPlayer_wrapper_is_autoplay_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_autoplay_enabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_AudioStreamPlayer_wrapper_is_playing(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_playing", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_AudioStreamPlayer_wrapper_play(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_from_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			float from_position = (float) p_from_position;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&from_position};
			Variant ret = caller->call((String)"play", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer_wrapper_seek(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_to_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			float to_position = (float) p_to_position;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&to_position};
			Variant ret = caller->call((String)"seek", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer_wrapper_set_autoplay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_autoplay", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer_wrapper_set_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_bus){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			String *bus = (String *)state->lookup_variant(p_bus);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)bus};
			Variant ret = caller->call((String)"set_bus", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer_wrapper_set_mix_target(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mix_target){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			AudioStreamPlayer::MixTarget *mix_target = (AudioStreamPlayer::MixTarget *) state->lookup_object(p_mix_target);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mix_target};
			Variant ret = caller->call((String)"set_mix_target", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer_wrapper_set_pitch_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_pitch_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			float pitch_scale = (float) p_pitch_scale;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&pitch_scale};
			Variant ret = caller->call((String)"set_pitch_scale", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer_wrapper_set_stream(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_stream){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			AudioStream *stream = (AudioStream *) state->lookup_object(p_stream);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)stream};
			Variant ret = caller->call((String)"set_stream", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer_wrapper_set_volume_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_volume_db){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			float volume_db = (float) p_volume_db;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&volume_db};
			Variant ret = caller->call((String)"set_volume_db", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer_wrapper_stop(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"stop", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer3D_wrapper_get_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_bus", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_max_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_max_db", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_pitch_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_pitch_scale", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_playback_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_playback_position", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer3D_wrapper_get_stream(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_stream", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_unit_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_unit_db", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_unit_size(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_unit_size", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

int _wasgo_AudioStreamPlayer3D_wrapper_is_autoplay_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_autoplay_enabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_AudioStreamPlayer3D_wrapper_is_playing(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_playing", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_AudioStreamPlayer3D_wrapper_play(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_from_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float from_position = (float) p_from_position;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&from_position};
			Variant ret = caller->call((String)"play", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer3D_wrapper_seek(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_to_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float to_position = (float) p_to_position;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&to_position};
			Variant ret = caller->call((String)"seek", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_autoplay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_autoplay", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_bus){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			String *bus = (String *)state->lookup_variant(p_bus);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)bus};
			Variant ret = caller->call((String)"set_bus", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_max_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_max_db){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float max_db = (float) p_max_db;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&max_db};
			Variant ret = caller->call((String)"set_max_db", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_pitch_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_pitch_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float pitch_scale = (float) p_pitch_scale;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&pitch_scale};
			Variant ret = caller->call((String)"set_pitch_scale", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_stream(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_stream){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			AudioStream *stream = (AudioStream *) state->lookup_object(p_stream);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)stream};
			Variant ret = caller->call((String)"set_stream", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_unit_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_unit_db){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float unit_db = (float) p_unit_db;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&unit_db};
			Variant ret = caller->call((String)"set_unit_db", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_unit_size(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_unit_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float unit_size = (float) p_unit_size;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&unit_size};
			Variant ret = caller->call((String)"set_unit_size", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_AudioStreamPlayer3D_wrapper_stop(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"stop", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_BoneAttachment_wrapper_get_bone_name(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		BoneAttachment *caller = (BoneAttachment *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_bone_name", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_BoneAttachment_wrapper_set_bone_name(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_bone_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		BoneAttachment *caller = (BoneAttachment *) state->lookup_object(caller_id);
		if(caller){
			String *bone_name = (String *)state->lookup_variant(p_bone_name);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)bone_name};
			Variant ret = caller->call((String)"set_bone_name", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_clear_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable_next){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			bool enable_next = (bool) p_enable_next;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable_next};
			Variant ret = caller->call((String)"clear_current", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_camera_rid(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_camera_rid", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_camera_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_camera_transform", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Camera_wrapper_get_cull_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_cull_mask", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_Camera_wrapper_get_cull_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_layer){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			int layer = (int) p_layer;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&layer};
			int ret = (int) caller->call((String)"get_cull_mask_bit", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_doppler_tracking(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_doppler_tracking", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_environment(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_environment", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_Camera_wrapper_get_fov(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_fov", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_frustum(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_frustum", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_frustum_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_frustum_offset", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_Camera_wrapper_get_h_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_h_offset", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_keep_aspect_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_keep_aspect_mode", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_projection(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_projection", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_Camera_wrapper_get_size(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_size", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_Camera_wrapper_get_v_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_v_offset", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_Camera_wrapper_get_zfar(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_zfar", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_Camera_wrapper_get_znear(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_znear", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

int _wasgo_Camera_wrapper_is_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_current", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_Camera_wrapper_is_position_behind(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_world_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *world_point = (Vector3 *)state->lookup_variant(p_world_point);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)world_point};
			int ret = (int) caller->call((String)"is_position_behind", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_Camera_wrapper_make_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"make_current", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_Camera_wrapper_project_local_ray_normal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_screen_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector2 *screen_point = (Vector2 *)state->lookup_variant(p_screen_point);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)screen_point};
			Variant ret = caller->call((String)"project_local_ray_normal", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Camera_wrapper_project_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_screen_point, float p_z_depth){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector2 *screen_point = (Vector2 *)state->lookup_variant(p_screen_point);
			float z_depth = (float) p_z_depth;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)screen_point, (Variant *)&z_depth};
			Variant ret = caller->call((String)"project_position", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Camera_wrapper_project_ray_normal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_screen_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector2 *screen_point = (Vector2 *)state->lookup_variant(p_screen_point);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)screen_point};
			Variant ret = caller->call((String)"project_ray_normal", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Camera_wrapper_project_ray_origin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_screen_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector2 *screen_point = (Vector2 *)state->lookup_variant(p_screen_point);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)screen_point};
			Variant ret = caller->call((String)"project_ray_origin", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_Camera_wrapper_set_cull_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			int mask = (int) p_mask;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mask};
			Variant ret = caller->call((String)"set_cull_mask", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_cull_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_layer, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			int layer = (int) p_layer;
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&layer, (Variant *)&enable};
			Variant ret = caller->call((String)"set_cull_mask_bit", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			bool arg0 = (bool) p_arg0;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&arg0};
			Variant ret = caller->call((String)"set_current", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_doppler_tracking(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Camera::DopplerTracking *mode = (Camera::DopplerTracking *) state->lookup_object(p_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mode};
			Variant ret = caller->call((String)"set_doppler_tracking", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_environment(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_env){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Environment *env = (Environment *) state->lookup_object(p_env);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)env};
			Variant ret = caller->call((String)"set_environment", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_fov(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float arg0 = (float) p_arg0;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&arg0};
			Variant ret = caller->call((String)"set_fov", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_frustum(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_size, WasGoState::WasGoID p_offset, float p_z_near, float p_z_far){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float size = (float) p_size;
			Vector2 *offset = (Vector2 *)state->lookup_variant(p_offset);
			float z_near = (float) p_z_near;
			float z_far = (float) p_z_far;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&size, (Variant *)offset, (Variant *)&z_near, (Variant *)&z_far};
			Variant ret = caller->call((String)"set_frustum", varargs, 4, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_frustum_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector2 *arg0 = (Vector2 *)state->lookup_variant(p_arg0);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)arg0};
			Variant ret = caller->call((String)"set_frustum_offset", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_h_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_ofs){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float ofs = (float) p_ofs;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&ofs};
			Variant ret = caller->call((String)"set_h_offset", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_keep_aspect_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Camera::KeepAspect *mode = (Camera::KeepAspect *) state->lookup_object(p_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mode};
			Variant ret = caller->call((String)"set_keep_aspect_mode", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_orthogonal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_size, float p_z_near, float p_z_far){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float size = (float) p_size;
			float z_near = (float) p_z_near;
			float z_far = (float) p_z_far;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&size, (Variant *)&z_near, (Variant *)&z_far};
			Variant ret = caller->call((String)"set_orthogonal", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_perspective(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_fov, float p_z_near, float p_z_far){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float fov = (float) p_fov;
			float z_near = (float) p_z_near;
			float z_far = (float) p_z_far;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&fov, (Variant *)&z_near, (Variant *)&z_far};
			Variant ret = caller->call((String)"set_perspective", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_projection(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Camera::Projection *arg0 = (Camera::Projection *) state->lookup_object(p_arg0);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&arg0};
			Variant ret = caller->call((String)"set_projection", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_size(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float arg0 = (float) p_arg0;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&arg0};
			Variant ret = caller->call((String)"set_size", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_v_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_ofs){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float ofs = (float) p_ofs;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&ofs};
			Variant ret = caller->call((String)"set_v_offset", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_zfar(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float arg0 = (float) p_arg0;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&arg0};
			Variant ret = caller->call((String)"set_zfar", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Camera_wrapper_set_znear(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float arg0 = (float) p_arg0;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&arg0};
			Variant ret = caller->call((String)"set_znear", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_Camera_wrapper_unproject_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_world_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *world_point = (Vector3 *)state->lookup_variant(p_world_point);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)world_point};
			Variant ret = caller->call((String)"unproject_position", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_CollisionPolygon_wrapper_get_depth(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_depth", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

WasGoState::WasGoID _wasgo_CollisionPolygon_wrapper_get_polygon(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_polygon", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_CollisionPolygon_wrapper_is_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_disabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_CollisionPolygon_wrapper_set_depth(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_depth){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			float depth = (float) p_depth;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&depth};
			Variant ret = caller->call((String)"set_depth", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_CollisionPolygon_wrapper_set_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_disabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			bool disabled = (bool) p_disabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&disabled};
			Variant ret = caller->call((String)"set_disabled", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_CollisionPolygon_wrapper_set_polygon(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_polygon){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			PoolVector2Array *polygon = (PoolVector2Array *)state->lookup_variant(p_polygon);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)polygon};
			Variant ret = caller->call((String)"set_polygon", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_CollisionShape_wrapper_get_shape(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionShape *caller = (CollisionShape *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_shape", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_CollisionShape_wrapper_is_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionShape *caller = (CollisionShape *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_disabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_CollisionShape_wrapper_resource_changed(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_resource){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionShape *caller = (CollisionShape *) state->lookup_object(caller_id);
		if(caller){
			Resource *resource = (Resource *) state->lookup_object(p_resource);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)resource};
			Variant ret = caller->call((String)"resource_changed", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_CollisionShape_wrapper_set_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionShape *caller = (CollisionShape *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_disabled", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_CollisionShape_wrapper_set_shape(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_shape){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionShape *caller = (CollisionShape *) state->lookup_object(caller_id);
		if(caller){
			Shape *shape = (Shape *) state->lookup_object(p_shape);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)shape};
			Variant ret = caller->call((String)"set_shape", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_DirectionalLight_wrapper_get_shadow_depth_range(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_shadow_depth_range", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_DirectionalLight_wrapper_get_shadow_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_shadow_mode", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_DirectionalLight_wrapper_is_blend_splits_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_blend_splits_enabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_DirectionalLight_wrapper_set_blend_splits(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enabled};
			Variant ret = caller->call((String)"set_blend_splits", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_DirectionalLight_wrapper_set_shadow_depth_range(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			DirectionalLight::ShadowDepthRange *mode = (DirectionalLight::ShadowDepthRange *) state->lookup_object(p_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mode};
			Variant ret = caller->call((String)"set_shadow_depth_range", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_DirectionalLight_wrapper_set_shadow_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			DirectionalLight::ShadowMode *mode = (DirectionalLight::ShadowMode *) state->lookup_object(p_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mode};
			Variant ret = caller->call((String)"set_shadow_mode", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

int _wasgo_Joint_wrapper_get_exclude_nodes_from_collision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_exclude_nodes_from_collision", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Joint_wrapper_get_node_a(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_node_a", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Joint_wrapper_get_node_b(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_node_b", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Joint_wrapper_get_solver_priority(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_solver_priority", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_Joint_wrapper_set_exclude_nodes_from_collision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_exclude_nodes_from_collision", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Joint_wrapper_set_node_a(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			NodePath *node = (NodePath *)state->lookup_variant(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node};
			Variant ret = caller->call((String)"set_node_a", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Joint_wrapper_set_node_b(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			NodePath *node = (NodePath *)state->lookup_variant(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node};
			Variant ret = caller->call((String)"set_node_b", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Joint_wrapper_set_solver_priority(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_priority){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			int priority = (int) p_priority;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&priority};
			Variant ret = caller->call((String)"set_solver_priority", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

int _wasgo_KinematicBody_wrapper_get_axis_lock(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_axis){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			PhysicsServer::BodyAxis *axis = (PhysicsServer::BodyAxis *) state->lookup_object(p_axis);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&axis};
			int ret = (int) caller->call((String)"get_axis_lock", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_get_floor_normal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_floor_normal", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_get_floor_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_floor_velocity", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_KinematicBody_wrapper_get_safe_margin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_safe_margin", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_get_slide_collision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_slide_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			int slide_idx = (int) p_slide_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&slide_idx};
			Variant ret = caller->call((String)"get_slide_collision", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_KinematicBody_wrapper_get_slide_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_slide_count", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_KinematicBody_wrapper_is_on_ceiling(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_on_ceiling", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_KinematicBody_wrapper_is_on_floor(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_on_floor", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_KinematicBody_wrapper_is_on_wall(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_on_wall", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_move_and_collide(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_rel_vec, bool p_infinite_inertia, bool p_exclude_raycast_shapes, bool p_test_only){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *rel_vec = (Vector3 *)state->lookup_variant(p_rel_vec);
			bool infinite_inertia = (bool) p_infinite_inertia;
			bool exclude_raycast_shapes = (bool) p_exclude_raycast_shapes;
			bool test_only = (bool) p_test_only;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)rel_vec, (Variant *)&infinite_inertia, (Variant *)&exclude_raycast_shapes, (Variant *)&test_only};
			Variant ret = caller->call((String)"move_and_collide", varargs, 4, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_move_and_slide(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_linear_velocity, WasGoState::WasGoID p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *linear_velocity = (Vector3 *)state->lookup_variant(p_linear_velocity);
			Vector3 *up_direction = (Vector3 *)state->lookup_variant(p_up_direction);
			bool stop_on_slope = (bool) p_stop_on_slope;
			int max_slides = (int) p_max_slides;
			float floor_max_angle = (float) p_floor_max_angle;
			bool infinite_inertia = (bool) p_infinite_inertia;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)linear_velocity, (Variant *)up_direction, (Variant *)&stop_on_slope, (Variant *)&max_slides, (Variant *)&floor_max_angle, (Variant *)&infinite_inertia};
			Variant ret = caller->call((String)"move_and_slide", varargs, 6, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_move_and_slide_with_snap(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_linear_velocity, WasGoState::WasGoID p_snap, WasGoState::WasGoID p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *linear_velocity = (Vector3 *)state->lookup_variant(p_linear_velocity);
			Vector3 *snap = (Vector3 *)state->lookup_variant(p_snap);
			Vector3 *up_direction = (Vector3 *)state->lookup_variant(p_up_direction);
			bool stop_on_slope = (bool) p_stop_on_slope;
			int max_slides = (int) p_max_slides;
			float floor_max_angle = (float) p_floor_max_angle;
			bool infinite_inertia = (bool) p_infinite_inertia;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)linear_velocity, (Variant *)snap, (Variant *)up_direction, (Variant *)&stop_on_slope, (Variant *)&max_slides, (Variant *)&floor_max_angle, (Variant *)&infinite_inertia};
			Variant ret = caller->call((String)"move_and_slide_with_snap", varargs, 7, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_KinematicBody_wrapper_set_axis_lock(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_axis, bool p_lock){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			PhysicsServer::BodyAxis *axis = (PhysicsServer::BodyAxis *) state->lookup_object(p_axis);
			bool lock = (bool) p_lock;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&axis, (Variant *)&lock};
			Variant ret = caller->call((String)"set_axis_lock", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_KinematicBody_wrapper_set_safe_margin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_pixels){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			float pixels = (float) p_pixels;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&pixels};
			Variant ret = caller->call((String)"set_safe_margin", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

int _wasgo_KinematicBody_wrapper_test_move(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_from, WasGoState::WasGoID p_rel_vec, bool p_infinite_inertia){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Transform *from = (Transform *)state->lookup_variant(p_from);
			Vector3 *rel_vec = (Vector3 *)state->lookup_variant(p_rel_vec);
			bool infinite_inertia = (bool) p_infinite_inertia;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)from, (Variant *)rel_vec, (Variant *)&infinite_inertia};
			int ret = (int) caller->call((String)"test_move", varargs, 3, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Light_wrapper_get_bake_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_bake_mode", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Light_wrapper_get_color(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_color", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Light_wrapper_get_cull_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_cull_mask", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

float _wasgo_Light_wrapper_get_param(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_param){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Light::Param *param = (Light::Param *) state->lookup_object(p_param);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&param};
			float ret = (float) caller->call((String)"get_param", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

WasGoState::WasGoID _wasgo_Light_wrapper_get_shadow_color(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_shadow_color", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Light_wrapper_get_shadow_reverse_cull_face(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_shadow_reverse_cull_face", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_Light_wrapper_has_shadow(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"has_shadow", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_Light_wrapper_is_editor_only(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_editor_only", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_Light_wrapper_is_negative(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_negative", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_Light_wrapper_set_bake_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_bake_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Light::BakeMode *bake_mode = (Light::BakeMode *) state->lookup_object(p_bake_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bake_mode};
			Variant ret = caller->call((String)"set_bake_mode", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Light_wrapper_set_color(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_color){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Color *color = (Color *)state->lookup_variant(p_color);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)color};
			Variant ret = caller->call((String)"set_color", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Light_wrapper_set_cull_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_cull_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			int cull_mask = (int) p_cull_mask;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&cull_mask};
			Variant ret = caller->call((String)"set_cull_mask", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Light_wrapper_set_editor_only(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_editor_only){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			bool editor_only = (bool) p_editor_only;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&editor_only};
			Variant ret = caller->call((String)"set_editor_only", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Light_wrapper_set_negative(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enabled};
			Variant ret = caller->call((String)"set_negative", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Light_wrapper_set_param(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_param, float p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Light::Param *param = (Light::Param *) state->lookup_object(p_param);
			float value = (float) p_value;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&param, (Variant *)&value};
			Variant ret = caller->call((String)"set_param", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Light_wrapper_set_shadow(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enabled};
			Variant ret = caller->call((String)"set_shadow", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Light_wrapper_set_shadow_color(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_shadow_color){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Color *shadow_color = (Color *)state->lookup_variant(p_shadow_color);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)shadow_color};
			Variant ret = caller->call((String)"set_shadow_color", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Light_wrapper_set_shadow_reverse_cull_face(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_shadow_reverse_cull_face", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_MeshInstance_wrapper_create_convex_collision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"create_convex_collision", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_MeshInstance_wrapper_create_trimesh_collision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"create_trimesh_collision", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_MeshInstance_wrapper_get_active_material(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_surface){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			int surface = (int) p_surface;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&surface};
			Variant ret = caller->call((String)"get_active_material", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_MeshInstance_wrapper_get_mesh(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_mesh", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_MeshInstance_wrapper_get_skeleton_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_skeleton_path", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_MeshInstance_wrapper_get_skin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_skin", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_MeshInstance_wrapper_get_surface_material(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_surface){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			int surface = (int) p_surface;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&surface};
			Variant ret = caller->call((String)"get_surface_material", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_MeshInstance_wrapper_get_surface_material_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_surface_material_count", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_MeshInstance_wrapper_is_software_skinning_transform_normals_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_software_skinning_transform_normals_enabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_MeshInstance_wrapper_set_mesh(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mesh){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Mesh *mesh = (Mesh *) state->lookup_object(p_mesh);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)mesh};
			Variant ret = caller->call((String)"set_mesh", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_MeshInstance_wrapper_set_skeleton_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_skeleton_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			NodePath *skeleton_path = (NodePath *)state->lookup_variant(p_skeleton_path);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)skeleton_path};
			Variant ret = caller->call((String)"set_skeleton_path", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_MeshInstance_wrapper_set_skin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_skin){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Skin *skin = (Skin *) state->lookup_object(p_skin);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)skin};
			Variant ret = caller->call((String)"set_skin", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_MeshInstance_wrapper_set_software_skinning_transform_normals(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enabled};
			Variant ret = caller->call((String)"set_software_skinning_transform_normals", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_MeshInstance_wrapper_set_surface_material(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_surface, WasGoState::WasGoID p_material){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			int surface = (int) p_surface;
			Material *material = (Material *) state->lookup_object(p_material);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&surface, (Variant *)material};
			Variant ret = caller->call((String)"set_surface_material", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_OmniLight_wrapper_get_shadow_detail(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		OmniLight *caller = (OmniLight *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_shadow_detail", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_OmniLight_wrapper_get_shadow_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		OmniLight *caller = (OmniLight *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_shadow_mode", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_OmniLight_wrapper_set_shadow_detail(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_detail){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		OmniLight *caller = (OmniLight *) state->lookup_object(caller_id);
		if(caller){
			OmniLight::ShadowDetail *detail = (OmniLight::ShadowDetail *) state->lookup_object(p_detail);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&detail};
			Variant ret = caller->call((String)"set_shadow_detail", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_OmniLight_wrapper_set_shadow_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		OmniLight *caller = (OmniLight *) state->lookup_object(caller_id);
		if(caller){
			OmniLight::ShadowMode *mode = (OmniLight::ShadowMode *) state->lookup_object(p_mode);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mode};
			Variant ret = caller->call((String)"set_shadow_mode", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_Particles_wrapper_capture_aabb(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"capture_aabb", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Particles_wrapper_get_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_amount", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Particles_wrapper_get_draw_order(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_draw_order", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Particles_wrapper_get_draw_pass_mesh(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_pass){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int pass = (int) p_pass;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&pass};
			Variant ret = caller->call((String)"get_draw_pass_mesh", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Particles_wrapper_get_draw_passes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_draw_passes", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

float _wasgo_Particles_wrapper_get_explosiveness_ratio(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_explosiveness_ratio", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

int _wasgo_Particles_wrapper_get_fixed_fps(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_fixed_fps", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_Particles_wrapper_get_fractional_delta(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_fractional_delta", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

float _wasgo_Particles_wrapper_get_lifetime(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_lifetime", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

int _wasgo_Particles_wrapper_get_one_shot(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_one_shot", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

float _wasgo_Particles_wrapper_get_pre_process_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_pre_process_time", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

WasGoState::WasGoID _wasgo_Particles_wrapper_get_process_material(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_process_material", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_Particles_wrapper_get_randomness_ratio(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_randomness_ratio", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

float _wasgo_Particles_wrapper_get_speed_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_speed_scale", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

int _wasgo_Particles_wrapper_get_use_local_coordinates(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_use_local_coordinates", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Particles_wrapper_get_visibility_aabb(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_visibility_aabb", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Particles_wrapper_is_emitting(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_emitting", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_Particles_wrapper_restart(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"restart", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_amount){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int amount = (int) p_amount;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&amount};
			Variant ret = caller->call((String)"set_amount", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_draw_order(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_order){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Particles::DrawOrder *order = (Particles::DrawOrder *) state->lookup_object(p_order);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&order};
			Variant ret = caller->call((String)"set_draw_order", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_draw_pass_mesh(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_pass, WasGoState::WasGoID p_mesh){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int pass = (int) p_pass;
			Mesh *mesh = (Mesh *) state->lookup_object(p_mesh);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&pass, (Variant *)mesh};
			Variant ret = caller->call((String)"set_draw_pass_mesh", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_draw_passes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_passes){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int passes = (int) p_passes;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&passes};
			Variant ret = caller->call((String)"set_draw_passes", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_emitting(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_emitting){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			bool emitting = (bool) p_emitting;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&emitting};
			Variant ret = caller->call((String)"set_emitting", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_explosiveness_ratio(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_ratio){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			float ratio = (float) p_ratio;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&ratio};
			Variant ret = caller->call((String)"set_explosiveness_ratio", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_fixed_fps(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_fps){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int fps = (int) p_fps;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&fps};
			Variant ret = caller->call((String)"set_fixed_fps", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_fractional_delta(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_fractional_delta", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_lifetime(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_secs){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			float secs = (float) p_secs;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&secs};
			Variant ret = caller->call((String)"set_lifetime", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_one_shot(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_one_shot", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_pre_process_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_secs){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			float secs = (float) p_secs;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&secs};
			Variant ret = caller->call((String)"set_pre_process_time", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_process_material(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_material){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Material *material = (Material *) state->lookup_object(p_material);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)material};
			Variant ret = caller->call((String)"set_process_material", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_randomness_ratio(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_ratio){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			float ratio = (float) p_ratio;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&ratio};
			Variant ret = caller->call((String)"set_randomness_ratio", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_speed_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			float scale = (float) p_scale;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&scale};
			Variant ret = caller->call((String)"set_speed_scale", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_use_local_coordinates(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_use_local_coordinates", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Particles_wrapper_set_visibility_aabb(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_aabb){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			AABB *aabb = (AABB *)state->lookup_variant(p_aabb);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)aabb};
			Variant ret = caller->call((String)"set_visibility_aabb", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_PhysicalBone_wrapper_apply_central_impulse(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_impulse){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *impulse = (Vector3 *)state->lookup_variant(p_impulse);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)impulse};
			Variant ret = caller->call((String)"apply_central_impulse", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_PhysicalBone_wrapper_apply_impulse(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_position, WasGoState::WasGoID p_impulse){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *position = (Vector3 *)state->lookup_variant(p_position);
			Vector3 *impulse = (Vector3 *)state->lookup_variant(p_impulse);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)position, (Variant *)impulse};
			Variant ret = caller->call((String)"apply_impulse", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

int _wasgo_PhysicsBody_wrapper_get_collision_layer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_collision_layer", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_PhysicsBody_wrapper_get_collision_layer_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bit};
			int ret = (int) caller->call((String)"get_collision_layer_bit", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_PhysicsBody_wrapper_get_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_collision_mask", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_PhysicsBody_wrapper_get_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bit};
			int ret = (int) caller->call((String)"get_collision_mask_bit", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_PhysicsBody_wrapper_set_collision_layer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_layer){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int layer = (int) p_layer;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&layer};
			Variant ret = caller->call((String)"set_collision_layer", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_PhysicsBody_wrapper_set_collision_layer_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit, bool p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			bool value = (bool) p_value;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bit, (Variant *)&value};
			Variant ret = caller->call((String)"set_collision_layer_bit", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_PhysicsBody_wrapper_set_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int mask = (int) p_mask;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mask};
			Variant ret = caller->call((String)"set_collision_mask", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_PhysicsBody_wrapper_set_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit, bool p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			bool value = (bool) p_value;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bit, (Variant *)&value};
			Variant ret = caller->call((String)"set_collision_mask_bit", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_add_exception(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Object *node = (Object *) state->lookup_object(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node};
			Variant ret = caller->call((String)"add_exception", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_add_exception_rid(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_rid){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			RID *rid = (RID *)state->lookup_variant(p_rid);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)rid};
			Variant ret = caller->call((String)"add_exception_rid", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_clear_exceptions(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"clear_exceptions", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_force_raycast_update(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"force_raycast_update", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_RayCast_wrapper_get_cast_to(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_cast_to", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_RayCast_wrapper_get_collider(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_collider", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_RayCast_wrapper_get_collider_shape(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_collider_shape", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_RayCast_wrapper_get_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_collision_mask", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_RayCast_wrapper_get_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bit};
			int ret = (int) caller->call((String)"get_collision_mask_bit", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_RayCast_wrapper_get_collision_normal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_collision_normal", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_RayCast_wrapper_get_collision_point(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_collision_point", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_RayCast_wrapper_get_exclude_parent_body(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_exclude_parent_body", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_RayCast_wrapper_is_collide_with_areas_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_collide_with_areas_enabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_RayCast_wrapper_is_collide_with_bodies_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_collide_with_bodies_enabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_RayCast_wrapper_is_colliding(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_colliding", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_RayCast_wrapper_is_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_enabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_RayCast_wrapper_remove_exception(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Object *node = (Object *) state->lookup_object(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)node};
			Variant ret = caller->call((String)"remove_exception", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_remove_exception_rid(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_rid){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			RID *rid = (RID *)state->lookup_variant(p_rid);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)rid};
			Variant ret = caller->call((String)"remove_exception_rid", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_set_cast_to(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_local_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *local_point = (Vector3 *)state->lookup_variant(p_local_point);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)local_point};
			Variant ret = caller->call((String)"set_cast_to", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_set_collide_with_areas(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_collide_with_areas", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_set_collide_with_bodies(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_collide_with_bodies", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_set_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			int mask = (int) p_mask;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mask};
			Variant ret = caller->call((String)"set_collision_mask", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_set_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit, bool p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			bool value = (bool) p_value;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bit, (Variant *)&value};
			Variant ret = caller->call((String)"set_collision_mask_bit", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_set_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enabled};
			Variant ret = caller->call((String)"set_enabled", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_RayCast_wrapper_set_exclude_parent_body(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			bool mask = (bool) p_mask;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&mask};
			Variant ret = caller->call((String)"set_exclude_parent_body", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_add_bone(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			String *name = (String *)state->lookup_variant(p_name);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)name};
			Variant ret = caller->call((String)"add_bone", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_bind_child_node_to_bone(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Node *node = (Node *) state->lookup_object(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx, (Variant *)node};
			Variant ret = caller->call((String)"bind_child_node_to_bone", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_clear_bones(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"clear_bones", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_clear_bones_global_pose_override(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"clear_bones_global_pose_override", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

int _wasgo_Skeleton_wrapper_find_bone(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			String *name = (String *)state->lookup_variant(p_name);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)name};
			int ret = (int) caller->call((String)"find_bone", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

int _wasgo_Skeleton_wrapper_get_bone_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"get_bone_count", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bone_custom_pose(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx};
			Variant ret = caller->call((String)"get_bone_custom_pose", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bone_global_pose(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx};
			Variant ret = caller->call((String)"get_bone_global_pose", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bone_name(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx};
			Variant ret = caller->call((String)"get_bone_name", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Skeleton_wrapper_get_bone_parent(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx};
			int ret = (int) caller->call((String)"get_bone_parent", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bone_pose(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx};
			Variant ret = caller->call((String)"get_bone_pose", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bone_rest(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx};
			Variant ret = caller->call((String)"get_bone_rest", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bound_child_nodes_to_bone(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx};
			Variant ret = caller->call((String)"get_bound_child_nodes_to_bone", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Skeleton_wrapper_is_bone_rest_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx};
			int ret = (int) caller->call((String)"is_bone_rest_disabled", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_Skeleton_wrapper_localize_rests(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"localize_rests", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_physical_bones_add_collision_exception(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_exception){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			RID *exception = (RID *)state->lookup_variant(p_exception);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)exception};
			Variant ret = caller->call((String)"physical_bones_add_collision_exception", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_physical_bones_remove_collision_exception(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_exception){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			RID *exception = (RID *)state->lookup_variant(p_exception);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)exception};
			Variant ret = caller->call((String)"physical_bones_remove_collision_exception", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_physical_bones_start_simulation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_bones){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			Array *bones = (Array *)state->lookup_variant(p_bones);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)bones};
			Variant ret = caller->call((String)"physical_bones_start_simulation", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_physical_bones_stop_simulation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"physical_bones_stop_simulation", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_register_skin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_skin){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			Skin *skin = (Skin *) state->lookup_object(p_skin);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)skin};
			Variant ret = caller->call((String)"register_skin", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_Skeleton_wrapper_set_bone_custom_pose(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_custom_pose){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Transform *custom_pose = (Transform *)state->lookup_variant(p_custom_pose);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx, (Variant *)custom_pose};
			Variant ret = caller->call((String)"set_bone_custom_pose", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_set_bone_disable_rest(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, bool p_disable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			bool disable = (bool) p_disable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx, (Variant *)&disable};
			Variant ret = caller->call((String)"set_bone_disable_rest", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_set_bone_global_pose_override(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_pose, float p_amount, bool p_persistent){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Transform *pose = (Transform *)state->lookup_variant(p_pose);
			float amount = (float) p_amount;
			bool persistent = (bool) p_persistent;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx, (Variant *)pose, (Variant *)&amount, (Variant *)&persistent};
			Variant ret = caller->call((String)"set_bone_global_pose_override", varargs, 4, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_set_bone_parent(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, int p_parent_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			int parent_idx = (int) p_parent_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx, (Variant *)&parent_idx};
			Variant ret = caller->call((String)"set_bone_parent", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_set_bone_pose(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_pose){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Transform *pose = (Transform *)state->lookup_variant(p_pose);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx, (Variant *)pose};
			Variant ret = caller->call((String)"set_bone_pose", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_set_bone_rest(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_rest){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Transform *rest = (Transform *)state->lookup_variant(p_rest);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx, (Variant *)rest};
			Variant ret = caller->call((String)"set_bone_rest", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_unbind_child_node_from_bone(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Node *node = (Node *) state->lookup_object(p_node);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx, (Variant *)node};
			Variant ret = caller->call((String)"unbind_child_node_from_bone", varargs, 2, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Skeleton_wrapper_unparent_bone_and_rest(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bone_idx};
			Variant ret = caller->call((String)"unparent_bone_and_rest", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_force_update_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"force_update_transform", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_global_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_global_transform", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_parent_spatial(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_parent_spatial", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_rotation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_rotation", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_rotation_degrees(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_rotation_degrees", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_scale", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_transform", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_translation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_translation", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_world(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_world", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_Spatial_wrapper_is_scale_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_scale_disabled", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
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
			int ret = (int) caller->call((String)"is_set_as_toplevel", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_Spatial_wrapper_set_as_toplevel(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&enable};
			Variant ret = caller->call((String)"set_as_toplevel", varargs, 1, error);
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
			Variant ret = caller->call((String)"set_disable_scale", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_global_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_global){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Transform *global = (Transform *)state->lookup_variant(p_global);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)global};
			Variant ret = caller->call((String)"set_global_transform", varargs, 1, error);
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
			Variant ret = caller->call((String)"set_ignore_transform_notification", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_rotation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_euler){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *euler = (Vector3 *)state->lookup_variant(p_euler);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)euler};
			Variant ret = caller->call((String)"set_rotation", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_rotation_degrees(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_euler_degrees){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *euler_degrees = (Vector3 *)state->lookup_variant(p_euler_degrees);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)euler_degrees};
			Variant ret = caller->call((String)"set_rotation_degrees", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *scale = (Vector3 *)state->lookup_variant(p_scale);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)scale};
			Variant ret = caller->call((String)"set_scale", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_local){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Transform *local = (Transform *)state->lookup_variant(p_local);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)local};
			Variant ret = caller->call((String)"set_transform", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_Spatial_wrapper_set_translation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_translation){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *translation = (Vector3 *)state->lookup_variant(p_translation);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)translation};
			Variant ret = caller->call((String)"set_translation", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

float _wasgo_StaticBody_wrapper_get_bounce(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_bounce", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

WasGoState::WasGoID _wasgo_StaticBody_wrapper_get_constant_angular_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_constant_angular_velocity", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

WasGoState::WasGoID _wasgo_StaticBody_wrapper_get_constant_linear_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_constant_linear_velocity", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

float _wasgo_StaticBody_wrapper_get_friction(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			float ret = (float) caller->call((String)"get_friction", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return float();
}

WasGoState::WasGoID _wasgo_StaticBody_wrapper_get_physics_material_override(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_physics_material_override", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_StaticBody_wrapper_set_bounce(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_bounce){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			float bounce = (float) p_bounce;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&bounce};
			Variant ret = caller->call((String)"set_bounce", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_StaticBody_wrapper_set_constant_angular_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_vel){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *vel = (Vector3 *)state->lookup_variant(p_vel);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)vel};
			Variant ret = caller->call((String)"set_constant_angular_velocity", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_StaticBody_wrapper_set_constant_linear_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_vel){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 *vel = (Vector3 *)state->lookup_variant(p_vel);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)vel};
			Variant ret = caller->call((String)"set_constant_linear_velocity", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_StaticBody_wrapper_set_friction(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_friction){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			float friction = (float) p_friction;
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)&friction};
			Variant ret = caller->call((String)"set_friction", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

void _wasgo_StaticBody_wrapper_set_physics_material_override(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_physics_material_override){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			PhysicsMaterial *physics_material_override = (PhysicsMaterial *) state->lookup_object(p_physics_material_override);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)physics_material_override};
			Variant ret = caller->call((String)"set_physics_material_override", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_VisibilityNotifier_wrapper_get_aabb(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		VisibilityNotifier *caller = (VisibilityNotifier *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_aabb", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

int _wasgo_VisibilityNotifier_wrapper_is_on_screen(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		VisibilityNotifier *caller = (VisibilityNotifier *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			int ret = (int) caller->call((String)"is_on_screen", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return ret;
		}
	}
	return int();
}

void _wasgo_VisibilityNotifier_wrapper_set_aabb(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_rect){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		VisibilityNotifier *caller = (VisibilityNotifier *) state->lookup_object(caller_id);
		if(caller){
			AABB *rect = (AABB *)state->lookup_variant(p_rect);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)rect};
			Variant ret = caller->call((String)"set_aabb", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}

WasGoState::WasGoID _wasgo_WorldEnvironment_wrapper_get_environment(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		WorldEnvironment *caller = (WorldEnvironment *) state->lookup_object(caller_id);
		if(caller){
			Variant::CallError error;
			const Variant ** varargs = nullptr;
			Variant ret = caller->call((String)"get_environment", varargs, 0, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
			return state->handle_return_variant(ret);
		}
	}
	return WasGoState::WasGoID();
}

void _wasgo_WorldEnvironment_wrapper_set_environment(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_env){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		WorldEnvironment *caller = (WorldEnvironment *) state->lookup_object(caller_id);
		if(caller){
			Environment *env = (Environment *) state->lookup_object(p_env);
			Variant::CallError error;
			const Variant* varargs[] = {(Variant *)env};
			Variant ret = caller->call((String)"set_environment", varargs, 1, error);
			if(error.error != Variant::CallError::CALL_OK){throw "BAD WASGO CALL";}
		}
	}
	return;
}
#endif