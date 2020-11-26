#ifndef WASGO_NATIVE_WRAPPER_HEADERS
#define WASGO_NATIVE_WRAPPER_HEADERS
extern "C"{
#include "wasm_export.h"
#include "src/wasgo_state.h"
#include "register_scene_types.h"
#include "scene_string_names.h"
#include "2d\animated_sprite.h"
#include "2d\area_2d.h"
#include "2d\audio_stream_player_2d.h"
#include "2d\back_buffer_copy.h"
#include "2d\camera_2d.h"
#include "2d\canvas_item.h"
#include "2d\canvas_modulate.h"
#include "2d\collision_object_2d.h"
#include "2d\collision_polygon_2d.h"
#include "2d\collision_shape_2d.h"
#include "2d\cpu_particles_2d.h"
#include "2d\joints_2d.h"
#include "2d\light_2d.h"
#include "2d\light_occluder_2d.h"
#include "2d\line_2d.h"
#include "2d\line_builder.h"
#include "2d\mesh_instance_2d.h"
#include "2d\multimesh_instance_2d.h"
#include "2d\navigation_2d.h"
#include "2d\navigation_polygon.h"
#include "2d\node_2d.h"
#include "2d\parallax_background.h"
#include "2d\parallax_layer.h"
#include "2d\particles_2d.h"
#include "2d\path_2d.h"
#include "2d\physics_body_2d.h"
#include "2d\polygon_2d.h"
#include "2d\position_2d.h"
#include "2d\ray_cast_2d.h"
#include "2d\remote_transform_2d.h"
#include "2d\skeleton_2d.h"
#include "2d\sprite.h"
#include "2d\tile_map.h"
#include "2d\touch_screen_button.h"
#include "2d\visibility_notifier_2d.h"
#include "2d\y_sort.h"
#include "3d\area.h"
#include "3d\arvr_nodes.h"
#include "3d\audio_stream_player_3d.h"
#include "3d\baked_lightmap.h"
#include "3d\bone_attachment.h"
#include "3d\camera.h"
#include "3d\collision_object.h"
#include "3d\collision_polygon.h"
#include "3d\collision_shape.h"
#include "3d\cpu_particles.h"
#include "3d\gi_probe.h"
#include "3d\immediate_geometry.h"
#include "3d\interpolated_camera.h"
#include "3d\light.h"
#include "3d\listener.h"
#include "3d\mesh_instance.h"
#include "3d\multimesh_instance.h"
#include "3d\navigation.h"
#include "3d\navigation_mesh.h"
#include "3d\particles.h"
#include "3d\path.h"
#include "3d\physics_body.h"
#include "3d\physics_joint.h"
#include "3d\position_3d.h"
#include "3d\proximity_group.h"
#include "3d\ray_cast.h"
#include "3d\reflection_probe.h"
#include "3d\remote_transform.h"
#include "3d\skeleton.h"
#include "3d\soft_body.h"
#include "3d\spatial.h"
#include "3d\spatial_velocity_tracker.h"
#include "3d\spring_arm.h"
#include "3d\sprite_3d.h"
#include "3d\vehicle_body.h"
#include "3d\visibility_notifier.h"
#include "3d\visual_instance.h"
#include "3d\voxel_light_baker.h"
#include "3d\world_environment.h"
#include "animation\animation_blend_space_1d.h"
#include "animation\animation_blend_space_2d.h"
#include "animation\animation_blend_tree.h"
#include "animation\animation_cache.h"
#include "animation\animation_node_state_machine.h"
#include "animation\animation_player.h"
#include "animation\animation_tree.h"
#include "animation\animation_tree_player.h"
#include "animation\root_motion_view.h"
#include "animation\skeleton_ik.h"
#include "animation\tween.h"
#include "audio\audio_stream_player.h"
#include "debugger\script_debugger_remote.h"
#include "gui\base_button.h"
#include "gui\box_container.h"
#include "gui\button.h"
#include "gui\center_container.h"
#include "gui\check_box.h"
#include "gui\check_button.h"
#include "gui\color_picker.h"
#include "gui\color_rect.h"
#include "gui\container.h"
#include "gui\control.h"
#include "gui\dialogs.h"
#include "gui\file_dialog.h"
#include "gui\gradient_edit.h"
#include "gui\graph_edit.h"
#include "gui\graph_node.h"
#include "gui\grid_container.h"
#include "gui\item_list.h"
#include "gui\label.h"
#include "gui\line_edit.h"
#include "gui\link_button.h"
#include "gui\margin_container.h"
#include "gui\menu_button.h"
#include "gui\nine_patch_rect.h"
#include "gui\option_button.h"
#include "gui\panel.h"
#include "gui\panel_container.h"
#include "gui\popup.h"
#include "gui\popup_menu.h"
#include "gui\progress_bar.h"
#include "gui\range.h"
#include "gui\reference_rect.h"
#include "gui\rich_text_effect.h"
#include "gui\rich_text_label.h"
#include "gui\scroll_bar.h"
#include "gui\scroll_container.h"
#include "gui\separator.h"
#include "gui\shortcut.h"
#include "gui\slider.h"
#include "gui\spin_box.h"
#include "gui\split_container.h"
#include "gui\tabs.h"
#include "gui\tab_container.h"
#include "gui\texture_button.h"
#include "gui\texture_progress.h"
#include "gui\texture_rect.h"
#include "gui\text_edit.h"
#include "gui\tool_button.h"
#include "gui\tree.h"
#include "gui\video_player.h"
#include "gui\viewport_container.h"
#include "main\canvas_layer.h"
#include "main\http_request.h"
#include "main\instance_placeholder.h"
#include "main\node.h"
#include "main\resource_preloader.h"
#include "main\scene_tree.h"
#include "main\timer.h"
#include "main\viewport.h"
#include "resources\animation.h"
#include "resources\audio_stream_sample.h"
#include "resources\bit_map.h"
#include "resources\box_shape.h"
#include "resources\capsule_shape.h"
#include "resources\capsule_shape_2d.h"
#include "resources\circle_shape_2d.h"
#include "resources\concave_polygon_shape.h"
#include "resources\concave_polygon_shape_2d.h"
#include "resources\convex_polygon_shape.h"
#include "resources\convex_polygon_shape_2d.h"
#include "resources\curve.h"
#include "resources\cylinder_shape.h"
#include "resources\dynamic_font.h"
#include "resources\environment.h"
#include "resources\font.h"
#include "resources\gradient.h"
#include "resources\height_map_shape.h"
#include "resources\line_shape_2d.h"
#include "resources\material.h"
#include "resources\mesh.h"
#include "resources\mesh_data_tool.h"
#include "resources\mesh_library.h"
#include "resources\multimesh.h"
#include "resources\packed_scene.h"
#include "resources\particles_material.h"
#include "resources\physics_material.h"
#include "resources\plane_shape.h"
#include "resources\polygon_path_finder.h"
#include "resources\primitive_meshes.h"
#include "resources\ray_shape.h"
#include "resources\rectangle_shape_2d.h"
#include "resources\resource_format_text.h"
#include "resources\segment_shape_2d.h"
#include "resources\shader.h"
#include "resources\shape.h"
#include "resources\shape_2d.h"
#include "resources\skin.h"
#include "resources\sky.h"
#include "resources\sphere_shape.h"
#include "resources\style_box.h"
#include "resources\surface_tool.h"
#include "resources\texture.h"
#include "resources\text_file.h"
#include "resources\theme.h"
#include "resources\tile_set.h"
#include "resources\video_stream.h"
#include "resources\visual_shader.h"
#include "resources\visual_shader_nodes.h"
#include "resources\world.h"
#include "resources\world_2d.h"
#include "resources\default_theme\default_theme.h"
#include "resources\default_theme\theme_data.h"

int _wasgo_AnimationPlayer_wrapper_add_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name, WasGoState::WasGoID p_animation){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			Ref<Animation> animation = (state->lookup_object(p_animation));
			return (int) caller->add_animation(name, animation);
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_advance(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_delta){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			float delta = (float) p_delta;
			caller->advance(delta);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationPlayer_wrapper_animation_get_next(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_anim_from){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String anim_from = state->lookup_variant(p_anim_from);
			return state->create_variant(caller->animation_get_next(anim_from));
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_animation_set_next(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_anim_from, WasGoState::WasGoID p_anim_to){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String anim_from = state->lookup_variant(p_anim_from);
			String anim_to = state->lookup_variant(p_anim_to);
			caller->animation_set_next(anim_from, anim_to);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_clear_caches(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			caller->clear_caches();
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_clear_queue(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			caller->clear_queue();
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationPlayer_wrapper_find_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_animation){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			Ref<Animation> animation = (state->lookup_object(p_animation));
			return state->create_variant(caller->find_animation(animation));
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationPlayer_wrapper_get_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			return state->reference_object(caller->get_animation(name));
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationPlayer_wrapper_get_animation_list(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_animation_list());
		}
	}
}

int _wasgo_AnimationPlayer_wrapper_get_animation_process_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_animation_process_mode();
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationPlayer_wrapper_get_assigned_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_assigned_animation());
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationPlayer_wrapper_get_autoplay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_autoplay());
		}
	}
}

float _wasgo_AnimationPlayer_wrapper_get_blend_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_anim_from, WasGoState::WasGoID p_anim_to){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String anim_from = state->lookup_variant(p_anim_from);
			String anim_to = state->lookup_variant(p_anim_to);
			return (float) caller->get_blend_time(anim_from, anim_to);
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationPlayer_wrapper_get_current_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_current_animation());
		}
	}
}

float _wasgo_AnimationPlayer_wrapper_get_current_animation_length(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_current_animation_length();
		}
	}
}

float _wasgo_AnimationPlayer_wrapper_get_current_animation_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_current_animation_position();
		}
	}
}

float _wasgo_AnimationPlayer_wrapper_get_default_blend_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_default_blend_time();
		}
	}
}

int _wasgo_AnimationPlayer_wrapper_get_method_call_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_method_call_mode();
		}
	}
}

float _wasgo_AnimationPlayer_wrapper_get_playing_speed(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_playing_speed();
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationPlayer_wrapper_get_queue(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_queue());
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationPlayer_wrapper_get_root(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_root());
		}
	}
}

float _wasgo_AnimationPlayer_wrapper_get_speed_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_speed_scale();
		}
	}
}

int _wasgo_AnimationPlayer_wrapper_has_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			return (int) caller->has_animation(name);
		}
	}
}

int _wasgo_AnimationPlayer_wrapper_is_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_active();
		}
	}
}

int _wasgo_AnimationPlayer_wrapper_is_playing(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_playing();
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_play(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name, float p_custom_blend, float p_custom_speed, bool p_from_end){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			float custom_blend = (float) p_custom_blend;
			float custom_speed = (float) p_custom_speed;
			bool from_end = (bool) p_from_end;
			caller->play(name, custom_blend, custom_speed, from_end);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_play_backwards(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name, float p_custom_blend){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			float custom_blend = (float) p_custom_blend;
			caller->play_backwards(name, custom_blend);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_queue(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			caller->queue(name);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_remove_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			caller->remove_animation(name);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_rename_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name, WasGoState::WasGoID p_newname){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			String newname = state->lookup_variant(p_newname);
			caller->rename_animation(name, newname);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_seek(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_seconds, bool p_update){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			float seconds = (float) p_seconds;
			bool update = (bool) p_update;
			caller->seek(seconds, update);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_set_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_active){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			bool active = (bool) p_active;
			caller->set_active(active);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_set_animation_process_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_animation_process_mode((AnimationPlayer::AnimationProcessMode) mode);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_set_assigned_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_anim){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String anim = state->lookup_variant(p_anim);
			caller->set_assigned_animation(anim);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_set_autoplay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			caller->set_autoplay(name);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_set_blend_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_anim_from, WasGoState::WasGoID p_anim_to, float p_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String anim_from = state->lookup_variant(p_anim_from);
			String anim_to = state->lookup_variant(p_anim_to);
			float sec = (float) p_sec;
			caller->set_blend_time(anim_from, anim_to, sec);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_set_current_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_anim){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			String anim = state->lookup_variant(p_anim);
			caller->set_current_animation(anim);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_set_default_blend_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			float sec = (float) p_sec;
			caller->set_default_blend_time(sec);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_set_method_call_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_method_call_mode(mode);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_set_root(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			NodePath path = state->lookup_variant(p_path);
			caller->set_root(path);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_set_speed_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_speed){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			float speed = (float) p_speed;
			caller->set_speed_scale(speed);
			return;
		}
	}
}

void _wasgo_AnimationPlayer_wrapper_stop(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_reset){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationPlayer *caller = (AnimationPlayer *) state->lookup_object(caller_id);
		if(caller){
			bool reset = (bool) p_reset;
			caller->stop(reset);
			return;
		}
	}
}

void _wasgo_AnimationTree_wrapper_advance(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_delta){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			float delta = (float) p_delta;
			caller->advance(delta);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTree_wrapper_get_animation_player(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_animation_player());
		}
	}
}

int _wasgo_AnimationTree_wrapper_get_process_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_process_mode();
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTree_wrapper_get_root_motion_track(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_root_motion_track());
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTree_wrapper_get_root_motion_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_root_motion_transform());
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTree_wrapper_get_tree_root(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_tree_root());
		}
	}
}

int _wasgo_AnimationTree_wrapper_is_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_active();
		}
	}
}

void _wasgo_AnimationTree_wrapper_rename_parameter(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_old_name, WasGoState::WasGoID p_new_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			String old_name = state->lookup_variant(p_old_name);
			String new_name = state->lookup_variant(p_new_name);
			caller->rename_parameter(old_name, new_name);
			return;
		}
	}
}

void _wasgo_AnimationTree_wrapper_set_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_active){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			bool active = (bool) p_active;
			caller->set_active(active);
			return;
		}
	}
}

void _wasgo_AnimationTree_wrapper_set_animation_player(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_root){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			NodePath root = state->lookup_variant(p_root);
			caller->set_animation_player(root);
			return;
		}
	}
}

void _wasgo_AnimationTree_wrapper_set_process_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_process_mode(mode);
			return;
		}
	}
}

void _wasgo_AnimationTree_wrapper_set_root_motion_track(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			NodePath path = state->lookup_variant(p_path);
			caller->set_root_motion_track(path);
			return;
		}
	}
}

void _wasgo_AnimationTree_wrapper_set_tree_root(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_root){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTree *caller = (AnimationTree *) state->lookup_object(caller_id);
		if(caller){
			Ref<AnimationNode> root = (state->lookup_object(p_root));
			caller->set_tree_root(root);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_add_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_type, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			int type = (int) p_type;
			String id = state->lookup_variant(p_id);
			caller->add_node(type, id);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_advance(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_delta){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			float delta = (float) p_delta;
			caller->advance(delta);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_animation_node_get_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return state->reference_object(caller->animation_node_get_animation(id));
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_animation_node_get_master_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return state->create_variant(caller->animation_node_get_master_animation(id));
		}
	}
}

float _wasgo_AnimationTreePlayer_wrapper_animation_node_get_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (float) caller->animation_node_get_position(id);
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_animation_node_set_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_animation){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			Ref<Animation> animation = (state->lookup_object(p_animation));
			caller->animation_node_set_animation(id, animation);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_animation_node_set_filter_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_path, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			NodePath path = state->lookup_variant(p_path);
			bool enable = (bool) p_enable;
			caller->animation_node_set_filter_path(id, path, enable);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_animation_node_set_master_animation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_source){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			String source = state->lookup_variant(p_source);
			caller->animation_node_set_master_animation(id, source);
			return;
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_are_nodes_connected(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_dst_id, int p_dst_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			String dst_id = state->lookup_variant(p_dst_id);
			int dst_input_idx = (int) p_dst_input_idx;
			return (int) caller->are_nodes_connected(id, dst_id, dst_input_idx);
		}
	}
}

float _wasgo_AnimationTreePlayer_wrapper_blend2_node_get_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (float) caller->blend2_node_get_amount(id);
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_blend2_node_set_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_blend){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			float blend = (float) p_blend;
			caller->blend2_node_set_amount(id, blend);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_blend2_node_set_filter_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_path, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			NodePath path = state->lookup_variant(p_path);
			bool enable = (bool) p_enable;
			caller->blend2_node_set_filter_path(id, path, enable);
			return;
		}
	}
}

float _wasgo_AnimationTreePlayer_wrapper_blend3_node_get_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (float) caller->blend3_node_get_amount(id);
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_blend3_node_set_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_blend){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			float blend = (float) p_blend;
			caller->blend3_node_set_amount(id, blend);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_blend4_node_get_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return state->create_variant(caller->blend4_node_get_amount(id));
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_blend4_node_set_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_blend){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			Vector2 blend = state->lookup_variant(p_blend);
			caller->blend4_node_set_amount(id, blend);
			return;
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_connect_nodes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_dst_id, int p_dst_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			String dst_id = state->lookup_variant(p_dst_id);
			int dst_input_idx = (int) p_dst_input_idx;
			return (int) caller->connect_nodes(id, dst_id, dst_input_idx);
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_disconnect_nodes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_dst_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			int dst_input_idx = (int) p_dst_input_idx;
			caller->disconnect_nodes(id, dst_input_idx);
			return;
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_get_animation_process_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_animation_process_mode();
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_get_base_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_base_path());
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_get_master_player(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_master_player());
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_get_node_list(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_node_list());
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_is_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_active();
		}
	}
}

float _wasgo_AnimationTreePlayer_wrapper_mix_node_get_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (float) caller->mix_node_get_amount(id);
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_mix_node_set_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_ratio){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			float ratio = (float) p_ratio;
			caller->mix_node_set_amount(id, ratio);
			return;
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_node_exists(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String node = state->lookup_variant(p_node);
			return (int) caller->node_exists(node);
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_node_get_input_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (int) caller->node_get_input_count(id);
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_node_get_input_source(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			int idx = (int) p_idx;
			return state->create_variant(caller->node_get_input_source(id, idx));
		}
	}
}

WasGoState::WasGoID _wasgo_AnimationTreePlayer_wrapper_node_get_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return state->create_variant(caller->node_get_position(id));
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_node_get_type(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (int) caller->node_get_type(id);
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_node_rename(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node, WasGoState::WasGoID p_new_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String node = state->lookup_variant(p_node);
			String new_name = state->lookup_variant(p_new_name);
			return (int) caller->node_rename(node, new_name);
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_node_set_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_screen_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			Vector2 screen_position = state->lookup_variant(p_screen_position);
			caller->node_set_position(id, screen_position);
			return;
		}
	}
}

float _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_autorestart_delay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (float) caller->oneshot_node_get_autorestart_delay(id);
		}
	}
}

float _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_autorestart_random_delay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (float) caller->oneshot_node_get_autorestart_random_delay(id);
		}
	}
}

float _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_fadein_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (float) caller->oneshot_node_get_fadein_time(id);
		}
	}
}

float _wasgo_AnimationTreePlayer_wrapper_oneshot_node_get_fadeout_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (float) caller->oneshot_node_get_fadeout_time(id);
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_oneshot_node_has_autorestart(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (int) caller->oneshot_node_has_autorestart(id);
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_oneshot_node_is_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (int) caller->oneshot_node_is_active(id);
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			bool enable = (bool) p_enable;
			caller->oneshot_node_set_autorestart(id, enable);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart_delay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_delay_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			float delay_sec = (float) p_delay_sec;
			caller->oneshot_node_set_autorestart_delay(id, delay_sec);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_autorestart_random_delay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_rand_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			float rand_sec = (float) p_rand_sec;
			caller->oneshot_node_set_autorestart_random_delay(id, rand_sec);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_fadein_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_time_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			float time_sec = (float) p_time_sec;
			caller->oneshot_node_set_fadein_time(id, time_sec);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_fadeout_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_time_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			float time_sec = (float) p_time_sec;
			caller->oneshot_node_set_fadeout_time(id, time_sec);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_set_filter_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, WasGoState::WasGoID p_path, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			NodePath path = state->lookup_variant(p_path);
			bool enable = (bool) p_enable;
			caller->oneshot_node_set_filter_path(id, path, enable);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_start(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			caller->oneshot_node_start(id);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_oneshot_node_stop(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			caller->oneshot_node_stop(id);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_recompute_caches(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			caller->recompute_caches();
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_remove_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			caller->remove_node(id);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_reset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			caller->reset();
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_set_active(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			caller->set_active(enabled);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_set_animation_process_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_animation_process_mode(mode);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_set_base_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			NodePath path = state->lookup_variant(p_path);
			caller->set_base_path(path);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_set_master_player(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_nodepath){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			NodePath nodepath = state->lookup_variant(p_nodepath);
			caller->set_master_player(nodepath);
			return;
		}
	}
}

float _wasgo_AnimationTreePlayer_wrapper_timescale_node_get_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (float) caller->timescale_node_get_scale(id);
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_timescale_node_set_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			float scale = (float) p_scale;
			caller->timescale_node_set_scale(id, scale);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_timeseek_node_seek(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_seconds){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			float seconds = (float) p_seconds;
			caller->timeseek_node_seek(id, seconds);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_transition_node_delete_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			int input_idx = (int) p_input_idx;
			caller->transition_node_delete_input(id, input_idx);
			return;
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_transition_node_get_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (int) caller->transition_node_get_current(id);
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_transition_node_get_input_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (int) caller->transition_node_get_input_count(id);
		}
	}
}

float _wasgo_AnimationTreePlayer_wrapper_transition_node_get_xfade_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			return (float) caller->transition_node_get_xfade_time(id);
		}
	}
}

int _wasgo_AnimationTreePlayer_wrapper_transition_node_has_input_auto_advance(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			int input_idx = (int) p_input_idx;
			return (int) caller->transition_node_has_input_auto_advance(id, input_idx);
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_transition_node_set_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_input_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			int input_idx = (int) p_input_idx;
			caller->transition_node_set_current(id, input_idx);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_transition_node_set_input_auto_advance(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_input_idx, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			int input_idx = (int) p_input_idx;
			bool enable = (bool) p_enable;
			caller->transition_node_set_input_auto_advance(id, input_idx, enable);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_transition_node_set_input_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, int p_count){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			int count = (int) p_count;
			caller->transition_node_set_input_count(id, count);
			return;
		}
	}
}

void _wasgo_AnimationTreePlayer_wrapper_transition_node_set_xfade_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_id, float p_time_sec){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AnimationTreePlayer *caller = (AnimationTreePlayer *) state->lookup_object(caller_id);
		if(caller){
			String id = state->lookup_variant(p_id);
			float time_sec = (float) p_time_sec;
			caller->transition_node_set_xfade_time(id, time_sec);
			return;
		}
	}
}

float _wasgo_Area_wrapper_get_angular_damp(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_angular_damp();
		}
	}
}

WasGoState::WasGoID _wasgo_Area_wrapper_get_audio_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_audio_bus());
		}
	}
}

int _wasgo_Area_wrapper_get_collision_layer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_collision_layer();
		}
	}
}

int _wasgo_Area_wrapper_get_collision_layer_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			return (int) caller->get_collision_layer_bit(bit);
		}
	}
}

int _wasgo_Area_wrapper_get_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_collision_mask();
		}
	}
}

int _wasgo_Area_wrapper_get_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			return (int) caller->get_collision_mask_bit(bit);
		}
	}
}

float _wasgo_Area_wrapper_get_gravity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_gravity();
		}
	}
}

float _wasgo_Area_wrapper_get_gravity_distance_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_gravity_distance_scale();
		}
	}
}

WasGoState::WasGoID _wasgo_Area_wrapper_get_gravity_vector(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_gravity_vector());
		}
	}
}

float _wasgo_Area_wrapper_get_linear_damp(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_linear_damp();
		}
	}
}

WasGoState::WasGoID _wasgo_Area_wrapper_get_overlapping_areas(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_overlapping_areas());
		}
	}
}

WasGoState::WasGoID _wasgo_Area_wrapper_get_overlapping_bodies(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_overlapping_bodies());
		}
	}
}

float _wasgo_Area_wrapper_get_priority(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_priority();
		}
	}
}

float _wasgo_Area_wrapper_get_reverb_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_reverb_amount();
		}
	}
}

WasGoState::WasGoID _wasgo_Area_wrapper_get_reverb_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_reverb_bus());
		}
	}
}

float _wasgo_Area_wrapper_get_reverb_uniformity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_reverb_uniformity();
		}
	}
}

int _wasgo_Area_wrapper_get_space_override_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_space_override_mode();
		}
	}
}

int _wasgo_Area_wrapper_is_gravity_a_point(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_gravity_a_point();
		}
	}
}

int _wasgo_Area_wrapper_is_monitorable(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_monitorable();
		}
	}
}

int _wasgo_Area_wrapper_is_monitoring(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_monitoring();
		}
	}
}

int _wasgo_Area_wrapper_is_overriding_audio_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_overriding_audio_bus();
		}
	}
}

int _wasgo_Area_wrapper_is_using_reverb_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_using_reverb_bus();
		}
	}
}

int _wasgo_Area_wrapper_overlaps_area(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_area){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			Node *area = (Node *) state->lookup_object(p_area);
			return (int) caller->overlaps_area(area);
		}
	}
}

int _wasgo_Area_wrapper_overlaps_body(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_body){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			Node *body = (Node *) state->lookup_object(p_body);
			return (int) caller->overlaps_body(body);
		}
	}
}

void _wasgo_Area_wrapper_set_angular_damp(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_angular_damp){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			float angular_damp = (float) p_angular_damp;
			caller->set_angular_damp(angular_damp);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_audio_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			caller->set_audio_bus(name);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_audio_bus_override(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_audio_bus_override(enable);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_collision_layer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_collision_layer){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			int collision_layer = (int) p_collision_layer;
			caller->set_collision_layer(collision_layer);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_collision_layer_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit, bool p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			bool value = (bool) p_value;
			caller->set_collision_layer_bit(bit, value);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_collision_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			int collision_mask = (int) p_collision_mask;
			caller->set_collision_mask(collision_mask);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit, bool p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			bool value = (bool) p_value;
			caller->set_collision_mask_bit(bit, value);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_gravity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_gravity){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			float gravity = (float) p_gravity;
			caller->set_gravity(gravity);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_gravity_distance_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_distance_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			float distance_scale = (float) p_distance_scale;
			caller->set_gravity_distance_scale(distance_scale);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_gravity_is_point(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_gravity_is_point(enable);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_gravity_vector(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_vector){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			Vector3 vector = state->lookup_variant(p_vector);
			caller->set_gravity_vector(vector);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_linear_damp(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_linear_damp){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			float linear_damp = (float) p_linear_damp;
			caller->set_linear_damp(linear_damp);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_monitorable(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_monitorable(enable);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_monitoring(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_monitoring(enable);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_priority(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_priority){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			float priority = (float) p_priority;
			caller->set_priority(priority);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_reverb_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_amount){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			float amount = (float) p_amount;
			caller->set_reverb_amount(amount);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_reverb_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			caller->set_reverb_bus(name);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_reverb_uniformity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_amount){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			float amount = (float) p_amount;
			caller->set_reverb_uniformity(amount);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_space_override_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			int enable = (int) p_enable;
			caller->set_space_override_mode(enable);
			return;
		}
	}
}

void _wasgo_Area_wrapper_set_use_reverb_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Area *caller = (Area *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_use_reverb_bus(enable);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer_wrapper_get_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_bus());
		}
	}
}

int _wasgo_AudioStreamPlayer_wrapper_get_mix_target(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_mix_target();
		}
	}
}

float _wasgo_AudioStreamPlayer_wrapper_get_pitch_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_pitch_scale();
		}
	}
}

float _wasgo_AudioStreamPlayer_wrapper_get_playback_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_playback_position();
		}
	}
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer_wrapper_get_stream(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_stream());
		}
	}
}

int _wasgo_AudioStreamPlayer_wrapper_get_stream_paused(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_stream_paused();
		}
	}
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer_wrapper_get_stream_playback(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_stream_playback());
		}
	}
}

float _wasgo_AudioStreamPlayer_wrapper_get_volume_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_volume_db();
		}
	}
}

int _wasgo_AudioStreamPlayer_wrapper_is_autoplay_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_autoplay_enabled();
		}
	}
}

int _wasgo_AudioStreamPlayer_wrapper_is_playing(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_playing();
		}
	}
}

void _wasgo_AudioStreamPlayer_wrapper_play(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_from_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			float from_position = (float) p_from_position;
			caller->play(from_position);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer_wrapper_seek(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_to_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			float to_position = (float) p_to_position;
			caller->seek(to_position);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer_wrapper_set_autoplay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_autoplay(enable);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer_wrapper_set_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_bus){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			String bus = state->lookup_variant(p_bus);
			caller->set_bus(bus);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer_wrapper_set_mix_target(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mix_target){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			int mix_target = (int) p_mix_target;
			caller->set_mix_target(mix_target);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer_wrapper_set_pitch_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_pitch_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			float pitch_scale = (float) p_pitch_scale;
			caller->set_pitch_scale(pitch_scale);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer_wrapper_set_stream(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_stream){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			Ref<AudioStream> stream = (state->lookup_object(p_stream));
			caller->set_stream(stream);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer_wrapper_set_stream_paused(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_pause){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			bool pause = (bool) p_pause;
			caller->set_stream_paused(pause);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer_wrapper_set_volume_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_volume_db){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			float volume_db = (float) p_volume_db;
			caller->set_volume_db(volume_db);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer_wrapper_stop(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer *caller = (AudioStreamPlayer *) state->lookup_object(caller_id);
		if(caller){
			caller->stop();
			return;
		}
	}
}

int _wasgo_AudioStreamPlayer3D_wrapper_get_area_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_area_mask();
		}
	}
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_attenuation_filter_cutoff_hz(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_attenuation_filter_cutoff_hz();
		}
	}
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_attenuation_filter_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_attenuation_filter_db();
		}
	}
}

int _wasgo_AudioStreamPlayer3D_wrapper_get_attenuation_model(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_attenuation_model();
		}
	}
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer3D_wrapper_get_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_bus());
		}
	}
}

int _wasgo_AudioStreamPlayer3D_wrapper_get_doppler_tracking(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_doppler_tracking();
		}
	}
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_emission_angle(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_emission_angle();
		}
	}
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_emission_angle_filter_attenuation_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_emission_angle_filter_attenuation_db();
		}
	}
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_max_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_max_db();
		}
	}
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_max_distance(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_max_distance();
		}
	}
}

int _wasgo_AudioStreamPlayer3D_wrapper_get_out_of_range_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_out_of_range_mode();
		}
	}
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_pitch_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_pitch_scale();
		}
	}
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_playback_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_playback_position();
		}
	}
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer3D_wrapper_get_stream(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_stream());
		}
	}
}

int _wasgo_AudioStreamPlayer3D_wrapper_get_stream_paused(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_stream_paused();
		}
	}
}

WasGoState::WasGoID _wasgo_AudioStreamPlayer3D_wrapper_get_stream_playback(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_stream_playback());
		}
	}
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_unit_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_unit_db();
		}
	}
}

float _wasgo_AudioStreamPlayer3D_wrapper_get_unit_size(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_unit_size();
		}
	}
}

int _wasgo_AudioStreamPlayer3D_wrapper_is_autoplay_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_autoplay_enabled();
		}
	}
}

int _wasgo_AudioStreamPlayer3D_wrapper_is_emission_angle_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_emission_angle_enabled();
		}
	}
}

int _wasgo_AudioStreamPlayer3D_wrapper_is_playing(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_playing();
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_play(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_from_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float from_position = (float) p_from_position;
			caller->play(from_position);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_seek(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_to_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float to_position = (float) p_to_position;
			caller->seek(to_position);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_area_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			int mask = (int) p_mask;
			caller->set_area_mask(mask);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_attenuation_filter_cutoff_hz(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_degrees){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float degrees = (float) p_degrees;
			caller->set_attenuation_filter_cutoff_hz(degrees);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_attenuation_filter_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_db){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float db = (float) p_db;
			caller->set_attenuation_filter_db(db);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_attenuation_model(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_model){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			int model = (int) p_model;
			caller->set_attenuation_model(model);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_autoplay(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_autoplay(enable);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_bus(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_bus){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			String bus = state->lookup_variant(p_bus);
			caller->set_bus(bus);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_doppler_tracking(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_doppler_tracking(mode);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_emission_angle(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_degrees){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float degrees = (float) p_degrees;
			caller->set_emission_angle(degrees);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_emission_angle_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			caller->set_emission_angle_enabled(enabled);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_emission_angle_filter_attenuation_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_db){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float db = (float) p_db;
			caller->set_emission_angle_filter_attenuation_db(db);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_max_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_max_db){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float max_db = (float) p_max_db;
			caller->set_max_db(max_db);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_max_distance(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_metres){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float metres = (float) p_metres;
			caller->set_max_distance(metres);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_out_of_range_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_out_of_range_mode(mode);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_pitch_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_pitch_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float pitch_scale = (float) p_pitch_scale;
			caller->set_pitch_scale(pitch_scale);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_stream(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_stream){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			Ref<AudioStream> stream = (state->lookup_object(p_stream));
			caller->set_stream(stream);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_stream_paused(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_pause){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			bool pause = (bool) p_pause;
			caller->set_stream_paused(pause);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_unit_db(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_unit_db){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float unit_db = (float) p_unit_db;
			caller->set_unit_db(unit_db);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_set_unit_size(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_unit_size){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			float unit_size = (float) p_unit_size;
			caller->set_unit_size(unit_size);
			return;
		}
	}
}

void _wasgo_AudioStreamPlayer3D_wrapper_stop(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		AudioStreamPlayer3D *caller = (AudioStreamPlayer3D *) state->lookup_object(caller_id);
		if(caller){
			caller->stop();
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_BoneAttachment_wrapper_get_bone_name(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		BoneAttachment *caller = (BoneAttachment *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_bone_name());
		}
	}
}

void _wasgo_BoneAttachment_wrapper_set_bone_name(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_bone_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		BoneAttachment *caller = (BoneAttachment *) state->lookup_object(caller_id);
		if(caller){
			String bone_name = state->lookup_variant(p_bone_name);
			caller->set_bone_name(bone_name);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_clear_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable_next){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			bool enable_next = (bool) p_enable_next;
			caller->clear_current(enable_next);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_camera_rid(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_camera_rid());
		}
	}
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_camera_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_camera_transform());
		}
	}
}

int _wasgo_Camera_wrapper_get_cull_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_cull_mask();
		}
	}
}

int _wasgo_Camera_wrapper_get_cull_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_layer){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			int layer = (int) p_layer;
			return (int) caller->get_cull_mask_bit(layer);
		}
	}
}

int _wasgo_Camera_wrapper_get_doppler_tracking(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_doppler_tracking();
		}
	}
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_environment(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_environment());
		}
	}
}

float _wasgo_Camera_wrapper_get_fov(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_fov();
		}
	}
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_frustum(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_frustum());
		}
	}
}

WasGoState::WasGoID _wasgo_Camera_wrapper_get_frustum_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_frustum_offset());
		}
	}
}

float _wasgo_Camera_wrapper_get_h_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_h_offset();
		}
	}
}

int _wasgo_Camera_wrapper_get_keep_aspect_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_keep_aspect_mode();
		}
	}
}

int _wasgo_Camera_wrapper_get_projection(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_projection();
		}
	}
}

float _wasgo_Camera_wrapper_get_size(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_size();
		}
	}
}

float _wasgo_Camera_wrapper_get_v_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_v_offset();
		}
	}
}

float _wasgo_Camera_wrapper_get_zfar(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_zfar();
		}
	}
}

float _wasgo_Camera_wrapper_get_znear(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_znear();
		}
	}
}

int _wasgo_Camera_wrapper_is_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_current();
		}
	}
}

int _wasgo_Camera_wrapper_is_position_behind(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_world_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector3 world_point = state->lookup_variant(p_world_point);
			return (int) caller->is_position_behind(world_point);
		}
	}
}

void _wasgo_Camera_wrapper_make_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			caller->make_current();
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_Camera_wrapper_project_local_ray_normal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_screen_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector2 screen_point = state->lookup_variant(p_screen_point);
			return state->create_variant(caller->project_local_ray_normal(screen_point));
		}
	}
}

WasGoState::WasGoID _wasgo_Camera_wrapper_project_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_screen_point, float p_z_depth){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector2 screen_point = state->lookup_variant(p_screen_point);
			float z_depth = (float) p_z_depth;
			return state->create_variant(caller->project_position(screen_point, z_depth));
		}
	}
}

WasGoState::WasGoID _wasgo_Camera_wrapper_project_ray_normal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_screen_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector2 screen_point = state->lookup_variant(p_screen_point);
			return state->create_variant(caller->project_ray_normal(screen_point));
		}
	}
}

WasGoState::WasGoID _wasgo_Camera_wrapper_project_ray_origin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_screen_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector2 screen_point = state->lookup_variant(p_screen_point);
			return state->create_variant(caller->project_ray_origin(screen_point));
		}
	}
}

void _wasgo_Camera_wrapper_set_cull_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			int mask = (int) p_mask;
			caller->set_cull_mask(mask);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_cull_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_layer, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			int layer = (int) p_layer;
			bool enable = (bool) p_enable;
			caller->set_cull_mask_bit(layer, enable);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_current(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			bool arg0 = (bool) p_arg0;
			caller->set_current(arg0);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_doppler_tracking(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_doppler_tracking(mode);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_environment(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_env){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Ref<Environment> env = (state->lookup_object(p_env));
			caller->set_environment(env);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_fov(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float arg0 = (float) p_arg0;
			caller->set_fov(arg0);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_frustum(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_size, WasGoState::WasGoID p_offset, float p_z_near, float p_z_far){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float size = (float) p_size;
			Vector2 offset = state->lookup_variant(p_offset);
			float z_near = (float) p_z_near;
			float z_far = (float) p_z_far;
			caller->set_frustum(size, offset, z_near, z_far);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_frustum_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector2 arg0 = state->lookup_variant(p_arg0);
			caller->set_frustum_offset(arg0);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_h_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_ofs){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float ofs = (float) p_ofs;
			caller->set_h_offset(ofs);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_keep_aspect_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_keep_aspect_mode(mode);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_orthogonal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_size, float p_z_near, float p_z_far){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float size = (float) p_size;
			float z_near = (float) p_z_near;
			float z_far = (float) p_z_far;
			caller->set_orthogonal(size, z_near, z_far);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_perspective(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_fov, float p_z_near, float p_z_far){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float fov = (float) p_fov;
			float z_near = (float) p_z_near;
			float z_far = (float) p_z_far;
			caller->set_perspective(fov, z_near, z_far);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_projection(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			int arg0 = (int) p_arg0;
			caller->set_projection(arg0);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_size(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float arg0 = (float) p_arg0;
			caller->set_size(arg0);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_v_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_ofs){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float ofs = (float) p_ofs;
			caller->set_v_offset(ofs);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_zfar(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float arg0 = (float) p_arg0;
			caller->set_zfar(arg0);
			return;
		}
	}
}

void _wasgo_Camera_wrapper_set_znear(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_arg0){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			float arg0 = (float) p_arg0;
			caller->set_znear(arg0);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_Camera_wrapper_unproject_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_world_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Camera *caller = (Camera *) state->lookup_object(caller_id);
		if(caller){
			Vector3 world_point = state->lookup_variant(p_world_point);
			return state->create_variant(caller->unproject_position(world_point));
		}
	}
}

int _wasgo_CollisionObject_wrapper_create_shape_owner(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_owner){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			Object *owner = (Object *) state->lookup_object(p_owner);
			return (int) caller->create_shape_owner(owner);
		}
	}
}

int _wasgo_CollisionObject_wrapper_get_capture_input_on_drag(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_capture_input_on_drag();
		}
	}
}

WasGoState::WasGoID _wasgo_CollisionObject_wrapper_get_rid(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_rid());
		}
	}
}

WasGoState::WasGoID _wasgo_CollisionObject_wrapper_get_shape_owners(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_shape_owners());
		}
	}
}

int _wasgo_CollisionObject_wrapper_is_ray_pickable(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_ray_pickable();
		}
	}
}

int _wasgo_CollisionObject_wrapper_is_shape_owner_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			return (int) caller->is_shape_owner_disabled(owner_id);
		}
	}
}

void _wasgo_CollisionObject_wrapper_remove_shape_owner(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			caller->remove_shape_owner(owner_id);
			return;
		}
	}
}

void _wasgo_CollisionObject_wrapper_set_capture_input_on_drag(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_capture_input_on_drag(enable);
			return;
		}
	}
}

void _wasgo_CollisionObject_wrapper_set_ray_pickable(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_ray_pickable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			bool ray_pickable = (bool) p_ray_pickable;
			caller->set_ray_pickable(ray_pickable);
			return;
		}
	}
}

int _wasgo_CollisionObject_wrapper_shape_find_owner(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_shape_index){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int shape_index = (int) p_shape_index;
			return (int) caller->shape_find_owner(shape_index);
		}
	}
}

void _wasgo_CollisionObject_wrapper_shape_owner_add_shape(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id, WasGoState::WasGoID p_shape){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			Ref<Shape> shape = (state->lookup_object(p_shape));
			caller->shape_owner_add_shape(owner_id, shape);
			return;
		}
	}
}

void _wasgo_CollisionObject_wrapper_shape_owner_clear_shapes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			caller->shape_owner_clear_shapes(owner_id);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_CollisionObject_wrapper_shape_owner_get_owner(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			return state->create_object(caller->shape_owner_get_owner(owner_id));
		}
	}
}

WasGoState::WasGoID _wasgo_CollisionObject_wrapper_shape_owner_get_shape(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id, int p_shape_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			int shape_id = (int) p_shape_id;
			return state->reference_object(caller->shape_owner_get_shape(owner_id, shape_id));
		}
	}
}

int _wasgo_CollisionObject_wrapper_shape_owner_get_shape_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			return (int) caller->shape_owner_get_shape_count(owner_id);
		}
	}
}

int _wasgo_CollisionObject_wrapper_shape_owner_get_shape_index(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id, int p_shape_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			int shape_id = (int) p_shape_id;
			return (int) caller->shape_owner_get_shape_index(owner_id, shape_id);
		}
	}
}

WasGoState::WasGoID _wasgo_CollisionObject_wrapper_shape_owner_get_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			return state->create_variant(caller->shape_owner_get_transform(owner_id));
		}
	}
}

void _wasgo_CollisionObject_wrapper_shape_owner_remove_shape(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id, int p_shape_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			int shape_id = (int) p_shape_id;
			caller->shape_owner_remove_shape(owner_id, shape_id);
			return;
		}
	}
}

void _wasgo_CollisionObject_wrapper_shape_owner_set_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id, bool p_disabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			bool disabled = (bool) p_disabled;
			caller->shape_owner_set_disabled(owner_id, disabled);
			return;
		}
	}
}

void _wasgo_CollisionObject_wrapper_shape_owner_set_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_owner_id, WasGoState::WasGoID p_transform){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionObject *caller = (CollisionObject *) state->lookup_object(caller_id);
		if(caller){
			int owner_id = (int) p_owner_id;
			Transform transform = state->lookup_variant(p_transform);
			caller->shape_owner_set_transform(owner_id, transform);
			return;
		}
	}
}

float _wasgo_CollisionPolygon_wrapper_get_depth(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_depth();
		}
	}
}

WasGoState::WasGoID _wasgo_CollisionPolygon_wrapper_get_polygon(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_polygon());
		}
	}
}

int _wasgo_CollisionPolygon_wrapper_is_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_disabled();
		}
	}
}

void _wasgo_CollisionPolygon_wrapper_set_depth(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_depth){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			float depth = (float) p_depth;
			caller->set_depth(depth);
			return;
		}
	}
}

void _wasgo_CollisionPolygon_wrapper_set_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_disabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			bool disabled = (bool) p_disabled;
			caller->set_disabled(disabled);
			return;
		}
	}
}

void _wasgo_CollisionPolygon_wrapper_set_polygon(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_polygon){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionPolygon *caller = (CollisionPolygon *) state->lookup_object(caller_id);
		if(caller){
			PoolVector2Array polygon = state->lookup_variant(p_polygon);
			caller->set_polygon(polygon);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_CollisionShape_wrapper_get_shape(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionShape *caller = (CollisionShape *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_shape());
		}
	}
}

int _wasgo_CollisionShape_wrapper_is_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionShape *caller = (CollisionShape *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_disabled();
		}
	}
}

void _wasgo_CollisionShape_wrapper_resource_changed(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_resource){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionShape *caller = (CollisionShape *) state->lookup_object(caller_id);
		if(caller){
			Ref<Resource> resource = (state->lookup_object(p_resource));
			caller->resource_changed(resource);
			return;
		}
	}
}

void _wasgo_CollisionShape_wrapper_set_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionShape *caller = (CollisionShape *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_disabled(enable);
			return;
		}
	}
}

void _wasgo_CollisionShape_wrapper_set_shape(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_shape){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		CollisionShape *caller = (CollisionShape *) state->lookup_object(caller_id);
		if(caller){
			Ref<Shape> shape = (state->lookup_object(p_shape));
			caller->set_shape(shape);
			return;
		}
	}
}

int _wasgo_DirectionalLight_wrapper_get_shadow_depth_range(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_shadow_depth_range();
		}
	}
}

int _wasgo_DirectionalLight_wrapper_get_shadow_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_shadow_mode();
		}
	}
}

int _wasgo_DirectionalLight_wrapper_is_blend_splits_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_blend_splits_enabled();
		}
	}
}

void _wasgo_DirectionalLight_wrapper_set_blend_splits(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			caller->set_blend_splits(enabled);
			return;
		}
	}
}

void _wasgo_DirectionalLight_wrapper_set_shadow_depth_range(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_shadow_depth_range(mode);
			return;
		}
	}
}

void _wasgo_DirectionalLight_wrapper_set_shadow_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		DirectionalLight *caller = (DirectionalLight *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_shadow_mode(mode);
			return;
		}
	}
}

int _wasgo_Joint_wrapper_get_exclude_nodes_from_collision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_exclude_nodes_from_collision();
		}
	}
}

WasGoState::WasGoID _wasgo_Joint_wrapper_get_node_a(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_node_a());
		}
	}
}

WasGoState::WasGoID _wasgo_Joint_wrapper_get_node_b(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_node_b());
		}
	}
}

int _wasgo_Joint_wrapper_get_solver_priority(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_solver_priority();
		}
	}
}

void _wasgo_Joint_wrapper_set_exclude_nodes_from_collision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_exclude_nodes_from_collision(enable);
			return;
		}
	}
}

void _wasgo_Joint_wrapper_set_node_a(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			NodePath node = state->lookup_variant(p_node);
			caller->set_node_a(node);
			return;
		}
	}
}

void _wasgo_Joint_wrapper_set_node_b(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			NodePath node = state->lookup_variant(p_node);
			caller->set_node_b(node);
			return;
		}
	}
}

void _wasgo_Joint_wrapper_set_solver_priority(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_priority){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Joint *caller = (Joint *) state->lookup_object(caller_id);
		if(caller){
			int priority = (int) p_priority;
			caller->set_solver_priority(priority);
			return;
		}
	}
}

int _wasgo_KinematicBody_wrapper_get_axis_lock(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_axis){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			int axis = (int) p_axis;
			return (int) caller->get_axis_lock(axis);
		}
	}
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_get_floor_normal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_floor_normal());
		}
	}
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_get_floor_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_floor_velocity());
		}
	}
}

float _wasgo_KinematicBody_wrapper_get_safe_margin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_safe_margin();
		}
	}
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_get_slide_collision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_slide_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			int slide_idx = (int) p_slide_idx;
			return state->reference_object(caller->get_slide_collision(slide_idx));
		}
	}
}

int _wasgo_KinematicBody_wrapper_get_slide_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_slide_count();
		}
	}
}

int _wasgo_KinematicBody_wrapper_is_on_ceiling(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_on_ceiling();
		}
	}
}

int _wasgo_KinematicBody_wrapper_is_on_floor(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_on_floor();
		}
	}
}

int _wasgo_KinematicBody_wrapper_is_on_wall(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_on_wall();
		}
	}
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_move_and_collide(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_rel_vec, bool p_infinite_inertia, bool p_exclude_raycast_shapes, bool p_test_only){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 rel_vec = state->lookup_variant(p_rel_vec);
			bool infinite_inertia = (bool) p_infinite_inertia;
			bool exclude_raycast_shapes = (bool) p_exclude_raycast_shapes;
			bool test_only = (bool) p_test_only;
			return state->reference_object(caller->move_and_collide(rel_vec, infinite_inertia, exclude_raycast_shapes, test_only));
		}
	}
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_move_and_slide(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_linear_velocity, WasGoState::WasGoID p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 linear_velocity = state->lookup_variant(p_linear_velocity);
			Vector3 up_direction = state->lookup_variant(p_up_direction);
			bool stop_on_slope = (bool) p_stop_on_slope;
			int max_slides = (int) p_max_slides;
			float floor_max_angle = (float) p_floor_max_angle;
			bool infinite_inertia = (bool) p_infinite_inertia;
			return state->create_variant(caller->move_and_slide(linear_velocity, up_direction, stop_on_slope, max_slides, floor_max_angle, infinite_inertia));
		}
	}
}

WasGoState::WasGoID _wasgo_KinematicBody_wrapper_move_and_slide_with_snap(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_linear_velocity, WasGoState::WasGoID p_snap, WasGoState::WasGoID p_up_direction, bool p_stop_on_slope, int p_max_slides, float p_floor_max_angle, bool p_infinite_inertia){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 linear_velocity = state->lookup_variant(p_linear_velocity);
			Vector3 snap = state->lookup_variant(p_snap);
			Vector3 up_direction = state->lookup_variant(p_up_direction);
			bool stop_on_slope = (bool) p_stop_on_slope;
			int max_slides = (int) p_max_slides;
			float floor_max_angle = (float) p_floor_max_angle;
			bool infinite_inertia = (bool) p_infinite_inertia;
			return state->create_variant(caller->move_and_slide_with_snap(linear_velocity, snap, up_direction, stop_on_slope, max_slides, floor_max_angle, infinite_inertia));
		}
	}
}

void _wasgo_KinematicBody_wrapper_set_axis_lock(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_axis, bool p_lock){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			int axis = (int) p_axis;
			bool lock = (bool) p_lock;
			caller->set_axis_lock(axis, lock);
			return;
		}
	}
}

void _wasgo_KinematicBody_wrapper_set_safe_margin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_pixels){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			float pixels = (float) p_pixels;
			caller->set_safe_margin(pixels);
			return;
		}
	}
}

int _wasgo_KinematicBody_wrapper_test_move(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_from, WasGoState::WasGoID p_rel_vec, bool p_infinite_inertia){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		KinematicBody *caller = (KinematicBody *) state->lookup_object(caller_id);
		if(caller){
			Transform from = state->lookup_variant(p_from);
			Vector3 rel_vec = state->lookup_variant(p_rel_vec);
			bool infinite_inertia = (bool) p_infinite_inertia;
			return (int) caller->test_move(from, rel_vec, infinite_inertia);
		}
	}
}

int _wasgo_Light_wrapper_get_bake_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_bake_mode();
		}
	}
}

WasGoState::WasGoID _wasgo_Light_wrapper_get_color(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_color());
		}
	}
}

int _wasgo_Light_wrapper_get_cull_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_cull_mask();
		}
	}
}

float _wasgo_Light_wrapper_get_param(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_param){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			int param = (int) p_param;
			return (float) caller->get_param(param);
		}
	}
}

WasGoState::WasGoID _wasgo_Light_wrapper_get_shadow_color(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_shadow_color());
		}
	}
}

int _wasgo_Light_wrapper_get_shadow_reverse_cull_face(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_shadow_reverse_cull_face();
		}
	}
}

int _wasgo_Light_wrapper_has_shadow(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->has_shadow();
		}
	}
}

int _wasgo_Light_wrapper_is_editor_only(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_editor_only();
		}
	}
}

int _wasgo_Light_wrapper_is_negative(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_negative();
		}
	}
}

void _wasgo_Light_wrapper_set_bake_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bake_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			int bake_mode = (int) p_bake_mode;
			caller->set_bake_mode(bake_mode);
			return;
		}
	}
}

void _wasgo_Light_wrapper_set_color(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_color){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Color color = state->lookup_variant(p_color);
			caller->set_color(color);
			return;
		}
	}
}

void _wasgo_Light_wrapper_set_cull_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_cull_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			int cull_mask = (int) p_cull_mask;
			caller->set_cull_mask(cull_mask);
			return;
		}
	}
}

void _wasgo_Light_wrapper_set_editor_only(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_editor_only){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			bool editor_only = (bool) p_editor_only;
			caller->set_editor_only(editor_only);
			return;
		}
	}
}

void _wasgo_Light_wrapper_set_negative(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			caller->set_negative(enabled);
			return;
		}
	}
}

void _wasgo_Light_wrapper_set_param(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_param, float p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			int param = (int) p_param;
			float value = (float) p_value;
			caller->set_param(param, value);
			return;
		}
	}
}

void _wasgo_Light_wrapper_set_shadow(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			caller->set_shadow(enabled);
			return;
		}
	}
}

void _wasgo_Light_wrapper_set_shadow_color(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_shadow_color){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			Color shadow_color = state->lookup_variant(p_shadow_color);
			caller->set_shadow_color(shadow_color);
			return;
		}
	}
}

void _wasgo_Light_wrapper_set_shadow_reverse_cull_face(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Light *caller = (Light *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_shadow_reverse_cull_face(enable);
			return;
		}
	}
}

void _wasgo_MeshInstance_wrapper_create_convex_collision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			caller->create_convex_collision();
			return;
		}
	}
}

void _wasgo_MeshInstance_wrapper_create_trimesh_collision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			caller->create_trimesh_collision();
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_MeshInstance_wrapper_get_mesh(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_mesh());
		}
	}
}

WasGoState::WasGoID _wasgo_MeshInstance_wrapper_get_skeleton_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_skeleton_path());
		}
	}
}

WasGoState::WasGoID _wasgo_MeshInstance_wrapper_get_skin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_skin());
		}
	}
}

WasGoState::WasGoID _wasgo_MeshInstance_wrapper_get_surface_material(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_surface){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			int surface = (int) p_surface;
			return state->reference_object(caller->get_surface_material(surface));
		}
	}
}

int _wasgo_MeshInstance_wrapper_get_surface_material_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_surface_material_count();
		}
	}
}

void _wasgo_MeshInstance_wrapper_set_mesh(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mesh){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Ref<Mesh> mesh = (state->lookup_object(p_mesh));
			caller->set_mesh(mesh);
			return;
		}
	}
}

void _wasgo_MeshInstance_wrapper_set_skeleton_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_skeleton_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			NodePath skeleton_path = state->lookup_variant(p_skeleton_path);
			caller->set_skeleton_path(skeleton_path);
			return;
		}
	}
}

void _wasgo_MeshInstance_wrapper_set_skin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_skin){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			Ref<Skin> skin = (state->lookup_object(p_skin));
			caller->set_skin(skin);
			return;
		}
	}
}

void _wasgo_MeshInstance_wrapper_set_surface_material(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_surface, WasGoState::WasGoID p_material){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		MeshInstance *caller = (MeshInstance *) state->lookup_object(caller_id);
		if(caller){
			int surface = (int) p_surface;
			Ref<Material> material = (state->lookup_object(p_material));
			caller->set_surface_material(surface, material);
			return;
		}
	}
}

void _wasgo_Node_wrapper_add_child(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node, bool p_legible_unique_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			bool legible_unique_name = (bool) p_legible_unique_name;
			caller->add_child(node, legible_unique_name);
			return;
		}
	}
}

void _wasgo_Node_wrapper_add_child_below_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node, WasGoState::WasGoID p_child_node, bool p_legible_unique_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			Node *child_node = (Node *) state->lookup_object(p_child_node);
			bool legible_unique_name = (bool) p_legible_unique_name;
			caller->add_child_below_node(node, child_node, legible_unique_name);
			return;
		}
	}
}

void _wasgo_Node_wrapper_add_to_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_group, bool p_persistent){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String group = state->lookup_variant(p_group);
			bool persistent = (bool) p_persistent;
			caller->add_to_group(group, persistent);
			return;
		}
	}
}

int _wasgo_Node_wrapper_can_process(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->can_process();
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_duplicate(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_flags){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int flags = (int) p_flags;
			return state->create_object(caller->duplicate(flags));
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_find_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mask, bool p_recursive, bool p_owned){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String mask = state->lookup_variant(p_mask);
			bool recursive = (bool) p_recursive;
			bool owned = (bool) p_owned;
			return state->create_object(caller->find_node(mask, recursive, owned));
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_find_parent(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String mask = state->lookup_variant(p_mask);
			return state->create_object(caller->find_parent(mask));
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_child(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int idx = (int) p_idx;
			return state->create_object(caller->get_child(idx));
		}
	}
}

int _wasgo_Node_wrapper_get_child_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_child_count();
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_children(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_children());
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_custom_multiplayer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_custom_multiplayer());
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_filename(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_filename());
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_groups(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_groups());
		}
	}
}

int _wasgo_Node_wrapper_get_index(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_index();
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_multiplayer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_multiplayer());
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_name(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_name());
		}
	}
}

int _wasgo_Node_wrapper_get_network_master(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_network_master();
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			NodePath path = state->lookup_variant(p_path);
			return state->create_object(caller->get_node(path));
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_node_and_resource(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			NodePath path = state->lookup_variant(p_path);
			return state->create_variant(caller->get_node_and_resource(path));
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_node_or_null(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			NodePath path = state->lookup_variant(p_path);
			return state->create_object(caller->get_node_or_null(path));
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_owner(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->create_object(caller->get_owner());
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_parent(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->create_object(caller->get_parent());
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_path(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_path());
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_path_to(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			return state->create_variant(caller->get_path_to(node));
		}
	}
}

int _wasgo_Node_wrapper_get_pause_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_pause_mode();
		}
	}
}

float _wasgo_Node_wrapper_get_physics_process_delta_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_physics_process_delta_time();
		}
	}
}

int _wasgo_Node_wrapper_get_position_in_parent(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_position_in_parent();
		}
	}
}

float _wasgo_Node_wrapper_get_process_delta_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_process_delta_time();
		}
	}
}

int _wasgo_Node_wrapper_get_process_priority(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_process_priority();
		}
	}
}

int _wasgo_Node_wrapper_get_scene_instance_load_placeholder(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_scene_instance_load_placeholder();
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_tree(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->create_object(caller->get_tree());
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_get_viewport(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return state->create_object(caller->get_viewport());
		}
	}
}

int _wasgo_Node_wrapper_has_node(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			NodePath path = state->lookup_variant(p_path);
			return (int) caller->has_node(path);
		}
	}
}

int _wasgo_Node_wrapper_has_node_and_resource(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_path){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			NodePath path = state->lookup_variant(p_path);
			return (int) caller->has_node_and_resource(path);
		}
	}
}

int _wasgo_Node_wrapper_is_a_parent_of(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			return (int) caller->is_a_parent_of(node);
		}
	}
}

int _wasgo_Node_wrapper_is_displayed_folded(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_displayed_folded();
		}
	}
}

int _wasgo_Node_wrapper_is_greater_than(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			return (int) caller->is_greater_than(node);
		}
	}
}

int _wasgo_Node_wrapper_is_in_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_group){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String group = state->lookup_variant(p_group);
			return (int) caller->is_in_group(group);
		}
	}
}

int _wasgo_Node_wrapper_is_inside_tree(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_inside_tree();
		}
	}
}

int _wasgo_Node_wrapper_is_network_master(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_network_master();
		}
	}
}

int _wasgo_Node_wrapper_is_physics_processing(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_physics_processing();
		}
	}
}

int _wasgo_Node_wrapper_is_physics_processing_internal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_physics_processing_internal();
		}
	}
}

int _wasgo_Node_wrapper_is_processing(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_processing();
		}
	}
}

int _wasgo_Node_wrapper_is_processing_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_processing_input();
		}
	}
}

int _wasgo_Node_wrapper_is_processing_internal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_processing_internal();
		}
	}
}

int _wasgo_Node_wrapper_is_processing_unhandled_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_processing_unhandled_input();
		}
	}
}

int _wasgo_Node_wrapper_is_processing_unhandled_key_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_processing_unhandled_key_input();
		}
	}
}

void _wasgo_Node_wrapper_move_child(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_child_node, int p_to_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *child_node = (Node *) state->lookup_object(p_child_node);
			int to_position = (int) p_to_position;
			caller->move_child(child_node, to_position);
			return;
		}
	}
}

void _wasgo_Node_wrapper_print_stray_nodes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			caller->print_stray_nodes();
			return;
		}
	}
}

void _wasgo_Node_wrapper_print_tree(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			caller->print_tree();
			return;
		}
	}
}

void _wasgo_Node_wrapper_print_tree_pretty(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			caller->print_tree_pretty();
			return;
		}
	}
}

void _wasgo_Node_wrapper_propagate_call(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_method, WasGoState::WasGoID p_args, bool p_parent_first){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String method = state->lookup_variant(p_method);
			Array args = state->lookup_variant(p_args);
			bool parent_first = (bool) p_parent_first;
			caller->propagate_call(method, args, parent_first);
			return;
		}
	}
}

void _wasgo_Node_wrapper_propagate_notification(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_what){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int what = (int) p_what;
			caller->propagate_notification(what);
			return;
		}
	}
}

void _wasgo_Node_wrapper_queue_free(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			caller->queue_free();
			return;
		}
	}
}

void _wasgo_Node_wrapper_raise(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			caller->raise();
			return;
		}
	}
}

void _wasgo_Node_wrapper_remove_and_skip(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			caller->remove_and_skip();
			return;
		}
	}
}

void _wasgo_Node_wrapper_remove_child(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			caller->remove_child(node);
			return;
		}
	}
}

void _wasgo_Node_wrapper_remove_from_group(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_group){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String group = state->lookup_variant(p_group);
			caller->remove_from_group(group);
			return;
		}
	}
}

void _wasgo_Node_wrapper_replace_by(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node, bool p_keep_data){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *node = (Node *) state->lookup_object(p_node);
			bool keep_data = (bool) p_keep_data;
			caller->replace_by(node, keep_data);
			return;
		}
	}
}

void _wasgo_Node_wrapper_request_ready(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			caller->request_ready();
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_rpc(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_method){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String method = state->lookup_variant(p_method);
			return state->create_variant(caller->rpc(method));
		}
	}
}

void _wasgo_Node_wrapper_rpc_config(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_method, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String method = state->lookup_variant(p_method);
			int mode = (int) p_mode;
			caller->rpc_config(method, mode);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_rpc_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_peer_id, WasGoState::WasGoID p_method){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int peer_id = (int) p_peer_id;
			String method = state->lookup_variant(p_method);
			return state->create_variant(caller->rpc_id(peer_id, method));
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_rpc_unreliable(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_method){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String method = state->lookup_variant(p_method);
			return state->create_variant(caller->rpc_unreliable(method));
		}
	}
}

WasGoState::WasGoID _wasgo_Node_wrapper_rpc_unreliable_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_peer_id, WasGoState::WasGoID p_method){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int peer_id = (int) p_peer_id;
			String method = state->lookup_variant(p_method);
			return state->create_variant(caller->rpc_unreliable_id(peer_id, method));
		}
	}
}

void _wasgo_Node_wrapper_rset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_property, WasGoState::WasGoID p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String property = state->lookup_variant(p_property);
			Variant value = state->lookup_variant(p_value);
			caller->rset(property, value);
			return;
		}
	}
}

void _wasgo_Node_wrapper_rset_config(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_property, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String property = state->lookup_variant(p_property);
			int mode = (int) p_mode;
			caller->rset_config(property, mode);
			return;
		}
	}
}

void _wasgo_Node_wrapper_rset_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_peer_id, WasGoState::WasGoID p_property, WasGoState::WasGoID p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int peer_id = (int) p_peer_id;
			String property = state->lookup_variant(p_property);
			Variant value = state->lookup_variant(p_value);
			caller->rset_id(peer_id, property, value);
			return;
		}
	}
}

void _wasgo_Node_wrapper_rset_unreliable(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_property, WasGoState::WasGoID p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String property = state->lookup_variant(p_property);
			Variant value = state->lookup_variant(p_value);
			caller->rset_unreliable(property, value);
			return;
		}
	}
}

void _wasgo_Node_wrapper_rset_unreliable_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_peer_id, WasGoState::WasGoID p_property, WasGoState::WasGoID p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int peer_id = (int) p_peer_id;
			String property = state->lookup_variant(p_property);
			Variant value = state->lookup_variant(p_value);
			caller->rset_unreliable_id(peer_id, property, value);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_custom_multiplayer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_api){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Ref<MultiplayerAPI> api = (state->lookup_object(p_api));
			caller->set_custom_multiplayer(api);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_display_folded(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_fold){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool fold = (bool) p_fold;
			caller->set_display_folded(fold);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_filename(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_filename){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String filename = state->lookup_variant(p_filename);
			caller->set_filename(filename);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_name(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			caller->set_name(name);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_network_master(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_id, bool p_recursive){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int id = (int) p_id;
			bool recursive = (bool) p_recursive;
			caller->set_network_master(id, recursive);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_owner(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_owner){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			Node *owner = (Node *) state->lookup_object(p_owner);
			caller->set_owner(owner);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_pause_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_pause_mode(mode);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_physics_process(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_physics_process(enable);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_physics_process_internal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_physics_process_internal(enable);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_process(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_process(enable);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_process_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_process_input(enable);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_process_internal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_process_internal(enable);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_process_priority(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_priority){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			int priority = (int) p_priority;
			caller->set_process_priority(priority);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_process_unhandled_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_process_unhandled_input(enable);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_process_unhandled_key_input(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_process_unhandled_key_input(enable);
			return;
		}
	}
}

void _wasgo_Node_wrapper_set_scene_instance_load_placeholder(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_load_placeholder){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			bool load_placeholder = (bool) p_load_placeholder;
			caller->set_scene_instance_load_placeholder(load_placeholder);
			return;
		}
	}
}

void _wasgo_Node_wrapper_update_configuration_warning(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Node *caller = (Node *) state->lookup_object(caller_id);
		if(caller){
			caller->update_configuration_warning();
			return;
		}
	}
}

int _wasgo_OmniLight_wrapper_get_shadow_detail(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		OmniLight *caller = (OmniLight *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_shadow_detail();
		}
	}
}

int _wasgo_OmniLight_wrapper_get_shadow_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		OmniLight *caller = (OmniLight *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_shadow_mode();
		}
	}
}

void _wasgo_OmniLight_wrapper_set_shadow_detail(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_detail){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		OmniLight *caller = (OmniLight *) state->lookup_object(caller_id);
		if(caller){
			int detail = (int) p_detail;
			caller->set_shadow_detail(detail);
			return;
		}
	}
}

void _wasgo_OmniLight_wrapper_set_shadow_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		OmniLight *caller = (OmniLight *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_shadow_mode(mode);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_Particles_wrapper_capture_aabb(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->capture_aabb());
		}
	}
}

int _wasgo_Particles_wrapper_get_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_amount();
		}
	}
}

int _wasgo_Particles_wrapper_get_draw_order(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_draw_order();
		}
	}
}

WasGoState::WasGoID _wasgo_Particles_wrapper_get_draw_pass_mesh(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_pass){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int pass = (int) p_pass;
			return state->reference_object(caller->get_draw_pass_mesh(pass));
		}
	}
}

int _wasgo_Particles_wrapper_get_draw_passes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_draw_passes();
		}
	}
}

float _wasgo_Particles_wrapper_get_explosiveness_ratio(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_explosiveness_ratio();
		}
	}
}

int _wasgo_Particles_wrapper_get_fixed_fps(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_fixed_fps();
		}
	}
}

int _wasgo_Particles_wrapper_get_fractional_delta(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_fractional_delta();
		}
	}
}

float _wasgo_Particles_wrapper_get_lifetime(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_lifetime();
		}
	}
}

int _wasgo_Particles_wrapper_get_one_shot(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_one_shot();
		}
	}
}

float _wasgo_Particles_wrapper_get_pre_process_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_pre_process_time();
		}
	}
}

WasGoState::WasGoID _wasgo_Particles_wrapper_get_process_material(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_process_material());
		}
	}
}

float _wasgo_Particles_wrapper_get_randomness_ratio(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_randomness_ratio();
		}
	}
}

float _wasgo_Particles_wrapper_get_speed_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_speed_scale();
		}
	}
}

int _wasgo_Particles_wrapper_get_use_local_coordinates(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_use_local_coordinates();
		}
	}
}

WasGoState::WasGoID _wasgo_Particles_wrapper_get_visibility_aabb(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_visibility_aabb());
		}
	}
}

int _wasgo_Particles_wrapper_is_emitting(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_emitting();
		}
	}
}

void _wasgo_Particles_wrapper_restart(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			caller->restart();
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_amount(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_amount){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int amount = (int) p_amount;
			caller->set_amount(amount);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_draw_order(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_order){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int order = (int) p_order;
			caller->set_draw_order(order);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_draw_pass_mesh(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_pass, WasGoState::WasGoID p_mesh){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int pass = (int) p_pass;
			Ref<Mesh> mesh = (state->lookup_object(p_mesh));
			caller->set_draw_pass_mesh(pass, mesh);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_draw_passes(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_passes){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int passes = (int) p_passes;
			caller->set_draw_passes(passes);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_emitting(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_emitting){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			bool emitting = (bool) p_emitting;
			caller->set_emitting(emitting);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_explosiveness_ratio(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_ratio){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			float ratio = (float) p_ratio;
			caller->set_explosiveness_ratio(ratio);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_fixed_fps(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_fps){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			int fps = (int) p_fps;
			caller->set_fixed_fps(fps);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_fractional_delta(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_fractional_delta(enable);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_lifetime(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_secs){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			float secs = (float) p_secs;
			caller->set_lifetime(secs);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_one_shot(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_one_shot(enable);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_pre_process_time(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_secs){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			float secs = (float) p_secs;
			caller->set_pre_process_time(secs);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_process_material(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_material){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			Ref<Material> material = (state->lookup_object(p_material));
			caller->set_process_material(material);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_randomness_ratio(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_ratio){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			float ratio = (float) p_ratio;
			caller->set_randomness_ratio(ratio);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_speed_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			float scale = (float) p_scale;
			caller->set_speed_scale(scale);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_use_local_coordinates(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_use_local_coordinates(enable);
			return;
		}
	}
}

void _wasgo_Particles_wrapper_set_visibility_aabb(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_aabb){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Particles *caller = (Particles *) state->lookup_object(caller_id);
		if(caller){
			AABB aabb = state->lookup_variant(p_aabb);
			caller->set_visibility_aabb(aabb);
			return;
		}
	}
}

void _wasgo_PhysicalBone_wrapper_apply_central_impulse(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_impulse){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			Vector3 impulse = state->lookup_variant(p_impulse);
			caller->apply_central_impulse(impulse);
			return;
		}
	}
}

void _wasgo_PhysicalBone_wrapper_apply_impulse(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_position, WasGoState::WasGoID p_impulse){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			Vector3 position = state->lookup_variant(p_position);
			Vector3 impulse = state->lookup_variant(p_impulse);
			caller->apply_impulse(position, impulse);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_PhysicalBone_wrapper_get_body_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_body_offset());
		}
	}
}

int _wasgo_PhysicalBone_wrapper_get_bone_id(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_bone_id();
		}
	}
}

float _wasgo_PhysicalBone_wrapper_get_bounce(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_bounce();
		}
	}
}

float _wasgo_PhysicalBone_wrapper_get_friction(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_friction();
		}
	}
}

float _wasgo_PhysicalBone_wrapper_get_gravity_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_gravity_scale();
		}
	}
}

WasGoState::WasGoID _wasgo_PhysicalBone_wrapper_get_joint_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_joint_offset());
		}
	}
}

int _wasgo_PhysicalBone_wrapper_get_joint_type(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_joint_type();
		}
	}
}

float _wasgo_PhysicalBone_wrapper_get_mass(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_mass();
		}
	}
}

int _wasgo_PhysicalBone_wrapper_get_simulate_physics(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_simulate_physics();
		}
	}
}

float _wasgo_PhysicalBone_wrapper_get_weight(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_weight();
		}
	}
}

int _wasgo_PhysicalBone_wrapper_is_simulating_physics(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_simulating_physics();
		}
	}
}

int _wasgo_PhysicalBone_wrapper_is_static_body(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_static_body();
		}
	}
}

void _wasgo_PhysicalBone_wrapper_set_body_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_offset){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			Transform offset = state->lookup_variant(p_offset);
			caller->set_body_offset(offset);
			return;
		}
	}
}

void _wasgo_PhysicalBone_wrapper_set_bounce(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_bounce){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			float bounce = (float) p_bounce;
			caller->set_bounce(bounce);
			return;
		}
	}
}

void _wasgo_PhysicalBone_wrapper_set_friction(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_friction){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			float friction = (float) p_friction;
			caller->set_friction(friction);
			return;
		}
	}
}

void _wasgo_PhysicalBone_wrapper_set_gravity_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_gravity_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			float gravity_scale = (float) p_gravity_scale;
			caller->set_gravity_scale(gravity_scale);
			return;
		}
	}
}

void _wasgo_PhysicalBone_wrapper_set_joint_offset(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_offset){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			Transform offset = state->lookup_variant(p_offset);
			caller->set_joint_offset(offset);
			return;
		}
	}
}

void _wasgo_PhysicalBone_wrapper_set_joint_type(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_joint_type){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			int joint_type = (int) p_joint_type;
			caller->set_joint_type(joint_type);
			return;
		}
	}
}

void _wasgo_PhysicalBone_wrapper_set_mass(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_mass){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			float mass = (float) p_mass;
			caller->set_mass(mass);
			return;
		}
	}
}

void _wasgo_PhysicalBone_wrapper_set_weight(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_weight){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicalBone *caller = (PhysicalBone *) state->lookup_object(caller_id);
		if(caller){
			float weight = (float) p_weight;
			caller->set_weight(weight);
			return;
		}
	}
}

void _wasgo_PhysicsBody_wrapper_add_collision_exception_with(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_body){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			Node *body = (Node *) state->lookup_object(p_body);
			caller->add_collision_exception_with(body);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_PhysicsBody_wrapper_get_collision_exceptions(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_collision_exceptions());
		}
	}
}

int _wasgo_PhysicsBody_wrapper_get_collision_layer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_collision_layer();
		}
	}
}

int _wasgo_PhysicsBody_wrapper_get_collision_layer_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			return (int) caller->get_collision_layer_bit(bit);
		}
	}
}

int _wasgo_PhysicsBody_wrapper_get_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_collision_mask();
		}
	}
}

int _wasgo_PhysicsBody_wrapper_get_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			return (int) caller->get_collision_mask_bit(bit);
		}
	}
}

void _wasgo_PhysicsBody_wrapper_remove_collision_exception_with(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_body){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			Node *body = (Node *) state->lookup_object(p_body);
			caller->remove_collision_exception_with(body);
			return;
		}
	}
}

void _wasgo_PhysicsBody_wrapper_set_collision_layer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_layer){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int layer = (int) p_layer;
			caller->set_collision_layer(layer);
			return;
		}
	}
}

void _wasgo_PhysicsBody_wrapper_set_collision_layer_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit, bool p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			bool value = (bool) p_value;
			caller->set_collision_layer_bit(bit, value);
			return;
		}
	}
}

void _wasgo_PhysicsBody_wrapper_set_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int mask = (int) p_mask;
			caller->set_collision_mask(mask);
			return;
		}
	}
}

void _wasgo_PhysicsBody_wrapper_set_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit, bool p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		PhysicsBody *caller = (PhysicsBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			bool value = (bool) p_value;
			caller->set_collision_mask_bit(bit, value);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_add_exception(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Object *node = (Object *) state->lookup_object(p_node);
			caller->add_exception(node);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_add_exception_rid(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_rid){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			RID rid = state->lookup_variant(p_rid);
			caller->add_exception_rid(rid);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_clear_exceptions(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			caller->clear_exceptions();
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_force_raycast_update(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			caller->force_raycast_update();
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_RayCast_wrapper_get_cast_to(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_cast_to());
		}
	}
}

WasGoState::WasGoID _wasgo_RayCast_wrapper_get_collider(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return state->create_object(caller->get_collider());
		}
	}
}

int _wasgo_RayCast_wrapper_get_collider_shape(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_collider_shape();
		}
	}
}

int _wasgo_RayCast_wrapper_get_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_collision_mask();
		}
	}
}

int _wasgo_RayCast_wrapper_get_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			return (int) caller->get_collision_mask_bit(bit);
		}
	}
}

WasGoState::WasGoID _wasgo_RayCast_wrapper_get_collision_normal(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_collision_normal());
		}
	}
}

WasGoState::WasGoID _wasgo_RayCast_wrapper_get_collision_point(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_collision_point());
		}
	}
}

int _wasgo_RayCast_wrapper_get_exclude_parent_body(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_exclude_parent_body();
		}
	}
}

int _wasgo_RayCast_wrapper_is_collide_with_areas_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_collide_with_areas_enabled();
		}
	}
}

int _wasgo_RayCast_wrapper_is_collide_with_bodies_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_collide_with_bodies_enabled();
		}
	}
}

int _wasgo_RayCast_wrapper_is_colliding(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_colliding();
		}
	}
}

int _wasgo_RayCast_wrapper_is_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_enabled();
		}
	}
}

void _wasgo_RayCast_wrapper_remove_exception(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Object *node = (Object *) state->lookup_object(p_node);
			caller->remove_exception(node);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_remove_exception_rid(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_rid){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			RID rid = state->lookup_variant(p_rid);
			caller->remove_exception_rid(rid);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_set_cast_to(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_local_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			Vector3 local_point = state->lookup_variant(p_local_point);
			caller->set_cast_to(local_point);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_set_collide_with_areas(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_collide_with_areas(enable);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_set_collide_with_bodies(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_collide_with_bodies(enable);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_set_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			int mask = (int) p_mask;
			caller->set_collision_mask(mask);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_set_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit, bool p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			bool value = (bool) p_value;
			caller->set_collision_mask_bit(bit, value);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_set_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			caller->set_enabled(enabled);
			return;
		}
	}
}

void _wasgo_RayCast_wrapper_set_exclude_parent_body(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RayCast *caller = (RayCast *) state->lookup_object(caller_id);
		if(caller){
			bool mask = (bool) p_mask;
			caller->set_exclude_parent_body(mask);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_add_central_force(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_force){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 force = state->lookup_variant(p_force);
			caller->add_central_force(force);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_add_force(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_force, WasGoState::WasGoID p_position){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 force = state->lookup_variant(p_force);
			Vector3 position = state->lookup_variant(p_position);
			caller->add_force(force, position);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_add_torque(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_torque){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 torque = state->lookup_variant(p_torque);
			caller->add_torque(torque);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_apply_central_impulse(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_impulse){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 impulse = state->lookup_variant(p_impulse);
			caller->apply_central_impulse(impulse);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_apply_impulse(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_position, WasGoState::WasGoID p_impulse){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 position = state->lookup_variant(p_position);
			Vector3 impulse = state->lookup_variant(p_impulse);
			caller->apply_impulse(position, impulse);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_apply_torque_impulse(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_impulse){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 impulse = state->lookup_variant(p_impulse);
			caller->apply_torque_impulse(impulse);
			return;
		}
	}
}

float _wasgo_RigidBody_wrapper_get_angular_damp(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_angular_damp();
		}
	}
}

WasGoState::WasGoID _wasgo_RigidBody_wrapper_get_angular_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_angular_velocity());
		}
	}
}

int _wasgo_RigidBody_wrapper_get_axis_lock(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_axis){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			int axis = (int) p_axis;
			return (int) caller->get_axis_lock(axis);
		}
	}
}

float _wasgo_RigidBody_wrapper_get_bounce(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_bounce();
		}
	}
}

WasGoState::WasGoID _wasgo_RigidBody_wrapper_get_colliding_bodies(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_colliding_bodies());
		}
	}
}

float _wasgo_RigidBody_wrapper_get_friction(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_friction();
		}
	}
}

float _wasgo_RigidBody_wrapper_get_gravity_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_gravity_scale();
		}
	}
}

float _wasgo_RigidBody_wrapper_get_linear_damp(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_linear_damp();
		}
	}
}

WasGoState::WasGoID _wasgo_RigidBody_wrapper_get_linear_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_linear_velocity());
		}
	}
}

float _wasgo_RigidBody_wrapper_get_mass(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_mass();
		}
	}
}

int _wasgo_RigidBody_wrapper_get_max_contacts_reported(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_max_contacts_reported();
		}
	}
}

int _wasgo_RigidBody_wrapper_get_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_mode();
		}
	}
}

WasGoState::WasGoID _wasgo_RigidBody_wrapper_get_physics_material_override(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_physics_material_override());
		}
	}
}

float _wasgo_RigidBody_wrapper_get_weight(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_weight();
		}
	}
}

int _wasgo_RigidBody_wrapper_is_able_to_sleep(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_able_to_sleep();
		}
	}
}

int _wasgo_RigidBody_wrapper_is_contact_monitor_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_contact_monitor_enabled();
		}
	}
}

int _wasgo_RigidBody_wrapper_is_sleeping(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_sleeping();
		}
	}
}

int _wasgo_RigidBody_wrapper_is_using_continuous_collision_detection(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_using_continuous_collision_detection();
		}
	}
}

int _wasgo_RigidBody_wrapper_is_using_custom_integrator(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_using_custom_integrator();
		}
	}
}

void _wasgo_RigidBody_wrapper_set_angular_damp(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_angular_damp){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			float angular_damp = (float) p_angular_damp;
			caller->set_angular_damp(angular_damp);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_angular_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_angular_velocity){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 angular_velocity = state->lookup_variant(p_angular_velocity);
			caller->set_angular_velocity(angular_velocity);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_axis_lock(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_axis, bool p_lock){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			int axis = (int) p_axis;
			bool lock = (bool) p_lock;
			caller->set_axis_lock(axis, lock);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_axis_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_axis_velocity){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 axis_velocity = state->lookup_variant(p_axis_velocity);
			caller->set_axis_velocity(axis_velocity);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_bounce(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_bounce){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			float bounce = (float) p_bounce;
			caller->set_bounce(bounce);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_can_sleep(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_able_to_sleep){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			bool able_to_sleep = (bool) p_able_to_sleep;
			caller->set_can_sleep(able_to_sleep);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_contact_monitor(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			caller->set_contact_monitor(enabled);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_friction(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_friction){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			float friction = (float) p_friction;
			caller->set_friction(friction);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_gravity_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_gravity_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			float gravity_scale = (float) p_gravity_scale;
			caller->set_gravity_scale(gravity_scale);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_linear_damp(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_linear_damp){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			float linear_damp = (float) p_linear_damp;
			caller->set_linear_damp(linear_damp);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_linear_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_linear_velocity){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 linear_velocity = state->lookup_variant(p_linear_velocity);
			caller->set_linear_velocity(linear_velocity);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_mass(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_mass){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			float mass = (float) p_mass;
			caller->set_mass(mass);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_max_contacts_reported(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_amount){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			int amount = (int) p_amount;
			caller->set_max_contacts_reported(amount);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_mode(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_mode){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			int mode = (int) p_mode;
			caller->set_mode(mode);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_physics_material_override(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_physics_material_override){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			Ref<PhysicsMaterial> physics_material_override = (state->lookup_object(p_physics_material_override));
			caller->set_physics_material_override(physics_material_override);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_sleeping(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_sleeping){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			bool sleeping = (bool) p_sleeping;
			caller->set_sleeping(sleeping);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_use_continuous_collision_detection(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_use_continuous_collision_detection(enable);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_use_custom_integrator(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_use_custom_integrator(enable);
			return;
		}
	}
}

void _wasgo_RigidBody_wrapper_set_weight(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_weight){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		RigidBody *caller = (RigidBody *) state->lookup_object(caller_id);
		if(caller){
			float weight = (float) p_weight;
			caller->set_weight(weight);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_add_bone(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			caller->add_bone(name);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_bind_child_node_to_bone(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Node *node = (Node *) state->lookup_object(p_node);
			caller->bind_child_node_to_bone(bone_idx, node);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_clear_bones(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			caller->clear_bones();
			return;
		}
	}
}

int _wasgo_Skeleton_wrapper_find_bone(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_name){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			String name = state->lookup_variant(p_name);
			return (int) caller->find_bone(name);
		}
	}
}

int _wasgo_Skeleton_wrapper_get_bone_count(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_bone_count();
		}
	}
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bone_custom_pose(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			return state->create_variant(caller->get_bone_custom_pose(bone_idx));
		}
	}
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bone_global_pose(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			return state->create_variant(caller->get_bone_global_pose(bone_idx));
		}
	}
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bone_name(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			return state->create_variant(caller->get_bone_name(bone_idx));
		}
	}
}

int _wasgo_Skeleton_wrapper_get_bone_parent(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			return (int) caller->get_bone_parent(bone_idx);
		}
	}
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bone_pose(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			return state->create_variant(caller->get_bone_pose(bone_idx));
		}
	}
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bone_rest(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			return state->create_variant(caller->get_bone_rest(bone_idx));
		}
	}
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_get_bound_child_nodes_to_bone(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			return state->create_variant(caller->get_bound_child_nodes_to_bone(bone_idx));
		}
	}
}

int _wasgo_Skeleton_wrapper_is_bone_rest_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			return (int) caller->is_bone_rest_disabled(bone_idx);
		}
	}
}

void _wasgo_Skeleton_wrapper_localize_rests(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			caller->localize_rests();
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_physical_bones_add_collision_exception(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_exception){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			RID exception = state->lookup_variant(p_exception);
			caller->physical_bones_add_collision_exception(exception);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_physical_bones_remove_collision_exception(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_exception){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			RID exception = state->lookup_variant(p_exception);
			caller->physical_bones_remove_collision_exception(exception);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_physical_bones_start_simulation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_bones){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			Array bones = state->lookup_variant(p_bones);
			caller->physical_bones_start_simulation(bones);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_physical_bones_stop_simulation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			caller->physical_bones_stop_simulation();
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_Skeleton_wrapper_register_skin(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_skin){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			Ref<Skin> skin = (state->lookup_object(p_skin));
			return state->reference_object(caller->register_skin(skin));
		}
	}
}

void _wasgo_Skeleton_wrapper_set_bone_custom_pose(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_custom_pose){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Transform custom_pose = state->lookup_variant(p_custom_pose);
			caller->set_bone_custom_pose(bone_idx, custom_pose);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_set_bone_disable_rest(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, bool p_disable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			bool disable = (bool) p_disable;
			caller->set_bone_disable_rest(bone_idx, disable);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_set_bone_global_pose_override(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_pose, float p_amount, bool p_persistent){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Transform pose = state->lookup_variant(p_pose);
			float amount = (float) p_amount;
			bool persistent = (bool) p_persistent;
			caller->set_bone_global_pose_override(bone_idx, pose, amount, persistent);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_set_bone_parent(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, int p_parent_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			int parent_idx = (int) p_parent_idx;
			caller->set_bone_parent(bone_idx, parent_idx);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_set_bone_pose(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_pose){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Transform pose = state->lookup_variant(p_pose);
			caller->set_bone_pose(bone_idx, pose);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_set_bone_rest(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_rest){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Transform rest = state->lookup_variant(p_rest);
			caller->set_bone_rest(bone_idx, rest);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_unbind_child_node_from_bone(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx, WasGoState::WasGoID p_node){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			Node *node = (Node *) state->lookup_object(p_node);
			caller->unbind_child_node_from_bone(bone_idx, node);
			return;
		}
	}
}

void _wasgo_Skeleton_wrapper_unparent_bone_and_rest(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bone_idx){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Skeleton *caller = (Skeleton *) state->lookup_object(caller_id);
		if(caller){
			int bone_idx = (int) p_bone_idx;
			caller->unparent_bone_and_rest(bone_idx);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_add_collision_exception_with(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_body){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			Node *body = (Node *) state->lookup_object(p_body);
			caller->add_collision_exception_with(body);
			return;
		}
	}
}

float _wasgo_SoftBody_wrapper_get_areaAngular_stiffness(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_areaAngular_stiffness();
		}
	}
}

WasGoState::WasGoID _wasgo_SoftBody_wrapper_get_collision_exceptions(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_collision_exceptions());
		}
	}
}

int _wasgo_SoftBody_wrapper_get_collision_layer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_collision_layer();
		}
	}
}

int _wasgo_SoftBody_wrapper_get_collision_layer_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			return (int) caller->get_collision_layer_bit(bit);
		}
	}
}

int _wasgo_SoftBody_wrapper_get_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_collision_mask();
		}
	}
}

int _wasgo_SoftBody_wrapper_get_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			return (int) caller->get_collision_mask_bit(bit);
		}
	}
}

float _wasgo_SoftBody_wrapper_get_damping_coefficient(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_damping_coefficient();
		}
	}
}

float _wasgo_SoftBody_wrapper_get_drag_coefficient(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_drag_coefficient();
		}
	}
}

float _wasgo_SoftBody_wrapper_get_linear_stiffness(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_linear_stiffness();
		}
	}
}

WasGoState::WasGoID _wasgo_SoftBody_wrapper_get_parent_collision_ignore(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_parent_collision_ignore());
		}
	}
}

float _wasgo_SoftBody_wrapper_get_pose_matching_coefficient(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_pose_matching_coefficient();
		}
	}
}

float _wasgo_SoftBody_wrapper_get_pressure_coefficient(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_pressure_coefficient();
		}
	}
}

int _wasgo_SoftBody_wrapper_get_simulation_precision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->get_simulation_precision();
		}
	}
}

float _wasgo_SoftBody_wrapper_get_total_mass(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_total_mass();
		}
	}
}

float _wasgo_SoftBody_wrapper_get_volume_stiffness(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_volume_stiffness();
		}
	}
}

int _wasgo_SoftBody_wrapper_is_ray_pickable(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_ray_pickable();
		}
	}
}

void _wasgo_SoftBody_wrapper_remove_collision_exception_with(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_body){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			Node *body = (Node *) state->lookup_object(p_body);
			caller->remove_collision_exception_with(body);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_areaAngular_stiffness(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_areaAngular_stiffness){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			float areaAngular_stiffness = (float) p_areaAngular_stiffness;
			caller->set_areaAngular_stiffness(areaAngular_stiffness);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_collision_layer(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_collision_layer){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			int collision_layer = (int) p_collision_layer;
			caller->set_collision_layer(collision_layer);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_collision_layer_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit, bool p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			bool value = (bool) p_value;
			caller->set_collision_layer_bit(bit, value);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_collision_mask(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_collision_mask){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			int collision_mask = (int) p_collision_mask;
			caller->set_collision_mask(collision_mask);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_collision_mask_bit(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_bit, bool p_value){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			int bit = (int) p_bit;
			bool value = (bool) p_value;
			caller->set_collision_mask_bit(bit, value);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_damping_coefficient(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_damping_coefficient){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			float damping_coefficient = (float) p_damping_coefficient;
			caller->set_damping_coefficient(damping_coefficient);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_drag_coefficient(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_drag_coefficient){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			float drag_coefficient = (float) p_drag_coefficient;
			caller->set_drag_coefficient(drag_coefficient);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_linear_stiffness(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_linear_stiffness){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			float linear_stiffness = (float) p_linear_stiffness;
			caller->set_linear_stiffness(linear_stiffness);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_parent_collision_ignore(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_parent_collision_ignore){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			NodePath parent_collision_ignore = state->lookup_variant(p_parent_collision_ignore);
			caller->set_parent_collision_ignore(parent_collision_ignore);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_pose_matching_coefficient(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_pose_matching_coefficient){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			float pose_matching_coefficient = (float) p_pose_matching_coefficient;
			caller->set_pose_matching_coefficient(pose_matching_coefficient);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_pressure_coefficient(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_pressure_coefficient){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			float pressure_coefficient = (float) p_pressure_coefficient;
			caller->set_pressure_coefficient(pressure_coefficient);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_ray_pickable(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_ray_pickable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			bool ray_pickable = (bool) p_ray_pickable;
			caller->set_ray_pickable(ray_pickable);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_simulation_precision(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, int p_simulation_precision){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			int simulation_precision = (int) p_simulation_precision;
			caller->set_simulation_precision(simulation_precision);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_total_mass(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_mass){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			float mass = (float) p_mass;
			caller->set_total_mass(mass);
			return;
		}
	}
}

void _wasgo_SoftBody_wrapper_set_volume_stiffness(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_volume_stiffness){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		SoftBody *caller = (SoftBody *) state->lookup_object(caller_id);
		if(caller){
			float volume_stiffness = (float) p_volume_stiffness;
			caller->set_volume_stiffness(volume_stiffness);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_force_update_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			caller->force_update_transform();
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_gizmo(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_gizmo());
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_global_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_global_transform());
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_parent_spatial(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return state->create_object(caller->get_parent_spatial());
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_rotation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_rotation());
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_rotation_degrees(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_rotation_degrees());
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_scale());
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_transform());
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_translation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_translation());
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_get_world(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_world());
		}
	}
}

void _wasgo_Spatial_wrapper_global_rotate(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_axis, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 axis = state->lookup_variant(p_axis);
			float angle = (float) p_angle;
			caller->global_rotate(axis, angle);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_global_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 scale = state->lookup_variant(p_scale);
			caller->global_scale(scale);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_global_translate(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_offset){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 offset = state->lookup_variant(p_offset);
			caller->global_translate(offset);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_hide(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			caller->hide();
			return;
		}
	}
}

int _wasgo_Spatial_wrapper_is_local_transform_notification_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_local_transform_notification_enabled();
		}
	}
}

int _wasgo_Spatial_wrapper_is_scale_disabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_scale_disabled();
		}
	}
}

int _wasgo_Spatial_wrapper_is_set_as_toplevel(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_set_as_toplevel();
		}
	}
}

int _wasgo_Spatial_wrapper_is_transform_notification_enabled(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_transform_notification_enabled();
		}
	}
}

int _wasgo_Spatial_wrapper_is_visible(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_visible();
		}
	}
}

int _wasgo_Spatial_wrapper_is_visible_in_tree(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_visible_in_tree();
		}
	}
}

void _wasgo_Spatial_wrapper_look_at(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_target, WasGoState::WasGoID p_up){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 target = state->lookup_variant(p_target);
			Vector3 up = state->lookup_variant(p_up);
			caller->look_at(target, up);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_look_at_from_position(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_position, WasGoState::WasGoID p_target, WasGoState::WasGoID p_up){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 position = state->lookup_variant(p_position);
			Vector3 target = state->lookup_variant(p_target);
			Vector3 up = state->lookup_variant(p_up);
			caller->look_at_from_position(position, target, up);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_orthonormalize(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			caller->orthonormalize();
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_rotate(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_axis, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 axis = state->lookup_variant(p_axis);
			float angle = (float) p_angle;
			caller->rotate(axis, angle);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_rotate_object_local(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_axis, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 axis = state->lookup_variant(p_axis);
			float angle = (float) p_angle;
			caller->rotate_object_local(axis, angle);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_rotate_x(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			float angle = (float) p_angle;
			caller->rotate_x(angle);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_rotate_y(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			float angle = (float) p_angle;
			caller->rotate_y(angle);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_rotate_z(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_angle){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			float angle = (float) p_angle;
			caller->rotate_z(angle);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_scale_object_local(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 scale = state->lookup_variant(p_scale);
			caller->scale_object_local(scale);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_as_toplevel(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_as_toplevel(enable);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_disable_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_disable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool disable = (bool) p_disable;
			caller->set_disable_scale(disable);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_gizmo(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_gizmo){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Ref<SpatialGizmo> gizmo = (state->lookup_object(p_gizmo));
			caller->set_gizmo(gizmo);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_global_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_global){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Transform global = state->lookup_variant(p_global);
			caller->set_global_transform(global);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_identity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			caller->set_identity();
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_ignore_transform_notification(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enabled){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool enabled = (bool) p_enabled;
			caller->set_ignore_transform_notification(enabled);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_notify_local_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_notify_local_transform(enable);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_notify_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_enable){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool enable = (bool) p_enable;
			caller->set_notify_transform(enable);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_rotation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_euler){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 euler = state->lookup_variant(p_euler);
			caller->set_rotation(euler);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_rotation_degrees(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_euler_degrees){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 euler_degrees = state->lookup_variant(p_euler_degrees);
			caller->set_rotation_degrees(euler_degrees);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_scale(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_scale){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 scale = state->lookup_variant(p_scale);
			caller->set_scale(scale);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_transform(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_local){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Transform local = state->lookup_variant(p_local);
			caller->set_transform(local);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_translation(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_translation){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 translation = state->lookup_variant(p_translation);
			caller->set_translation(translation);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_set_visible(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, bool p_visible){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			bool visible = (bool) p_visible;
			caller->set_visible(visible);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_show(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			caller->show();
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_to_global(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_local_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 local_point = state->lookup_variant(p_local_point);
			return state->create_variant(caller->to_global(local_point));
		}
	}
}

WasGoState::WasGoID _wasgo_Spatial_wrapper_to_local(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_global_point){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 global_point = state->lookup_variant(p_global_point);
			return state->create_variant(caller->to_local(global_point));
		}
	}
}

void _wasgo_Spatial_wrapper_translate(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_offset){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 offset = state->lookup_variant(p_offset);
			caller->translate(offset);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_translate_object_local(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_offset){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			Vector3 offset = state->lookup_variant(p_offset);
			caller->translate_object_local(offset);
			return;
		}
	}
}

void _wasgo_Spatial_wrapper_update_gizmo(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		Spatial *caller = (Spatial *) state->lookup_object(caller_id);
		if(caller){
			caller->update_gizmo();
			return;
		}
	}
}

float _wasgo_StaticBody_wrapper_get_bounce(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_bounce();
		}
	}
}

WasGoState::WasGoID _wasgo_StaticBody_wrapper_get_constant_angular_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_constant_angular_velocity());
		}
	}
}

WasGoState::WasGoID _wasgo_StaticBody_wrapper_get_constant_linear_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_constant_linear_velocity());
		}
	}
}

float _wasgo_StaticBody_wrapper_get_friction(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			return (float) caller->get_friction();
		}
	}
}

WasGoState::WasGoID _wasgo_StaticBody_wrapper_get_physics_material_override(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_physics_material_override());
		}
	}
}

void _wasgo_StaticBody_wrapper_set_bounce(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_bounce){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			float bounce = (float) p_bounce;
			caller->set_bounce(bounce);
			return;
		}
	}
}

void _wasgo_StaticBody_wrapper_set_constant_angular_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_vel){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 vel = state->lookup_variant(p_vel);
			caller->set_constant_angular_velocity(vel);
			return;
		}
	}
}

void _wasgo_StaticBody_wrapper_set_constant_linear_velocity(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_vel){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			Vector3 vel = state->lookup_variant(p_vel);
			caller->set_constant_linear_velocity(vel);
			return;
		}
	}
}

void _wasgo_StaticBody_wrapper_set_friction(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, float p_friction){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			float friction = (float) p_friction;
			caller->set_friction(friction);
			return;
		}
	}
}

void _wasgo_StaticBody_wrapper_set_physics_material_override(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_physics_material_override){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		StaticBody *caller = (StaticBody *) state->lookup_object(caller_id);
		if(caller){
			Ref<PhysicsMaterial> physics_material_override = (state->lookup_object(p_physics_material_override));
			caller->set_physics_material_override(physics_material_override);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_VisibilityNotifier_wrapper_get_aabb(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		VisibilityNotifier *caller = (VisibilityNotifier *) state->lookup_object(caller_id);
		if(caller){
			return state->create_variant(caller->get_aabb());
		}
	}
}

int _wasgo_VisibilityNotifier_wrapper_is_on_screen(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		VisibilityNotifier *caller = (VisibilityNotifier *) state->lookup_object(caller_id);
		if(caller){
			return (int) caller->is_on_screen();
		}
	}
}

void _wasgo_VisibilityNotifier_wrapper_set_aabb(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_rect){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		VisibilityNotifier *caller = (VisibilityNotifier *) state->lookup_object(caller_id);
		if(caller){
			AABB rect = state->lookup_variant(p_rect);
			caller->set_aabb(rect);
			return;
		}
	}
}

WasGoState::WasGoID _wasgo_WorldEnvironment_wrapper_get_environment(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		WorldEnvironment *caller = (WorldEnvironment *) state->lookup_object(caller_id);
		if(caller){
			return state->reference_object(caller->get_environment());
		}
	}
}

void _wasgo_WorldEnvironment_wrapper_set_environment(wasm_exec_env_t exec_env, WasGoState::WasGoID caller_id, WasGoState::WasGoID p_env){
	WasGoState *state = (WasGoState *)wasm_runtime_get_user_data(exec_env);
	if(state){
		WorldEnvironment *caller = (WorldEnvironment *) state->lookup_object(caller_id);
		if(caller){
			Ref<Environment> env = (state->lookup_object(p_env));
			caller->set_environment(env);
			return;
		}
	}
}
}
#endif