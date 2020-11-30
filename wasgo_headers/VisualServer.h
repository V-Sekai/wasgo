/* THIS FILE IS GENERATED */
#ifndef VISUALSERVER_H
#define VISUALSERVER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "Image.h"
class VisualServer : public Object{
enum ArrayFormat{
ARRAY_FORMAT_VERTEX,
ARRAY_FORMAT_NORMAL,
ARRAY_FORMAT_TANGENT,
ARRAY_FORMAT_COLOR,
ARRAY_FORMAT_TEX_UV,
ARRAY_FORMAT_TEX_UV2,
ARRAY_FORMAT_BONES,
ARRAY_FORMAT_WEIGHTS,
ARRAY_FORMAT_INDEX,
ARRAY_COMPRESS_VERTEX,
ARRAY_COMPRESS_NORMAL,
ARRAY_COMPRESS_TANGENT,
ARRAY_COMPRESS_COLOR,
ARRAY_COMPRESS_TEX_UV,
ARRAY_COMPRESS_TEX_UV2,
ARRAY_COMPRESS_BONES,
ARRAY_COMPRESS_WEIGHTS,
ARRAY_COMPRESS_INDEX,
ARRAY_FLAG_USE_2D_VERTICES,
ARRAY_FLAG_USE_16_BIT_BONES,
ARRAY_COMPRESS_DEFAULT
};
enum ArrayType{
ARRAY_VERTEX,
ARRAY_NORMAL,
ARRAY_TANGENT,
ARRAY_COLOR,
ARRAY_TEX_UV,
ARRAY_TEX_UV2,
ARRAY_BONES,
ARRAY_WEIGHTS,
ARRAY_INDEX,
ARRAY_MAX
};
enum BlendShapeMode{
BLEND_SHAPE_MODE_NORMALIZED,
BLEND_SHAPE_MODE_RELATIVE
};
enum CanvasLightMode{
CANVAS_LIGHT_MODE_ADD,
CANVAS_LIGHT_MODE_SUB,
CANVAS_LIGHT_MODE_MIX,
CANVAS_LIGHT_MODE_MASK
};
enum CanvasLightShadowFilter{
CANVAS_LIGHT_FILTER_NONE,
CANVAS_LIGHT_FILTER_PCF3,
CANVAS_LIGHT_FILTER_PCF5,
CANVAS_LIGHT_FILTER_PCF7,
CANVAS_LIGHT_FILTER_PCF9,
CANVAS_LIGHT_FILTER_PCF13
};
enum CanvasOccluderPolygonCullMode{
CANVAS_OCCLUDER_POLYGON_CULL_DISABLED,
CANVAS_OCCLUDER_POLYGON_CULL_CLOCKWISE,
CANVAS_OCCLUDER_POLYGON_CULL_COUNTER_CLOCKWISE
};
enum CubeMapSide{
CUBEMAP_LEFT,
CUBEMAP_RIGHT,
CUBEMAP_BOTTOM,
CUBEMAP_TOP,
CUBEMAP_FRONT,
CUBEMAP_BACK
};
enum EnvironmentBG{
ENV_BG_CLEAR_COLOR,
ENV_BG_COLOR,
ENV_BG_SKY,
ENV_BG_COLOR_SKY,
ENV_BG_CANVAS,
ENV_BG_KEEP,
ENV_BG_MAX
};
enum EnvironmentDOFBlurQuality{
ENV_DOF_BLUR_QUALITY_LOW,
ENV_DOF_BLUR_QUALITY_MEDIUM,
ENV_DOF_BLUR_QUALITY_HIGH
};
enum EnvironmentGlowBlendMode{
GLOW_BLEND_MODE_ADDITIVE,
GLOW_BLEND_MODE_SCREEN,
GLOW_BLEND_MODE_SOFTLIGHT,
GLOW_BLEND_MODE_REPLACE
};
enum EnvironmentSSAOBlur{
ENV_SSAO_BLUR_DISABLED,
ENV_SSAO_BLUR_1x1,
ENV_SSAO_BLUR_2x2,
ENV_SSAO_BLUR_3x3
};
enum EnvironmentSSAOQuality{
ENV_SSAO_QUALITY_LOW,
ENV_SSAO_QUALITY_MEDIUM,
ENV_SSAO_QUALITY_HIGH
};
enum EnvironmentToneMapper{
ENV_TONE_MAPPER_LINEAR,
ENV_TONE_MAPPER_REINHARD,
ENV_TONE_MAPPER_FILMIC,
ENV_TONE_MAPPER_ACES
};
enum Features{
FEATURE_SHADERS,
FEATURE_MULTITHREADED
};
enum InstanceFlags{
INSTANCE_FLAG_USE_BAKED_LIGHT,
INSTANCE_FLAG_DRAW_NEXT_FRAME_IF_VISIBLE,
INSTANCE_FLAG_MAX
};
enum InstanceType{
INSTANCE_NONE,
INSTANCE_MESH,
INSTANCE_MULTIMESH,
INSTANCE_IMMEDIATE,
INSTANCE_PARTICLES,
INSTANCE_LIGHT,
INSTANCE_REFLECTION_PROBE,
INSTANCE_GI_PROBE,
INSTANCE_LIGHTMAP_CAPTURE,
INSTANCE_MAX,
INSTANCE_GEOMETRY_MASK
};
enum LightBakeMode{
LIGHT_BAKE_DISABLED,
LIGHT_BAKE_INDIRECT,
LIGHT_BAKE_ALL
};
enum LightDirectionalShadowDepthRangeMode{
LIGHT_DIRECTIONAL_SHADOW_DEPTH_RANGE_STABLE,
LIGHT_DIRECTIONAL_SHADOW_DEPTH_RANGE_OPTIMIZED
};
enum LightDirectionalShadowMode{
LIGHT_DIRECTIONAL_SHADOW_ORTHOGONAL,
LIGHT_DIRECTIONAL_SHADOW_PARALLEL_2_SPLITS,
LIGHT_DIRECTIONAL_SHADOW_PARALLEL_4_SPLITS
};
enum LightOmniShadowDetail{
LIGHT_OMNI_SHADOW_DETAIL_VERTICAL,
LIGHT_OMNI_SHADOW_DETAIL_HORIZONTAL
};
enum LightOmniShadowMode{
LIGHT_OMNI_SHADOW_DUAL_PARABOLOID,
LIGHT_OMNI_SHADOW_CUBE
};
enum LightParam{
LIGHT_PARAM_ENERGY,
LIGHT_PARAM_SPECULAR,
LIGHT_PARAM_RANGE,
LIGHT_PARAM_ATTENUATION,
LIGHT_PARAM_SPOT_ANGLE,
LIGHT_PARAM_SPOT_ATTENUATION,
LIGHT_PARAM_CONTACT_SHADOW_SIZE,
LIGHT_PARAM_SHADOW_MAX_DISTANCE,
LIGHT_PARAM_SHADOW_SPLIT_1_OFFSET,
LIGHT_PARAM_SHADOW_SPLIT_2_OFFSET,
LIGHT_PARAM_SHADOW_SPLIT_3_OFFSET,
LIGHT_PARAM_SHADOW_NORMAL_BIAS,
LIGHT_PARAM_SHADOW_BIAS,
LIGHT_PARAM_SHADOW_BIAS_SPLIT_SCALE,
LIGHT_PARAM_MAX
};
enum LightType{
LIGHT_DIRECTIONAL,
LIGHT_OMNI,
LIGHT_SPOT
};
enum MultimeshColorFormat{
MULTIMESH_COLOR_NONE,
MULTIMESH_COLOR_8BIT,
MULTIMESH_COLOR_FLOAT
};
enum MultimeshCustomDataFormat{
MULTIMESH_CUSTOM_DATA_NONE,
MULTIMESH_CUSTOM_DATA_8BIT,
MULTIMESH_CUSTOM_DATA_FLOAT
};
enum MultimeshTransformFormat{
MULTIMESH_TRANSFORM_2D,
MULTIMESH_TRANSFORM_3D
};
enum NinePatchAxisMode{
NINE_PATCH_STRETCH,
NINE_PATCH_TILE,
NINE_PATCH_TILE_FIT
};
enum ParticlesDrawOrder{
PARTICLES_DRAW_ORDER_INDEX,
PARTICLES_DRAW_ORDER_LIFETIME,
PARTICLES_DRAW_ORDER_VIEW_DEPTH
};
enum PrimitiveType{
PRIMITIVE_POINTS,
PRIMITIVE_LINES,
PRIMITIVE_LINE_STRIP,
PRIMITIVE_LINE_LOOP,
PRIMITIVE_TRIANGLES,
PRIMITIVE_TRIANGLE_STRIP,
PRIMITIVE_TRIANGLE_FAN,
PRIMITIVE_MAX
};
enum ReflectionProbeUpdateMode{
REFLECTION_PROBE_UPDATE_ONCE,
REFLECTION_PROBE_UPDATE_ALWAYS
};
enum RenderInfo{
INFO_OBJECTS_IN_FRAME,
INFO_VERTICES_IN_FRAME,
INFO_MATERIAL_CHANGES_IN_FRAME,
INFO_SHADER_CHANGES_IN_FRAME,
INFO_SURFACE_CHANGES_IN_FRAME,
INFO_DRAW_CALLS_IN_FRAME,
INFO_2D_ITEMS_IN_FRAME,
INFO_2D_DRAW_CALLS_IN_FRAME,
INFO_USAGE_VIDEO_MEM_TOTAL,
INFO_VIDEO_MEM_USED,
INFO_TEXTURE_MEM_USED,
INFO_VERTEX_MEM_USED
};
enum ScenarioDebugMode{
SCENARIO_DEBUG_DISABLED,
SCENARIO_DEBUG_WIREFRAME,
SCENARIO_DEBUG_OVERDRAW,
SCENARIO_DEBUG_SHADELESS
};
enum ShaderMode{
SHADER_SPATIAL,
SHADER_CANVAS_ITEM,
SHADER_PARTICLES,
SHADER_MAX
};
enum ShadowCastingSetting{
SHADOW_CASTING_SETTING_OFF,
SHADOW_CASTING_SETTING_ON,
SHADOW_CASTING_SETTING_DOUBLE_SIDED,
SHADOW_CASTING_SETTING_SHADOWS_ONLY
};
enum TextureFlags{
TEXTURE_FLAG_MIPMAPS,
TEXTURE_FLAG_REPEAT,
TEXTURE_FLAG_FILTER,
TEXTURE_FLAG_ANISOTROPIC_FILTER,
TEXTURE_FLAG_CONVERT_TO_LINEAR,
TEXTURE_FLAG_MIRRORED_REPEAT,
TEXTURE_FLAG_USED_FOR_STREAMING,
TEXTURE_FLAGS_DEFAULT
};
enum TextureType{
TEXTURE_TYPE_2D,
TEXTURE_TYPE_CUBEMAP,
TEXTURE_TYPE_2D_ARRAY,
TEXTURE_TYPE_3D
};
enum ViewportClearMode{
VIEWPORT_CLEAR_ALWAYS,
VIEWPORT_CLEAR_NEVER,
VIEWPORT_CLEAR_ONLY_NEXT_FRAME
};
enum ViewportDebugDraw{
VIEWPORT_DEBUG_DRAW_DISABLED,
VIEWPORT_DEBUG_DRAW_UNSHADED,
VIEWPORT_DEBUG_DRAW_OVERDRAW,
VIEWPORT_DEBUG_DRAW_WIREFRAME
};
enum ViewportMSAA{
VIEWPORT_MSAA_DISABLED,
VIEWPORT_MSAA_2X,
VIEWPORT_MSAA_4X,
VIEWPORT_MSAA_8X,
VIEWPORT_MSAA_16X,
VIEWPORT_MSAA_EXT_2X,
VIEWPORT_MSAA_EXT_4X
};
enum ViewportRenderInfo{
VIEWPORT_RENDER_INFO_OBJECTS_IN_FRAME,
VIEWPORT_RENDER_INFO_VERTICES_IN_FRAME,
VIEWPORT_RENDER_INFO_MATERIAL_CHANGES_IN_FRAME,
VIEWPORT_RENDER_INFO_SHADER_CHANGES_IN_FRAME,
VIEWPORT_RENDER_INFO_SURFACE_CHANGES_IN_FRAME,
VIEWPORT_RENDER_INFO_DRAW_CALLS_IN_FRAME,
VIEWPORT_RENDER_INFO_2D_ITEMS_IN_FRAME,
VIEWPORT_RENDER_INFO_2D_DRAW_CALLS_IN_FRAME,
VIEWPORT_RENDER_INFO_MAX
};
enum ViewportUpdateMode{
VIEWPORT_UPDATE_DISABLED,
VIEWPORT_UPDATE_ONCE,
VIEWPORT_UPDATE_WHEN_VISIBLE,
VIEWPORT_UPDATE_ALWAYS
};
enum ViewportUsage{
VIEWPORT_USAGE_2D,
VIEWPORT_USAGE_2D_NO_SAMPLING,
VIEWPORT_USAGE_3D,
VIEWPORT_USAGE_3D_NO_EFFECTS
};
void black_bars_set_images(RID p_left, RID p_top, RID p_right, RID p_bottom);
void black_bars_set_margins(int p_left, int p_top, int p_right, int p_bottom);
RID camera_create();
void camera_set_cull_mask(RID p_camera, int p_layers);
void camera_set_environment(RID p_camera, RID p_env);
void camera_set_frustum(RID p_camera, float p_size, Vector2 p_offset, float p_z_near, float p_z_far);
void camera_set_orthogonal(RID p_camera, float p_size, float p_z_near, float p_z_far);
void camera_set_perspective(RID p_camera, float p_fovy_degrees, float p_z_near, float p_z_far);
void camera_set_transform(RID p_camera, Transform p_transform);
void camera_set_use_vertical_aspect(RID p_camera, bool p_enable);
RID canvas_create();
void canvas_item_add_circle(RID p_item, Vector2 p_pos, float p_radius, Color p_color);
void canvas_item_add_clip_ignore(RID p_item, bool p_ignore);
void canvas_item_add_line(RID p_item, Vector2 p_from, Vector2 p_to, Color p_color, float p_width = (float) 1, bool p_antialiased = (bool) False);
void canvas_item_add_mesh(RID p_item, RID p_mesh, Transform2D p_transform = (Transform2D) ((1, 0), (0, 1), (0, 0)), Color p_modulate = (Color) 1,1,1,1, RID p_texture = (RID) [RID], RID p_normal_map = (RID) [RID]);
void canvas_item_add_multimesh(RID p_item, RID p_mesh, RID p_texture, RID p_normal_map = (RID) [RID]);
void canvas_item_add_nine_patch(RID p_item, Rect2 p_rect, Rect2 p_source, RID p_texture, Vector2 p_topleft, Vector2 p_bottomright, VisualServer::NinePatchAxisMode p_x_axis_mode = (VisualServer::NinePatchAxisMode) 0, VisualServer::NinePatchAxisMode p_y_axis_mode = (VisualServer::NinePatchAxisMode) 0, bool p_draw_center = (bool) True, Color p_modulate = (Color) 1,1,1,1, RID p_normal_map = (RID) [RID]);
void canvas_item_add_particles(RID p_item, RID p_particles, RID p_texture, RID p_normal_map);
void canvas_item_add_polygon(RID p_item, PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs = (PoolVector2Array) [], RID p_texture = (RID) [RID], RID p_normal_map = (RID) [RID], bool p_antialiased = (bool) False);
void canvas_item_add_polyline(RID p_item, PoolVector2Array p_points, PoolColorArray p_colors, float p_width = (float) 1, bool p_antialiased = (bool) False);
void canvas_item_add_primitive(RID p_item, PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs, RID p_texture, float p_width = (float) 1, RID p_normal_map = (RID) [RID]);
void canvas_item_add_rect(RID p_item, Rect2 p_rect, Color p_color);
void canvas_item_add_set_transform(RID p_item, Transform2D p_transform);
void canvas_item_add_texture_rect(RID p_item, Rect2 p_rect, RID p_texture, bool p_tile = (bool) False, Color p_modulate = (Color) 1,1,1,1, bool p_transpose = (bool) False, RID p_normal_map = (RID) [RID]);
void canvas_item_add_texture_rect_region(RID p_item, Rect2 p_rect, RID p_texture, Rect2 p_src_rect, Color p_modulate = (Color) 1,1,1,1, bool p_transpose = (bool) False, RID p_normal_map = (RID) [RID], bool p_clip_uv = (bool) True);
void canvas_item_add_triangle_array(RID p_item, PoolIntArray p_indices, PoolVector2Array p_points, PoolColorArray p_colors, PoolVector2Array p_uvs = (PoolVector2Array) [], PoolIntArray p_bones = (PoolIntArray) [], PoolRealArray p_weights = (PoolRealArray) [], RID p_texture = (RID) [RID], int p_count = (int) -1, RID p_normal_map = (RID) [RID], bool p_antialiased = (bool) False, bool p_antialiasing_use_indices = (bool) False);
void canvas_item_clear(RID p_item);
RID canvas_item_create();
void canvas_item_set_clip(RID p_item, bool p_clip);
void canvas_item_set_copy_to_backbuffer(RID p_item, bool p_enabled, Rect2 p_rect);
void canvas_item_set_custom_rect(RID p_item, bool p_use_custom_rect, Rect2 p_rect = (Rect2) (0, 0, 0, 0));
void canvas_item_set_distance_field_mode(RID p_item, bool p_enabled);
void canvas_item_set_draw_behind_parent(RID p_item, bool p_enabled);
void canvas_item_set_draw_index(RID p_item, int p_index);
void canvas_item_set_light_mask(RID p_item, int p_mask);
void canvas_item_set_material(RID p_item, RID p_material);
void canvas_item_set_modulate(RID p_item, Color p_color);
void canvas_item_set_parent(RID p_item, RID p_parent);
void canvas_item_set_self_modulate(RID p_item, Color p_color);
void canvas_item_set_sort_children_by_y(RID p_item, bool p_enabled);
void canvas_item_set_transform(RID p_item, Transform2D p_transform);
void canvas_item_set_use_parent_material(RID p_item, bool p_enabled);
void canvas_item_set_visible(RID p_item, bool p_visible);
void canvas_item_set_z_as_relative_to_parent(RID p_item, bool p_enabled);
void canvas_item_set_z_index(RID p_item, int p_z_index);
void canvas_light_attach_to_canvas(RID p_light, RID p_canvas);
RID canvas_light_create();
void canvas_light_occluder_attach_to_canvas(RID p_occluder, RID p_canvas);
RID canvas_light_occluder_create();
void canvas_light_occluder_set_enabled(RID p_occluder, bool p_enabled);
void canvas_light_occluder_set_light_mask(RID p_occluder, int p_mask);
void canvas_light_occluder_set_polygon(RID p_occluder, RID p_polygon);
void canvas_light_occluder_set_transform(RID p_occluder, Transform2D p_transform);
void canvas_light_set_color(RID p_light, Color p_color);
void canvas_light_set_enabled(RID p_light, bool p_enabled);
void canvas_light_set_energy(RID p_light, float p_energy);
void canvas_light_set_height(RID p_light, float p_height);
void canvas_light_set_item_cull_mask(RID p_light, int p_mask);
void canvas_light_set_item_shadow_cull_mask(RID p_light, int p_mask);
void canvas_light_set_layer_range(RID p_light, int p_min_layer, int p_max_layer);
void canvas_light_set_mode(RID p_light, VisualServer::CanvasLightMode p_mode);
void canvas_light_set_scale(RID p_light, float p_scale);
void canvas_light_set_shadow_buffer_size(RID p_light, int p_size);
void canvas_light_set_shadow_color(RID p_light, Color p_color);
void canvas_light_set_shadow_enabled(RID p_light, bool p_enabled);
void canvas_light_set_shadow_filter(RID p_light, VisualServer::CanvasLightShadowFilter p_filter);
void canvas_light_set_shadow_gradient_length(RID p_light, float p_length);
void canvas_light_set_shadow_smooth(RID p_light, float p_smooth);
void canvas_light_set_texture(RID p_light, RID p_texture);
void canvas_light_set_texture_offset(RID p_light, Vector2 p_offset);
void canvas_light_set_transform(RID p_light, Transform2D p_transform);
void canvas_light_set_z_range(RID p_light, int p_min_z, int p_max_z);
RID canvas_occluder_polygon_create();
void canvas_occluder_polygon_set_cull_mode(RID p_occluder_polygon, VisualServer::CanvasOccluderPolygonCullMode p_mode);
void canvas_occluder_polygon_set_shape(RID p_occluder_polygon, PoolVector2Array p_shape, bool p_closed);
void canvas_occluder_polygon_set_shape_as_lines(RID p_occluder_polygon, PoolVector2Array p_shape);
void canvas_set_item_mirroring(RID p_canvas, RID p_item, Vector2 p_mirroring);
void canvas_set_modulate(RID p_canvas, Color p_color);
RID directional_light_create();
void draw(bool p_swap_buffers = (bool) True, float p_frame_step = (float) 0);
RID environment_create();
void environment_set_adjustment(RID p_env, bool p_enable, float p_brightness, float p_contrast, float p_saturation, RID p_ramp);
void environment_set_ambient_light(RID p_env, Color p_color, float p_energy = (float) 1, float p_sky_contibution = (float) 0);
void environment_set_background(RID p_env, VisualServer::EnvironmentBG p_bg);
void environment_set_bg_color(RID p_env, Color p_color);
void environment_set_bg_energy(RID p_env, float p_energy);
void environment_set_canvas_max_layer(RID p_env, int p_max_layer);
void environment_set_dof_blur_far(RID p_env, bool p_enable, float p_distance, float p_transition, float p_far_amount, VisualServer::EnvironmentDOFBlurQuality p_quality);
void environment_set_dof_blur_near(RID p_env, bool p_enable, float p_distance, float p_transition, float p_far_amount, VisualServer::EnvironmentDOFBlurQuality p_quality);
void environment_set_fog(RID p_env, bool p_enable, Color p_color, Color p_sun_color, float p_sun_amount);
void environment_set_fog_depth(RID p_env, bool p_enable, float p_depth_begin, float p_depth_end, float p_depth_curve, bool p_transmit, float p_transmit_curve);
void environment_set_fog_height(RID p_env, bool p_enable, float p_min_height, float p_max_height, float p_height_curve);
void environment_set_glow(RID p_env, bool p_enable, int p_level_flags, float p_intensity, float p_strength, float p_bloom_threshold, VisualServer::EnvironmentGlowBlendMode p_blend_mode, float p_hdr_bleed_threshold, float p_hdr_bleed_scale, float p_hdr_luminance_cap, bool p_bicubic_upscale);
void environment_set_sky(RID p_env, RID p_sky);
void environment_set_sky_custom_fov(RID p_env, float p_scale);
void environment_set_sky_orientation(RID p_env, Basis p_orientation);
void environment_set_ssao(RID p_env, bool p_enable, float p_radius, float p_intensity, float p_radius2, float p_intensity2, float p_bias, float p_light_affect, float p_ao_channel_affect, Color p_color, VisualServer::EnvironmentSSAOQuality p_quality, VisualServer::EnvironmentSSAOBlur p_blur, float p_bilateral_sharpness);
void environment_set_ssr(RID p_env, bool p_enable, int p_max_steps, float p_fade_in, float p_fade_out, float p_depth_tolerance, bool p_roughness);
void environment_set_tonemap(RID p_env, VisualServer::EnvironmentToneMapper p_tone_mapper, float p_exposure, float p_white, bool p_auto_exposure, float p_min_luminance, float p_max_luminance, float p_auto_exp_speed, float p_auto_exp_grey);
void finish();
void force_draw(bool p_swap_buffers = (bool) True, float p_frame_step = (float) 0);
void force_sync();
void free_rid(RID p_rid);
int get_render_info(VisualServer::RenderInfo p_info);
RID get_test_cube();
RID get_test_texture();
String get_video_adapter_name();
String get_video_adapter_vendor();
RID get_white_texture();
RID gi_probe_create();
float gi_probe_get_bias(RID p_probe);
AABB gi_probe_get_bounds(RID p_probe);
float gi_probe_get_cell_size(RID p_probe);
PoolIntArray gi_probe_get_dynamic_data(RID p_probe);
int gi_probe_get_dynamic_range(RID p_probe);
float gi_probe_get_energy(RID p_probe);
float gi_probe_get_normal_bias(RID p_probe);
float gi_probe_get_propagation(RID p_probe);
Transform gi_probe_get_to_cell_xform(RID p_probe);
bool gi_probe_is_compressed(RID p_probe);
bool gi_probe_is_interior(RID p_probe);
void gi_probe_set_bias(RID p_probe, float p_bias);
void gi_probe_set_bounds(RID p_probe, AABB p_bounds);
void gi_probe_set_cell_size(RID p_probe, float p_range);
void gi_probe_set_compress(RID p_probe, bool p_enable);
void gi_probe_set_dynamic_data(RID p_probe, PoolIntArray p_data);
void gi_probe_set_dynamic_range(RID p_probe, int p_range);
void gi_probe_set_energy(RID p_probe, float p_energy);
void gi_probe_set_interior(RID p_probe, bool p_enable);
void gi_probe_set_normal_bias(RID p_probe, float p_bias);
void gi_probe_set_propagation(RID p_probe, float p_propagation);
void gi_probe_set_to_cell_xform(RID p_probe, Transform p_xform);
bool has_changed();
bool has_feature(VisualServer::Features p_feature);
bool has_os_feature(String p_feature);
void immediate_begin(RID p_immediate, VisualServer::PrimitiveType p_primitive, RID p_texture = (RID) [RID]);
void immediate_clear(RID p_immediate);
void immediate_color(RID p_immediate, Color p_color);
RID immediate_create();
void immediate_end(RID p_immediate);
RID immediate_get_material(RID p_immediate);
void immediate_normal(RID p_immediate, Vector3 p_normal);
void immediate_set_material(RID p_immediate, RID p_material);
void immediate_tangent(RID p_immediate, Plane p_tangent);
void immediate_uv(RID p_immediate, Vector2 p_tex_uv);
void immediate_uv2(RID p_immediate, Vector2 p_tex_uv);
void immediate_vertex(RID p_immediate, Vector3 p_vertex);
void immediate_vertex_2d(RID p_immediate, Vector2 p_vertex);
void init();
void instance_attach_object_instance_id(RID p_instance, int p_id);
void instance_attach_skeleton(RID p_instance, RID p_skeleton);
RID instance_create();
RID instance_create2(RID p_base, RID p_scenario);
void instance_geometry_set_as_instance_lod(RID p_instance, RID p_as_lod_of_instance);
void instance_geometry_set_cast_shadows_setting(RID p_instance, VisualServer::ShadowCastingSetting p_shadow_casting_setting);
void instance_geometry_set_draw_range(RID p_instance, float p_min, float p_max, float p_min_margin, float p_max_margin);
void instance_geometry_set_flag(RID p_instance, VisualServer::InstanceFlags p_flag, bool p_enabled);
void instance_geometry_set_material_override(RID p_instance, RID p_material);
void instance_set_base(RID p_instance, RID p_base);
void instance_set_blend_shape_weight(RID p_instance, int p_shape, float p_weight);
void instance_set_custom_aabb(RID p_instance, AABB p_aabb);
void instance_set_exterior(RID p_instance, bool p_enabled);
void instance_set_extra_visibility_margin(RID p_instance, float p_margin);
void instance_set_layer_mask(RID p_instance, int p_mask);
void instance_set_scenario(RID p_instance, RID p_scenario);
void instance_set_surface_material(RID p_instance, int p_surface, RID p_material);
void instance_set_transform(RID p_instance, Transform p_transform);
void instance_set_use_lightmap(RID p_instance, RID p_lightmap_instance, RID p_lightmap);
void instance_set_visible(RID p_instance, bool p_visible);
Array instances_cull_aabb(AABB p_aabb, RID p_scenario = (RID) [RID]);
Array instances_cull_convex(Array p_convex, RID p_scenario = (RID) [RID]);
Array instances_cull_ray(Vector3 p_from, Vector3 p_to, RID p_scenario = (RID) [RID]);
bool is_render_loop_enabled();
void light_directional_set_blend_splits(RID p_light, bool p_enable);
void light_directional_set_shadow_depth_range_mode(RID p_light, VisualServer::LightDirectionalShadowDepthRangeMode p_range_mode);
void light_directional_set_shadow_mode(RID p_light, VisualServer::LightDirectionalShadowMode p_mode);
void light_omni_set_shadow_detail(RID p_light, VisualServer::LightOmniShadowDetail p_detail);
void light_omni_set_shadow_mode(RID p_light, VisualServer::LightOmniShadowMode p_mode);
void light_set_bake_mode(RID p_light, VisualServer::LightBakeMode p_bake_mode);
void light_set_color(RID p_light, Color p_color);
void light_set_cull_mask(RID p_light, int p_mask);
void light_set_negative(RID p_light, bool p_enable);
void light_set_param(RID p_light, VisualServer::LightParam p_param, float p_value);
void light_set_projector(RID p_light, RID p_texture);
void light_set_reverse_cull_face_mode(RID p_light, bool p_enabled);
void light_set_shadow(RID p_light, bool p_enabled);
void light_set_shadow_color(RID p_light, Color p_color);
void light_set_use_gi(RID p_light, bool p_enabled);
RID lightmap_capture_create();
AABB lightmap_capture_get_bounds(RID p_capture);
float lightmap_capture_get_energy(RID p_capture);
PoolByteArray lightmap_capture_get_octree(RID p_capture);
int lightmap_capture_get_octree_cell_subdiv(RID p_capture);
Transform lightmap_capture_get_octree_cell_transform(RID p_capture);
void lightmap_capture_set_bounds(RID p_capture, AABB p_bounds);
void lightmap_capture_set_energy(RID p_capture, float p_energy);
void lightmap_capture_set_octree(RID p_capture, PoolByteArray p_octree);
void lightmap_capture_set_octree_cell_subdiv(RID p_capture, int p_subdiv);
void lightmap_capture_set_octree_cell_transform(RID p_capture, Transform p_xform);
RID make_sphere_mesh(int p_latitudes, int p_longitudes, float p_radius);
RID material_create();
Variant material_get_param(RID p_material, String p_parameter);
Variant material_get_param_default(RID p_material, String p_parameter);
RID material_get_shader(RID p_shader_material);
void material_set_line_width(RID p_material, float p_width);
void material_set_next_pass(RID p_material, RID p_next_material);
void material_set_param(RID p_material, String p_parameter, Variant p_value);
void material_set_render_priority(RID p_material, int p_priority);
void material_set_shader(RID p_shader_material, RID p_shader);
void mesh_add_surface_from_arrays(RID p_mesh, VisualServer::PrimitiveType p_primitive, Array p_arrays, Array p_blend_shapes = (Array) [], int p_compress_format = (int) 97280);
void mesh_clear(RID p_mesh);
RID mesh_create();
int mesh_get_blend_shape_count(RID p_mesh);
VisualServer::BlendShapeMode mesh_get_blend_shape_mode(RID p_mesh);
AABB mesh_get_custom_aabb(RID p_mesh);
int mesh_get_surface_count(RID p_mesh);
void mesh_remove_surface(RID p_mesh, int p_index);
void mesh_set_blend_shape_count(RID p_mesh, int p_amount);
void mesh_set_blend_shape_mode(RID p_mesh, VisualServer::BlendShapeMode p_mode);
void mesh_set_custom_aabb(RID p_mesh, AABB p_aabb);
AABB mesh_surface_get_aabb(RID p_mesh, int p_surface);
PoolByteArray mesh_surface_get_array(RID p_mesh, int p_surface);
int mesh_surface_get_array_index_len(RID p_mesh, int p_surface);
int mesh_surface_get_array_len(RID p_mesh, int p_surface);
Array mesh_surface_get_arrays(RID p_mesh, int p_surface);
Array mesh_surface_get_blend_shape_arrays(RID p_mesh, int p_surface);
int mesh_surface_get_format(RID p_mesh, int p_surface);
int mesh_surface_get_format_offset(int p_format, int p_vertex_len, int p_index_len, int p_array_index);
int mesh_surface_get_format_stride(int p_format, int p_vertex_len, int p_index_len);
PoolByteArray mesh_surface_get_index_array(RID p_mesh, int p_surface);
RID mesh_surface_get_material(RID p_mesh, int p_surface);
VisualServer::PrimitiveType mesh_surface_get_primitive_type(RID p_mesh, int p_surface);
Array mesh_surface_get_skeleton_aabb(RID p_mesh, int p_surface);
void mesh_surface_set_material(RID p_mesh, int p_surface, RID p_material);
void mesh_surface_update_region(RID p_mesh, int p_surface, int p_offset, PoolByteArray p_data);
void multimesh_allocate(RID p_multimesh, int p_instances, VisualServer::MultimeshTransformFormat p_transform_format, VisualServer::MultimeshColorFormat p_color_format, VisualServer::MultimeshCustomDataFormat p_custom_data_format = (VisualServer::MultimeshCustomDataFormat) 0);
RID multimesh_create();
AABB multimesh_get_aabb(RID p_multimesh);
int multimesh_get_instance_count(RID p_multimesh);
RID multimesh_get_mesh(RID p_multimesh);
int multimesh_get_visible_instances(RID p_multimesh);
Color multimesh_instance_get_color(RID p_multimesh, int p_index);
Color multimesh_instance_get_custom_data(RID p_multimesh, int p_index);
Transform multimesh_instance_get_transform(RID p_multimesh, int p_index);
Transform2D multimesh_instance_get_transform_2d(RID p_multimesh, int p_index);
void multimesh_instance_set_color(RID p_multimesh, int p_index, Color p_color);
void multimesh_instance_set_custom_data(RID p_multimesh, int p_index, Color p_custom_data);
void multimesh_instance_set_transform(RID p_multimesh, int p_index, Transform p_transform);
void multimesh_instance_set_transform_2d(RID p_multimesh, int p_index, Transform2D p_transform);
void multimesh_set_as_bulk_array(RID p_multimesh, PoolRealArray p_array);
void multimesh_set_mesh(RID p_multimesh, RID p_mesh);
void multimesh_set_visible_instances(RID p_multimesh, int p_visible);
RID omni_light_create();
RID particles_create();
AABB particles_get_current_aabb(RID p_particles);
bool particles_get_emitting(RID p_particles);
bool particles_is_inactive(RID p_particles);
void particles_request_process(RID p_particles);
void particles_restart(RID p_particles);
void particles_set_amount(RID p_particles, int p_amount);
void particles_set_custom_aabb(RID p_particles, AABB p_aabb);
void particles_set_draw_order(RID p_particles, VisualServer::ParticlesDrawOrder p_order);
void particles_set_draw_pass_mesh(RID p_particles, int p_pass, RID p_mesh);
void particles_set_draw_passes(RID p_particles, int p_count);
void particles_set_emission_transform(RID p_particles, Transform p_transform);
void particles_set_emitting(RID p_particles, bool p_emitting);
void particles_set_explosiveness_ratio(RID p_particles, float p_ratio);
void particles_set_fixed_fps(RID p_particles, int p_fps);
void particles_set_fractional_delta(RID p_particles, bool p_enable);
void particles_set_lifetime(RID p_particles, float p_lifetime);
void particles_set_one_shot(RID p_particles, bool p_one_shot);
void particles_set_pre_process_time(RID p_particles, float p_time);
void particles_set_process_material(RID p_particles, RID p_material);
void particles_set_randomness_ratio(RID p_particles, float p_ratio);
void particles_set_speed_scale(RID p_particles, float p_scale);
void particles_set_use_local_coordinates(RID p_particles, bool p_enable);
RID reflection_probe_create();
void reflection_probe_set_as_interior(RID p_probe, bool p_enable);
void reflection_probe_set_cull_mask(RID p_probe, int p_layers);
void reflection_probe_set_enable_box_projection(RID p_probe, bool p_enable);
void reflection_probe_set_enable_shadows(RID p_probe, bool p_enable);
void reflection_probe_set_extents(RID p_probe, Vector3 p_extents);
void reflection_probe_set_intensity(RID p_probe, float p_intensity);
void reflection_probe_set_interior_ambient(RID p_probe, Color p_color);
void reflection_probe_set_interior_ambient_energy(RID p_probe, float p_energy);
void reflection_probe_set_interior_ambient_probe_contribution(RID p_probe, float p_contrib);
void reflection_probe_set_max_distance(RID p_probe, float p_distance);
void reflection_probe_set_origin_offset(RID p_probe, Vector3 p_offset);
void reflection_probe_set_update_mode(RID p_probe, VisualServer::ReflectionProbeUpdateMode p_mode);
void request_frame_drawn_callback(Object p_where, String p_method, Variant p_userdata);
RID scenario_create();
void scenario_set_debug(RID p_scenario, VisualServer::ScenarioDebugMode p_debug_mode);
void scenario_set_environment(RID p_scenario, RID p_environment);
void scenario_set_fallback_environment(RID p_scenario, RID p_environment);
void scenario_set_reflection_atlas_size(RID p_scenario, int p_size, int p_subdiv);
void set_boot_image(Image p_image, Color p_color, bool p_scale, bool p_use_filter = (bool) True);
void set_debug_generate_wireframes(bool p_generate);
void set_default_clear_color(Color p_color);
void set_render_loop_enabled(bool p_enabled);
void set_shader_time_scale(float p_scale);
RID shader_create();
String shader_get_code(RID p_shader);
RID shader_get_default_texture_param(RID p_shader, String p_name);
Array shader_get_param_list(RID p_shader);
void shader_set_code(RID p_shader, String p_code);
void shader_set_default_texture_param(RID p_shader, String p_name, RID p_texture);
void skeleton_allocate(RID p_skeleton, int p_bones, bool p_is_2d_skeleton = (bool) False);
Transform skeleton_bone_get_transform(RID p_skeleton, int p_bone);
Transform2D skeleton_bone_get_transform_2d(RID p_skeleton, int p_bone);
void skeleton_bone_set_transform(RID p_skeleton, int p_bone, Transform p_transform);
void skeleton_bone_set_transform_2d(RID p_skeleton, int p_bone, Transform2D p_transform);
RID skeleton_create();
int skeleton_get_bone_count(RID p_skeleton);
RID sky_create();
void sky_set_texture(RID p_sky, RID p_cube_map, int p_radiance_size);
RID spot_light_create();
void sync();
void texture_allocate(RID p_texture, int p_width, int p_height, int p_depth_3d, Image::Format p_format, VisualServer::TextureType p_type, int p_flags = (int) 7);
void texture_bind(RID p_texture, int p_number);
RID texture_create();
RID texture_create_from_image(Image p_image, int p_flags = (int) 7);
Array texture_debug_usage();
Image texture_get_data(RID p_texture, int p_cube_side = (int) 0);
int texture_get_depth(RID p_texture);
int texture_get_flags(RID p_texture);
Image::Format texture_get_format(RID p_texture);
int texture_get_height(RID p_texture);
String texture_get_path(RID p_texture);
int texture_get_texid(RID p_texture);
VisualServer::TextureType texture_get_type(RID p_texture);
int texture_get_width(RID p_texture);
void texture_set_data(RID p_texture, Image p_image, int p_layer = (int) 0);
void texture_set_data_partial(RID p_texture, Image p_image, int p_src_x, int p_src_y, int p_src_w, int p_src_h, int p_dst_x, int p_dst_y, int p_dst_mip, int p_layer = (int) 0);
void texture_set_flags(RID p_texture, int p_flags);
void texture_set_path(RID p_texture, String p_path);
void texture_set_shrink_all_x2_on_set_data(bool p_shrink);
void texture_set_size_override(RID p_texture, int p_width, int p_height, int p_depth);
void textures_keep_original(bool p_enable);
void viewport_attach_camera(RID p_viewport, RID p_camera);
void viewport_attach_canvas(RID p_viewport, RID p_canvas);
void viewport_attach_to_screen(RID p_viewport, Rect2 p_rect = (Rect2) (0, 0, 0, 0), int p_screen = (int) 0);
RID viewport_create();
void viewport_detach(RID p_viewport);
int viewport_get_render_info(RID p_viewport, VisualServer::ViewportRenderInfo p_info);
RID viewport_get_texture(RID p_viewport);
void viewport_remove_canvas(RID p_viewport, RID p_canvas);
void viewport_set_active(RID p_viewport, bool p_active);
void viewport_set_canvas_stacking(RID p_viewport, RID p_canvas, int p_layer, int p_sublayer);
void viewport_set_canvas_transform(RID p_viewport, RID p_canvas, Transform2D p_offset);
void viewport_set_clear_mode(RID p_viewport, VisualServer::ViewportClearMode p_clear_mode);
void viewport_set_debug_draw(RID p_viewport, VisualServer::ViewportDebugDraw p_draw);
void viewport_set_disable_3d(RID p_viewport, bool p_disabled);
void viewport_set_disable_environment(RID p_viewport, bool p_disabled);
void viewport_set_global_canvas_transform(RID p_viewport, Transform2D p_transform);
void viewport_set_hdr(RID p_viewport, bool p_enabled);
void viewport_set_hide_canvas(RID p_viewport, bool p_hidden);
void viewport_set_hide_scenario(RID p_viewport, bool p_hidden);
void viewport_set_msaa(RID p_viewport, VisualServer::ViewportMSAA p_msaa);
void viewport_set_parent_viewport(RID p_viewport, RID p_parent_viewport);
void viewport_set_render_direct_to_screen(RID p_viewport, bool p_enabled);
void viewport_set_scenario(RID p_viewport, RID p_scenario);
void viewport_set_shadow_atlas_quadrant_subdivision(RID p_viewport, int p_quadrant, int p_subdivision);
void viewport_set_shadow_atlas_size(RID p_viewport, int p_size);
void viewport_set_size(RID p_viewport, int p_width, int p_height);
void viewport_set_transparent_background(RID p_viewport, bool p_enabled);
void viewport_set_update_mode(RID p_viewport, VisualServer::ViewportUpdateMode p_update_mode);
void viewport_set_usage(RID p_viewport, VisualServer::ViewportUsage p_usage);
void viewport_set_use_arvr(RID p_viewport, bool p_use_arvr);
void viewport_set_use_debanding(RID p_viewport, bool p_debanding);
void viewport_set_use_fxaa(RID p_viewport, bool p_fxaa);
void viewport_set_vflip(RID p_viewport, bool p_enabled);
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualServer_wrapper_black_bars_set_images(WasGoId wasgo_id, WasGo::WasGoId p_left, WasGo::WasGoId p_top, WasGo::WasGoId p_right, WasGo::WasGoId p_bottom);
void _wasgo_VisualServer_wrapper_black_bars_set_margins(WasGoId wasgo_id, int p_left, int p_top, int p_right, int p_bottom);
WasGo::WasGoId _wasgo_VisualServer_wrapper_camera_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_camera_set_cull_mask(WasGoId wasgo_id, WasGo::WasGoId p_camera, int p_layers);
void _wasgo_VisualServer_wrapper_camera_set_environment(WasGoId wasgo_id, WasGo::WasGoId p_camera, WasGo::WasGoId p_env);
void _wasgo_VisualServer_wrapper_camera_set_frustum(WasGoId wasgo_id, WasGo::WasGoId p_camera, float p_size, WasGo::WasGoId p_offset, float p_z_near, float p_z_far);
void _wasgo_VisualServer_wrapper_camera_set_orthogonal(WasGoId wasgo_id, WasGo::WasGoId p_camera, float p_size, float p_z_near, float p_z_far);
void _wasgo_VisualServer_wrapper_camera_set_perspective(WasGoId wasgo_id, WasGo::WasGoId p_camera, float p_fovy_degrees, float p_z_near, float p_z_far);
void _wasgo_VisualServer_wrapper_camera_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_camera, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_camera_set_use_vertical_aspect(WasGoId wasgo_id, WasGo::WasGoId p_camera, bool p_enable);
WasGo::WasGoId _wasgo_VisualServer_wrapper_canvas_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_canvas_item_add_circle(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_pos, float p_radius, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_canvas_item_add_clip_ignore(WasGoId wasgo_id, WasGo::WasGoId p_item, bool p_ignore);
void _wasgo_VisualServer_wrapper_canvas_item_add_line(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_from, WasGo::WasGoId p_to, WasGo::WasGoId p_color, float p_width, bool p_antialiased);
void _wasgo_VisualServer_wrapper_canvas_item_add_mesh(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_mesh, WasGo::WasGoId p_transform, WasGo::WasGoId p_modulate, WasGo::WasGoId p_texture, WasGo::WasGoId p_normal_map);
void _wasgo_VisualServer_wrapper_canvas_item_add_multimesh(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_mesh, WasGo::WasGoId p_texture, WasGo::WasGoId p_normal_map);
void _wasgo_VisualServer_wrapper_canvas_item_add_nine_patch(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_rect, WasGo::WasGoId p_source, WasGo::WasGoId p_texture, WasGo::WasGoId p_topleft, WasGo::WasGoId p_bottomright, WasGo::WasGoId p_x_axis_mode, WasGo::WasGoId p_y_axis_mode, bool p_draw_center, WasGo::WasGoId p_modulate, WasGo::WasGoId p_normal_map);
void _wasgo_VisualServer_wrapper_canvas_item_add_particles(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_particles, WasGo::WasGoId p_texture, WasGo::WasGoId p_normal_map);
void _wasgo_VisualServer_wrapper_canvas_item_add_polygon(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_points, WasGo::WasGoId p_colors, WasGo::WasGoId p_uvs, WasGo::WasGoId p_texture, WasGo::WasGoId p_normal_map, bool p_antialiased);
void _wasgo_VisualServer_wrapper_canvas_item_add_polyline(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_points, WasGo::WasGoId p_colors, float p_width, bool p_antialiased);
void _wasgo_VisualServer_wrapper_canvas_item_add_primitive(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_points, WasGo::WasGoId p_colors, WasGo::WasGoId p_uvs, WasGo::WasGoId p_texture, float p_width, WasGo::WasGoId p_normal_map);
void _wasgo_VisualServer_wrapper_canvas_item_add_rect(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_rect, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_canvas_item_add_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_canvas_item_add_texture_rect(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_rect, WasGo::WasGoId p_texture, bool p_tile, WasGo::WasGoId p_modulate, bool p_transpose, WasGo::WasGoId p_normal_map);
void _wasgo_VisualServer_wrapper_canvas_item_add_texture_rect_region(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_rect, WasGo::WasGoId p_texture, WasGo::WasGoId p_src_rect, WasGo::WasGoId p_modulate, bool p_transpose, WasGo::WasGoId p_normal_map, bool p_clip_uv);
void _wasgo_VisualServer_wrapper_canvas_item_add_triangle_array(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_indices, WasGo::WasGoId p_points, WasGo::WasGoId p_colors, WasGo::WasGoId p_uvs, WasGo::WasGoId p_bones, WasGo::WasGoId p_weights, WasGo::WasGoId p_texture, int p_count, WasGo::WasGoId p_normal_map, bool p_antialiased, bool p_antialiasing_use_indices);
void _wasgo_VisualServer_wrapper_canvas_item_clear(WasGoId wasgo_id, WasGo::WasGoId p_item);
WasGo::WasGoId _wasgo_VisualServer_wrapper_canvas_item_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_canvas_item_set_clip(WasGoId wasgo_id, WasGo::WasGoId p_item, bool p_clip);
void _wasgo_VisualServer_wrapper_canvas_item_set_copy_to_backbuffer(WasGoId wasgo_id, WasGo::WasGoId p_item, bool p_enabled, WasGo::WasGoId p_rect);
void _wasgo_VisualServer_wrapper_canvas_item_set_custom_rect(WasGoId wasgo_id, WasGo::WasGoId p_item, bool p_use_custom_rect, WasGo::WasGoId p_rect);
void _wasgo_VisualServer_wrapper_canvas_item_set_distance_field_mode(WasGoId wasgo_id, WasGo::WasGoId p_item, bool p_enabled);
void _wasgo_VisualServer_wrapper_canvas_item_set_draw_behind_parent(WasGoId wasgo_id, WasGo::WasGoId p_item, bool p_enabled);
void _wasgo_VisualServer_wrapper_canvas_item_set_draw_index(WasGoId wasgo_id, WasGo::WasGoId p_item, int p_index);
void _wasgo_VisualServer_wrapper_canvas_item_set_light_mask(WasGoId wasgo_id, WasGo::WasGoId p_item, int p_mask);
void _wasgo_VisualServer_wrapper_canvas_item_set_material(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_material);
void _wasgo_VisualServer_wrapper_canvas_item_set_modulate(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_canvas_item_set_parent(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_parent);
void _wasgo_VisualServer_wrapper_canvas_item_set_self_modulate(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_canvas_item_set_sort_children_by_y(WasGoId wasgo_id, WasGo::WasGoId p_item, bool p_enabled);
void _wasgo_VisualServer_wrapper_canvas_item_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_item, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_canvas_item_set_use_parent_material(WasGoId wasgo_id, WasGo::WasGoId p_item, bool p_enabled);
void _wasgo_VisualServer_wrapper_canvas_item_set_visible(WasGoId wasgo_id, WasGo::WasGoId p_item, bool p_visible);
void _wasgo_VisualServer_wrapper_canvas_item_set_z_as_relative_to_parent(WasGoId wasgo_id, WasGo::WasGoId p_item, bool p_enabled);
void _wasgo_VisualServer_wrapper_canvas_item_set_z_index(WasGoId wasgo_id, WasGo::WasGoId p_item, int p_z_index);
void _wasgo_VisualServer_wrapper_canvas_light_attach_to_canvas(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_canvas);
WasGo::WasGoId _wasgo_VisualServer_wrapper_canvas_light_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_canvas_light_occluder_attach_to_canvas(WasGoId wasgo_id, WasGo::WasGoId p_occluder, WasGo::WasGoId p_canvas);
WasGo::WasGoId _wasgo_VisualServer_wrapper_canvas_light_occluder_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_canvas_light_occluder_set_enabled(WasGoId wasgo_id, WasGo::WasGoId p_occluder, bool p_enabled);
void _wasgo_VisualServer_wrapper_canvas_light_occluder_set_light_mask(WasGoId wasgo_id, WasGo::WasGoId p_occluder, int p_mask);
void _wasgo_VisualServer_wrapper_canvas_light_occluder_set_polygon(WasGoId wasgo_id, WasGo::WasGoId p_occluder, WasGo::WasGoId p_polygon);
void _wasgo_VisualServer_wrapper_canvas_light_occluder_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_occluder, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_canvas_light_set_color(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_canvas_light_set_enabled(WasGoId wasgo_id, WasGo::WasGoId p_light, bool p_enabled);
void _wasgo_VisualServer_wrapper_canvas_light_set_energy(WasGoId wasgo_id, WasGo::WasGoId p_light, float p_energy);
void _wasgo_VisualServer_wrapper_canvas_light_set_height(WasGoId wasgo_id, WasGo::WasGoId p_light, float p_height);
void _wasgo_VisualServer_wrapper_canvas_light_set_item_cull_mask(WasGoId wasgo_id, WasGo::WasGoId p_light, int p_mask);
void _wasgo_VisualServer_wrapper_canvas_light_set_item_shadow_cull_mask(WasGoId wasgo_id, WasGo::WasGoId p_light, int p_mask);
void _wasgo_VisualServer_wrapper_canvas_light_set_layer_range(WasGoId wasgo_id, WasGo::WasGoId p_light, int p_min_layer, int p_max_layer);
void _wasgo_VisualServer_wrapper_canvas_light_set_mode(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_mode);
void _wasgo_VisualServer_wrapper_canvas_light_set_scale(WasGoId wasgo_id, WasGo::WasGoId p_light, float p_scale);
void _wasgo_VisualServer_wrapper_canvas_light_set_shadow_buffer_size(WasGoId wasgo_id, WasGo::WasGoId p_light, int p_size);
void _wasgo_VisualServer_wrapper_canvas_light_set_shadow_color(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_canvas_light_set_shadow_enabled(WasGoId wasgo_id, WasGo::WasGoId p_light, bool p_enabled);
void _wasgo_VisualServer_wrapper_canvas_light_set_shadow_filter(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_filter);
void _wasgo_VisualServer_wrapper_canvas_light_set_shadow_gradient_length(WasGoId wasgo_id, WasGo::WasGoId p_light, float p_length);
void _wasgo_VisualServer_wrapper_canvas_light_set_shadow_smooth(WasGoId wasgo_id, WasGo::WasGoId p_light, float p_smooth);
void _wasgo_VisualServer_wrapper_canvas_light_set_texture(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_texture);
void _wasgo_VisualServer_wrapper_canvas_light_set_texture_offset(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_offset);
void _wasgo_VisualServer_wrapper_canvas_light_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_canvas_light_set_z_range(WasGoId wasgo_id, WasGo::WasGoId p_light, int p_min_z, int p_max_z);
WasGo::WasGoId _wasgo_VisualServer_wrapper_canvas_occluder_polygon_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_canvas_occluder_polygon_set_cull_mode(WasGoId wasgo_id, WasGo::WasGoId p_occluder_polygon, WasGo::WasGoId p_mode);
void _wasgo_VisualServer_wrapper_canvas_occluder_polygon_set_shape(WasGoId wasgo_id, WasGo::WasGoId p_occluder_polygon, WasGo::WasGoId p_shape, bool p_closed);
void _wasgo_VisualServer_wrapper_canvas_occluder_polygon_set_shape_as_lines(WasGoId wasgo_id, WasGo::WasGoId p_occluder_polygon, WasGo::WasGoId p_shape);
void _wasgo_VisualServer_wrapper_canvas_set_item_mirroring(WasGoId wasgo_id, WasGo::WasGoId p_canvas, WasGo::WasGoId p_item, WasGo::WasGoId p_mirroring);
void _wasgo_VisualServer_wrapper_canvas_set_modulate(WasGoId wasgo_id, WasGo::WasGoId p_canvas, WasGo::WasGoId p_color);
WasGo::WasGoId _wasgo_VisualServer_wrapper_directional_light_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_draw(WasGoId wasgo_id, bool p_swap_buffers, float p_frame_step);
WasGo::WasGoId _wasgo_VisualServer_wrapper_environment_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_environment_set_adjustment(WasGoId wasgo_id, WasGo::WasGoId p_env, bool p_enable, float p_brightness, float p_contrast, float p_saturation, WasGo::WasGoId p_ramp);
void _wasgo_VisualServer_wrapper_environment_set_ambient_light(WasGoId wasgo_id, WasGo::WasGoId p_env, WasGo::WasGoId p_color, float p_energy, float p_sky_contibution);
void _wasgo_VisualServer_wrapper_environment_set_background(WasGoId wasgo_id, WasGo::WasGoId p_env, WasGo::WasGoId p_bg);
void _wasgo_VisualServer_wrapper_environment_set_bg_color(WasGoId wasgo_id, WasGo::WasGoId p_env, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_environment_set_bg_energy(WasGoId wasgo_id, WasGo::WasGoId p_env, float p_energy);
void _wasgo_VisualServer_wrapper_environment_set_canvas_max_layer(WasGoId wasgo_id, WasGo::WasGoId p_env, int p_max_layer);
void _wasgo_VisualServer_wrapper_environment_set_dof_blur_far(WasGoId wasgo_id, WasGo::WasGoId p_env, bool p_enable, float p_distance, float p_transition, float p_far_amount, WasGo::WasGoId p_quality);
void _wasgo_VisualServer_wrapper_environment_set_dof_blur_near(WasGoId wasgo_id, WasGo::WasGoId p_env, bool p_enable, float p_distance, float p_transition, float p_far_amount, WasGo::WasGoId p_quality);
void _wasgo_VisualServer_wrapper_environment_set_fog(WasGoId wasgo_id, WasGo::WasGoId p_env, bool p_enable, WasGo::WasGoId p_color, WasGo::WasGoId p_sun_color, float p_sun_amount);
void _wasgo_VisualServer_wrapper_environment_set_fog_depth(WasGoId wasgo_id, WasGo::WasGoId p_env, bool p_enable, float p_depth_begin, float p_depth_end, float p_depth_curve, bool p_transmit, float p_transmit_curve);
void _wasgo_VisualServer_wrapper_environment_set_fog_height(WasGoId wasgo_id, WasGo::WasGoId p_env, bool p_enable, float p_min_height, float p_max_height, float p_height_curve);
void _wasgo_VisualServer_wrapper_environment_set_glow(WasGoId wasgo_id, WasGo::WasGoId p_env, bool p_enable, int p_level_flags, float p_intensity, float p_strength, float p_bloom_threshold, WasGo::WasGoId p_blend_mode, float p_hdr_bleed_threshold, float p_hdr_bleed_scale, float p_hdr_luminance_cap, bool p_bicubic_upscale);
void _wasgo_VisualServer_wrapper_environment_set_sky(WasGoId wasgo_id, WasGo::WasGoId p_env, WasGo::WasGoId p_sky);
void _wasgo_VisualServer_wrapper_environment_set_sky_custom_fov(WasGoId wasgo_id, WasGo::WasGoId p_env, float p_scale);
void _wasgo_VisualServer_wrapper_environment_set_sky_orientation(WasGoId wasgo_id, WasGo::WasGoId p_env, WasGo::WasGoId p_orientation);
void _wasgo_VisualServer_wrapper_environment_set_ssao(WasGoId wasgo_id, WasGo::WasGoId p_env, bool p_enable, float p_radius, float p_intensity, float p_radius2, float p_intensity2, float p_bias, float p_light_affect, float p_ao_channel_affect, WasGo::WasGoId p_color, WasGo::WasGoId p_quality, WasGo::WasGoId p_blur, float p_bilateral_sharpness);
void _wasgo_VisualServer_wrapper_environment_set_ssr(WasGoId wasgo_id, WasGo::WasGoId p_env, bool p_enable, int p_max_steps, float p_fade_in, float p_fade_out, float p_depth_tolerance, bool p_roughness);
void _wasgo_VisualServer_wrapper_environment_set_tonemap(WasGoId wasgo_id, WasGo::WasGoId p_env, WasGo::WasGoId p_tone_mapper, float p_exposure, float p_white, bool p_auto_exposure, float p_min_luminance, float p_max_luminance, float p_auto_exp_speed, float p_auto_exp_grey);
void _wasgo_VisualServer_wrapper_finish(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_force_draw(WasGoId wasgo_id, bool p_swap_buffers, float p_frame_step);
void _wasgo_VisualServer_wrapper_force_sync(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_free_rid(WasGoId wasgo_id, WasGo::WasGoId p_rid);
int _wasgo_VisualServer_wrapper_get_render_info(WasGoId wasgo_id, WasGo::WasGoId p_info);
WasGo::WasGoId _wasgo_VisualServer_wrapper_get_test_cube(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_get_test_texture(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_get_video_adapter_name(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_get_video_adapter_vendor(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_get_white_texture(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_gi_probe_create(WasGoId wasgo_id);
float _wasgo_VisualServer_wrapper_gi_probe_get_bias(WasGoId wasgo_id, WasGo::WasGoId p_probe);
WasGo::WasGoId _wasgo_VisualServer_wrapper_gi_probe_get_bounds(WasGoId wasgo_id, WasGo::WasGoId p_probe);
float _wasgo_VisualServer_wrapper_gi_probe_get_cell_size(WasGoId wasgo_id, WasGo::WasGoId p_probe);
WasGo::WasGoId _wasgo_VisualServer_wrapper_gi_probe_get_dynamic_data(WasGoId wasgo_id, WasGo::WasGoId p_probe);
int _wasgo_VisualServer_wrapper_gi_probe_get_dynamic_range(WasGoId wasgo_id, WasGo::WasGoId p_probe);
float _wasgo_VisualServer_wrapper_gi_probe_get_energy(WasGoId wasgo_id, WasGo::WasGoId p_probe);
float _wasgo_VisualServer_wrapper_gi_probe_get_normal_bias(WasGoId wasgo_id, WasGo::WasGoId p_probe);
float _wasgo_VisualServer_wrapper_gi_probe_get_propagation(WasGoId wasgo_id, WasGo::WasGoId p_probe);
WasGo::WasGoId _wasgo_VisualServer_wrapper_gi_probe_get_to_cell_xform(WasGoId wasgo_id, WasGo::WasGoId p_probe);
int _wasgo_VisualServer_wrapper_gi_probe_is_compressed(WasGoId wasgo_id, WasGo::WasGoId p_probe);
int _wasgo_VisualServer_wrapper_gi_probe_is_interior(WasGoId wasgo_id, WasGo::WasGoId p_probe);
void _wasgo_VisualServer_wrapper_gi_probe_set_bias(WasGoId wasgo_id, WasGo::WasGoId p_probe, float p_bias);
void _wasgo_VisualServer_wrapper_gi_probe_set_bounds(WasGoId wasgo_id, WasGo::WasGoId p_probe, WasGo::WasGoId p_bounds);
void _wasgo_VisualServer_wrapper_gi_probe_set_cell_size(WasGoId wasgo_id, WasGo::WasGoId p_probe, float p_range);
void _wasgo_VisualServer_wrapper_gi_probe_set_compress(WasGoId wasgo_id, WasGo::WasGoId p_probe, bool p_enable);
void _wasgo_VisualServer_wrapper_gi_probe_set_dynamic_data(WasGoId wasgo_id, WasGo::WasGoId p_probe, WasGo::WasGoId p_data);
void _wasgo_VisualServer_wrapper_gi_probe_set_dynamic_range(WasGoId wasgo_id, WasGo::WasGoId p_probe, int p_range);
void _wasgo_VisualServer_wrapper_gi_probe_set_energy(WasGoId wasgo_id, WasGo::WasGoId p_probe, float p_energy);
void _wasgo_VisualServer_wrapper_gi_probe_set_interior(WasGoId wasgo_id, WasGo::WasGoId p_probe, bool p_enable);
void _wasgo_VisualServer_wrapper_gi_probe_set_normal_bias(WasGoId wasgo_id, WasGo::WasGoId p_probe, float p_bias);
void _wasgo_VisualServer_wrapper_gi_probe_set_propagation(WasGoId wasgo_id, WasGo::WasGoId p_probe, float p_propagation);
void _wasgo_VisualServer_wrapper_gi_probe_set_to_cell_xform(WasGoId wasgo_id, WasGo::WasGoId p_probe, WasGo::WasGoId p_xform);
int _wasgo_VisualServer_wrapper_has_changed(WasGoId wasgo_id);
int _wasgo_VisualServer_wrapper_has_feature(WasGoId wasgo_id, WasGo::WasGoId p_feature);
int _wasgo_VisualServer_wrapper_has_os_feature(WasGoId wasgo_id, WasGo::WasGoId p_feature);
void _wasgo_VisualServer_wrapper_immediate_begin(WasGoId wasgo_id, WasGo::WasGoId p_immediate, WasGo::WasGoId p_primitive, WasGo::WasGoId p_texture);
void _wasgo_VisualServer_wrapper_immediate_clear(WasGoId wasgo_id, WasGo::WasGoId p_immediate);
void _wasgo_VisualServer_wrapper_immediate_color(WasGoId wasgo_id, WasGo::WasGoId p_immediate, WasGo::WasGoId p_color);
WasGo::WasGoId _wasgo_VisualServer_wrapper_immediate_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_immediate_end(WasGoId wasgo_id, WasGo::WasGoId p_immediate);
WasGo::WasGoId _wasgo_VisualServer_wrapper_immediate_get_material(WasGoId wasgo_id, WasGo::WasGoId p_immediate);
void _wasgo_VisualServer_wrapper_immediate_normal(WasGoId wasgo_id, WasGo::WasGoId p_immediate, WasGo::WasGoId p_normal);
void _wasgo_VisualServer_wrapper_immediate_set_material(WasGoId wasgo_id, WasGo::WasGoId p_immediate, WasGo::WasGoId p_material);
void _wasgo_VisualServer_wrapper_immediate_tangent(WasGoId wasgo_id, WasGo::WasGoId p_immediate, WasGo::WasGoId p_tangent);
void _wasgo_VisualServer_wrapper_immediate_uv(WasGoId wasgo_id, WasGo::WasGoId p_immediate, WasGo::WasGoId p_tex_uv);
void _wasgo_VisualServer_wrapper_immediate_uv2(WasGoId wasgo_id, WasGo::WasGoId p_immediate, WasGo::WasGoId p_tex_uv);
void _wasgo_VisualServer_wrapper_immediate_vertex(WasGoId wasgo_id, WasGo::WasGoId p_immediate, WasGo::WasGoId p_vertex);
void _wasgo_VisualServer_wrapper_immediate_vertex_2d(WasGoId wasgo_id, WasGo::WasGoId p_immediate, WasGo::WasGoId p_vertex);
void _wasgo_VisualServer_wrapper_init(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_instance_attach_object_instance_id(WasGoId wasgo_id, WasGo::WasGoId p_instance, int p_id);
void _wasgo_VisualServer_wrapper_instance_attach_skeleton(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_skeleton);
WasGo::WasGoId _wasgo_VisualServer_wrapper_instance_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_instance_create2(WasGoId wasgo_id, WasGo::WasGoId p_base, WasGo::WasGoId p_scenario);
void _wasgo_VisualServer_wrapper_instance_geometry_set_as_instance_lod(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_as_lod_of_instance);
void _wasgo_VisualServer_wrapper_instance_geometry_set_cast_shadows_setting(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_shadow_casting_setting);
void _wasgo_VisualServer_wrapper_instance_geometry_set_draw_range(WasGoId wasgo_id, WasGo::WasGoId p_instance, float p_min, float p_max, float p_min_margin, float p_max_margin);
void _wasgo_VisualServer_wrapper_instance_geometry_set_flag(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_flag, bool p_enabled);
void _wasgo_VisualServer_wrapper_instance_geometry_set_material_override(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_material);
void _wasgo_VisualServer_wrapper_instance_set_base(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_base);
void _wasgo_VisualServer_wrapper_instance_set_blend_shape_weight(WasGoId wasgo_id, WasGo::WasGoId p_instance, int p_shape, float p_weight);
void _wasgo_VisualServer_wrapper_instance_set_custom_aabb(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_aabb);
void _wasgo_VisualServer_wrapper_instance_set_exterior(WasGoId wasgo_id, WasGo::WasGoId p_instance, bool p_enabled);
void _wasgo_VisualServer_wrapper_instance_set_extra_visibility_margin(WasGoId wasgo_id, WasGo::WasGoId p_instance, float p_margin);
void _wasgo_VisualServer_wrapper_instance_set_layer_mask(WasGoId wasgo_id, WasGo::WasGoId p_instance, int p_mask);
void _wasgo_VisualServer_wrapper_instance_set_scenario(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_scenario);
void _wasgo_VisualServer_wrapper_instance_set_surface_material(WasGoId wasgo_id, WasGo::WasGoId p_instance, int p_surface, WasGo::WasGoId p_material);
void _wasgo_VisualServer_wrapper_instance_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_instance_set_use_lightmap(WasGoId wasgo_id, WasGo::WasGoId p_instance, WasGo::WasGoId p_lightmap_instance, WasGo::WasGoId p_lightmap);
void _wasgo_VisualServer_wrapper_instance_set_visible(WasGoId wasgo_id, WasGo::WasGoId p_instance, bool p_visible);
WasGo::WasGoId _wasgo_VisualServer_wrapper_instances_cull_aabb(WasGoId wasgo_id, WasGo::WasGoId p_aabb, WasGo::WasGoId p_scenario);
WasGo::WasGoId _wasgo_VisualServer_wrapper_instances_cull_convex(WasGoId wasgo_id, WasGo::WasGoId p_convex, WasGo::WasGoId p_scenario);
WasGo::WasGoId _wasgo_VisualServer_wrapper_instances_cull_ray(WasGoId wasgo_id, WasGo::WasGoId p_from, WasGo::WasGoId p_to, WasGo::WasGoId p_scenario);
int _wasgo_VisualServer_wrapper_is_render_loop_enabled(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_light_directional_set_blend_splits(WasGoId wasgo_id, WasGo::WasGoId p_light, bool p_enable);
void _wasgo_VisualServer_wrapper_light_directional_set_shadow_depth_range_mode(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_range_mode);
void _wasgo_VisualServer_wrapper_light_directional_set_shadow_mode(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_mode);
void _wasgo_VisualServer_wrapper_light_omni_set_shadow_detail(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_detail);
void _wasgo_VisualServer_wrapper_light_omni_set_shadow_mode(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_mode);
void _wasgo_VisualServer_wrapper_light_set_bake_mode(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_bake_mode);
void _wasgo_VisualServer_wrapper_light_set_color(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_light_set_cull_mask(WasGoId wasgo_id, WasGo::WasGoId p_light, int p_mask);
void _wasgo_VisualServer_wrapper_light_set_negative(WasGoId wasgo_id, WasGo::WasGoId p_light, bool p_enable);
void _wasgo_VisualServer_wrapper_light_set_param(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_param, float p_value);
void _wasgo_VisualServer_wrapper_light_set_projector(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_texture);
void _wasgo_VisualServer_wrapper_light_set_reverse_cull_face_mode(WasGoId wasgo_id, WasGo::WasGoId p_light, bool p_enabled);
void _wasgo_VisualServer_wrapper_light_set_shadow(WasGoId wasgo_id, WasGo::WasGoId p_light, bool p_enabled);
void _wasgo_VisualServer_wrapper_light_set_shadow_color(WasGoId wasgo_id, WasGo::WasGoId p_light, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_light_set_use_gi(WasGoId wasgo_id, WasGo::WasGoId p_light, bool p_enabled);
WasGo::WasGoId _wasgo_VisualServer_wrapper_lightmap_capture_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_lightmap_capture_get_bounds(WasGoId wasgo_id, WasGo::WasGoId p_capture);
float _wasgo_VisualServer_wrapper_lightmap_capture_get_energy(WasGoId wasgo_id, WasGo::WasGoId p_capture);
WasGo::WasGoId _wasgo_VisualServer_wrapper_lightmap_capture_get_octree(WasGoId wasgo_id, WasGo::WasGoId p_capture);
int _wasgo_VisualServer_wrapper_lightmap_capture_get_octree_cell_subdiv(WasGoId wasgo_id, WasGo::WasGoId p_capture);
WasGo::WasGoId _wasgo_VisualServer_wrapper_lightmap_capture_get_octree_cell_transform(WasGoId wasgo_id, WasGo::WasGoId p_capture);
void _wasgo_VisualServer_wrapper_lightmap_capture_set_bounds(WasGoId wasgo_id, WasGo::WasGoId p_capture, WasGo::WasGoId p_bounds);
void _wasgo_VisualServer_wrapper_lightmap_capture_set_energy(WasGoId wasgo_id, WasGo::WasGoId p_capture, float p_energy);
void _wasgo_VisualServer_wrapper_lightmap_capture_set_octree(WasGoId wasgo_id, WasGo::WasGoId p_capture, WasGo::WasGoId p_octree);
void _wasgo_VisualServer_wrapper_lightmap_capture_set_octree_cell_subdiv(WasGoId wasgo_id, WasGo::WasGoId p_capture, int p_subdiv);
void _wasgo_VisualServer_wrapper_lightmap_capture_set_octree_cell_transform(WasGoId wasgo_id, WasGo::WasGoId p_capture, WasGo::WasGoId p_xform);
WasGo::WasGoId _wasgo_VisualServer_wrapper_make_sphere_mesh(WasGoId wasgo_id, int p_latitudes, int p_longitudes, float p_radius);
WasGo::WasGoId _wasgo_VisualServer_wrapper_material_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_material_get_param(WasGoId wasgo_id, WasGo::WasGoId p_material, WasGo::WasGoId p_parameter);
WasGo::WasGoId _wasgo_VisualServer_wrapper_material_get_param_default(WasGoId wasgo_id, WasGo::WasGoId p_material, WasGo::WasGoId p_parameter);
WasGo::WasGoId _wasgo_VisualServer_wrapper_material_get_shader(WasGoId wasgo_id, WasGo::WasGoId p_shader_material);
void _wasgo_VisualServer_wrapper_material_set_line_width(WasGoId wasgo_id, WasGo::WasGoId p_material, float p_width);
void _wasgo_VisualServer_wrapper_material_set_next_pass(WasGoId wasgo_id, WasGo::WasGoId p_material, WasGo::WasGoId p_next_material);
void _wasgo_VisualServer_wrapper_material_set_param(WasGoId wasgo_id, WasGo::WasGoId p_material, WasGo::WasGoId p_parameter, WasGo::WasGoId p_value);
void _wasgo_VisualServer_wrapper_material_set_render_priority(WasGoId wasgo_id, WasGo::WasGoId p_material, int p_priority);
void _wasgo_VisualServer_wrapper_material_set_shader(WasGoId wasgo_id, WasGo::WasGoId p_shader_material, WasGo::WasGoId p_shader);
void _wasgo_VisualServer_wrapper_mesh_add_surface_from_arrays(WasGoId wasgo_id, WasGo::WasGoId p_mesh, WasGo::WasGoId p_primitive, WasGo::WasGoId p_arrays, WasGo::WasGoId p_blend_shapes, int p_compress_format);
void _wasgo_VisualServer_wrapper_mesh_clear(WasGoId wasgo_id, WasGo::WasGoId p_mesh);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_create(WasGoId wasgo_id);
int _wasgo_VisualServer_wrapper_mesh_get_blend_shape_count(WasGoId wasgo_id, WasGo::WasGoId p_mesh);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_get_blend_shape_mode(WasGoId wasgo_id, WasGo::WasGoId p_mesh);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_get_custom_aabb(WasGoId wasgo_id, WasGo::WasGoId p_mesh);
int _wasgo_VisualServer_wrapper_mesh_get_surface_count(WasGoId wasgo_id, WasGo::WasGoId p_mesh);
void _wasgo_VisualServer_wrapper_mesh_remove_surface(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_index);
void _wasgo_VisualServer_wrapper_mesh_set_blend_shape_count(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_amount);
void _wasgo_VisualServer_wrapper_mesh_set_blend_shape_mode(WasGoId wasgo_id, WasGo::WasGoId p_mesh, WasGo::WasGoId p_mode);
void _wasgo_VisualServer_wrapper_mesh_set_custom_aabb(WasGoId wasgo_id, WasGo::WasGoId p_mesh, WasGo::WasGoId p_aabb);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_surface_get_aabb(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_surface_get_array(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
int _wasgo_VisualServer_wrapper_mesh_surface_get_array_index_len(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
int _wasgo_VisualServer_wrapper_mesh_surface_get_array_len(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_surface_get_arrays(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_surface_get_blend_shape_arrays(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
int _wasgo_VisualServer_wrapper_mesh_surface_get_format(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
int _wasgo_VisualServer_wrapper_mesh_surface_get_format_offset(WasGoId wasgo_id, int p_format, int p_vertex_len, int p_index_len, int p_array_index);
int _wasgo_VisualServer_wrapper_mesh_surface_get_format_stride(WasGoId wasgo_id, int p_format, int p_vertex_len, int p_index_len);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_surface_get_index_array(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_surface_get_material(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_surface_get_primitive_type(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
WasGo::WasGoId _wasgo_VisualServer_wrapper_mesh_surface_get_skeleton_aabb(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface);
void _wasgo_VisualServer_wrapper_mesh_surface_set_material(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface, WasGo::WasGoId p_material);
void _wasgo_VisualServer_wrapper_mesh_surface_update_region(WasGoId wasgo_id, WasGo::WasGoId p_mesh, int p_surface, int p_offset, WasGo::WasGoId p_data);
void _wasgo_VisualServer_wrapper_multimesh_allocate(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, int p_instances, WasGo::WasGoId p_transform_format, WasGo::WasGoId p_color_format, WasGo::WasGoId p_custom_data_format);
WasGo::WasGoId _wasgo_VisualServer_wrapper_multimesh_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_multimesh_get_aabb(WasGoId wasgo_id, WasGo::WasGoId p_multimesh);
int _wasgo_VisualServer_wrapper_multimesh_get_instance_count(WasGoId wasgo_id, WasGo::WasGoId p_multimesh);
WasGo::WasGoId _wasgo_VisualServer_wrapper_multimesh_get_mesh(WasGoId wasgo_id, WasGo::WasGoId p_multimesh);
int _wasgo_VisualServer_wrapper_multimesh_get_visible_instances(WasGoId wasgo_id, WasGo::WasGoId p_multimesh);
WasGo::WasGoId _wasgo_VisualServer_wrapper_multimesh_instance_get_color(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, int p_index);
WasGo::WasGoId _wasgo_VisualServer_wrapper_multimesh_instance_get_custom_data(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, int p_index);
WasGo::WasGoId _wasgo_VisualServer_wrapper_multimesh_instance_get_transform(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, int p_index);
WasGo::WasGoId _wasgo_VisualServer_wrapper_multimesh_instance_get_transform_2d(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, int p_index);
void _wasgo_VisualServer_wrapper_multimesh_instance_set_color(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, int p_index, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_multimesh_instance_set_custom_data(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, int p_index, WasGo::WasGoId p_custom_data);
void _wasgo_VisualServer_wrapper_multimesh_instance_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, int p_index, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_multimesh_instance_set_transform_2d(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, int p_index, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_multimesh_set_as_bulk_array(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, WasGo::WasGoId p_array);
void _wasgo_VisualServer_wrapper_multimesh_set_mesh(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, WasGo::WasGoId p_mesh);
void _wasgo_VisualServer_wrapper_multimesh_set_visible_instances(WasGoId wasgo_id, WasGo::WasGoId p_multimesh, int p_visible);
WasGo::WasGoId _wasgo_VisualServer_wrapper_omni_light_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_particles_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_particles_get_current_aabb(WasGoId wasgo_id, WasGo::WasGoId p_particles);
int _wasgo_VisualServer_wrapper_particles_get_emitting(WasGoId wasgo_id, WasGo::WasGoId p_particles);
int _wasgo_VisualServer_wrapper_particles_is_inactive(WasGoId wasgo_id, WasGo::WasGoId p_particles);
void _wasgo_VisualServer_wrapper_particles_request_process(WasGoId wasgo_id, WasGo::WasGoId p_particles);
void _wasgo_VisualServer_wrapper_particles_restart(WasGoId wasgo_id, WasGo::WasGoId p_particles);
void _wasgo_VisualServer_wrapper_particles_set_amount(WasGoId wasgo_id, WasGo::WasGoId p_particles, int p_amount);
void _wasgo_VisualServer_wrapper_particles_set_custom_aabb(WasGoId wasgo_id, WasGo::WasGoId p_particles, WasGo::WasGoId p_aabb);
void _wasgo_VisualServer_wrapper_particles_set_draw_order(WasGoId wasgo_id, WasGo::WasGoId p_particles, WasGo::WasGoId p_order);
void _wasgo_VisualServer_wrapper_particles_set_draw_pass_mesh(WasGoId wasgo_id, WasGo::WasGoId p_particles, int p_pass, WasGo::WasGoId p_mesh);
void _wasgo_VisualServer_wrapper_particles_set_draw_passes(WasGoId wasgo_id, WasGo::WasGoId p_particles, int p_count);
void _wasgo_VisualServer_wrapper_particles_set_emission_transform(WasGoId wasgo_id, WasGo::WasGoId p_particles, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_particles_set_emitting(WasGoId wasgo_id, WasGo::WasGoId p_particles, bool p_emitting);
void _wasgo_VisualServer_wrapper_particles_set_explosiveness_ratio(WasGoId wasgo_id, WasGo::WasGoId p_particles, float p_ratio);
void _wasgo_VisualServer_wrapper_particles_set_fixed_fps(WasGoId wasgo_id, WasGo::WasGoId p_particles, int p_fps);
void _wasgo_VisualServer_wrapper_particles_set_fractional_delta(WasGoId wasgo_id, WasGo::WasGoId p_particles, bool p_enable);
void _wasgo_VisualServer_wrapper_particles_set_lifetime(WasGoId wasgo_id, WasGo::WasGoId p_particles, float p_lifetime);
void _wasgo_VisualServer_wrapper_particles_set_one_shot(WasGoId wasgo_id, WasGo::WasGoId p_particles, bool p_one_shot);
void _wasgo_VisualServer_wrapper_particles_set_pre_process_time(WasGoId wasgo_id, WasGo::WasGoId p_particles, float p_time);
void _wasgo_VisualServer_wrapper_particles_set_process_material(WasGoId wasgo_id, WasGo::WasGoId p_particles, WasGo::WasGoId p_material);
void _wasgo_VisualServer_wrapper_particles_set_randomness_ratio(WasGoId wasgo_id, WasGo::WasGoId p_particles, float p_ratio);
void _wasgo_VisualServer_wrapper_particles_set_speed_scale(WasGoId wasgo_id, WasGo::WasGoId p_particles, float p_scale);
void _wasgo_VisualServer_wrapper_particles_set_use_local_coordinates(WasGoId wasgo_id, WasGo::WasGoId p_particles, bool p_enable);
WasGo::WasGoId _wasgo_VisualServer_wrapper_reflection_probe_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_reflection_probe_set_as_interior(WasGoId wasgo_id, WasGo::WasGoId p_probe, bool p_enable);
void _wasgo_VisualServer_wrapper_reflection_probe_set_cull_mask(WasGoId wasgo_id, WasGo::WasGoId p_probe, int p_layers);
void _wasgo_VisualServer_wrapper_reflection_probe_set_enable_box_projection(WasGoId wasgo_id, WasGo::WasGoId p_probe, bool p_enable);
void _wasgo_VisualServer_wrapper_reflection_probe_set_enable_shadows(WasGoId wasgo_id, WasGo::WasGoId p_probe, bool p_enable);
void _wasgo_VisualServer_wrapper_reflection_probe_set_extents(WasGoId wasgo_id, WasGo::WasGoId p_probe, WasGo::WasGoId p_extents);
void _wasgo_VisualServer_wrapper_reflection_probe_set_intensity(WasGoId wasgo_id, WasGo::WasGoId p_probe, float p_intensity);
void _wasgo_VisualServer_wrapper_reflection_probe_set_interior_ambient(WasGoId wasgo_id, WasGo::WasGoId p_probe, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_reflection_probe_set_interior_ambient_energy(WasGoId wasgo_id, WasGo::WasGoId p_probe, float p_energy);
void _wasgo_VisualServer_wrapper_reflection_probe_set_interior_ambient_probe_contribution(WasGoId wasgo_id, WasGo::WasGoId p_probe, float p_contrib);
void _wasgo_VisualServer_wrapper_reflection_probe_set_max_distance(WasGoId wasgo_id, WasGo::WasGoId p_probe, float p_distance);
void _wasgo_VisualServer_wrapper_reflection_probe_set_origin_offset(WasGoId wasgo_id, WasGo::WasGoId p_probe, WasGo::WasGoId p_offset);
void _wasgo_VisualServer_wrapper_reflection_probe_set_update_mode(WasGoId wasgo_id, WasGo::WasGoId p_probe, WasGo::WasGoId p_mode);
void _wasgo_VisualServer_wrapper_request_frame_drawn_callback(WasGoId wasgo_id, WasGo::WasGoId p_where, WasGo::WasGoId p_method, WasGo::WasGoId p_userdata);
WasGo::WasGoId _wasgo_VisualServer_wrapper_scenario_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_scenario_set_debug(WasGoId wasgo_id, WasGo::WasGoId p_scenario, WasGo::WasGoId p_debug_mode);
void _wasgo_VisualServer_wrapper_scenario_set_environment(WasGoId wasgo_id, WasGo::WasGoId p_scenario, WasGo::WasGoId p_environment);
void _wasgo_VisualServer_wrapper_scenario_set_fallback_environment(WasGoId wasgo_id, WasGo::WasGoId p_scenario, WasGo::WasGoId p_environment);
void _wasgo_VisualServer_wrapper_scenario_set_reflection_atlas_size(WasGoId wasgo_id, WasGo::WasGoId p_scenario, int p_size, int p_subdiv);
void _wasgo_VisualServer_wrapper_set_boot_image(WasGoId wasgo_id, WasGo::WasGoId p_image, WasGo::WasGoId p_color, bool p_scale, bool p_use_filter);
void _wasgo_VisualServer_wrapper_set_debug_generate_wireframes(WasGoId wasgo_id, bool p_generate);
void _wasgo_VisualServer_wrapper_set_default_clear_color(WasGoId wasgo_id, WasGo::WasGoId p_color);
void _wasgo_VisualServer_wrapper_set_render_loop_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_VisualServer_wrapper_set_shader_time_scale(WasGoId wasgo_id, float p_scale);
WasGo::WasGoId _wasgo_VisualServer_wrapper_shader_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_shader_get_code(WasGoId wasgo_id, WasGo::WasGoId p_shader);
WasGo::WasGoId _wasgo_VisualServer_wrapper_shader_get_default_texture_param(WasGoId wasgo_id, WasGo::WasGoId p_shader, WasGo::WasGoId p_name);
WasGo::WasGoId _wasgo_VisualServer_wrapper_shader_get_param_list(WasGoId wasgo_id, WasGo::WasGoId p_shader);
void _wasgo_VisualServer_wrapper_shader_set_code(WasGoId wasgo_id, WasGo::WasGoId p_shader, WasGo::WasGoId p_code);
void _wasgo_VisualServer_wrapper_shader_set_default_texture_param(WasGoId wasgo_id, WasGo::WasGoId p_shader, WasGo::WasGoId p_name, WasGo::WasGoId p_texture);
void _wasgo_VisualServer_wrapper_skeleton_allocate(WasGoId wasgo_id, WasGo::WasGoId p_skeleton, int p_bones, bool p_is_2d_skeleton);
WasGo::WasGoId _wasgo_VisualServer_wrapper_skeleton_bone_get_transform(WasGoId wasgo_id, WasGo::WasGoId p_skeleton, int p_bone);
WasGo::WasGoId _wasgo_VisualServer_wrapper_skeleton_bone_get_transform_2d(WasGoId wasgo_id, WasGo::WasGoId p_skeleton, int p_bone);
void _wasgo_VisualServer_wrapper_skeleton_bone_set_transform(WasGoId wasgo_id, WasGo::WasGoId p_skeleton, int p_bone, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_skeleton_bone_set_transform_2d(WasGoId wasgo_id, WasGo::WasGoId p_skeleton, int p_bone, WasGo::WasGoId p_transform);
WasGo::WasGoId _wasgo_VisualServer_wrapper_skeleton_create(WasGoId wasgo_id);
int _wasgo_VisualServer_wrapper_skeleton_get_bone_count(WasGoId wasgo_id, WasGo::WasGoId p_skeleton);
WasGo::WasGoId _wasgo_VisualServer_wrapper_sky_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_sky_set_texture(WasGoId wasgo_id, WasGo::WasGoId p_sky, WasGo::WasGoId p_cube_map, int p_radiance_size);
WasGo::WasGoId _wasgo_VisualServer_wrapper_spot_light_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_sync(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_texture_allocate(WasGoId wasgo_id, WasGo::WasGoId p_texture, int p_width, int p_height, int p_depth_3d, WasGo::WasGoId p_format, WasGo::WasGoId p_type, int p_flags);
void _wasgo_VisualServer_wrapper_texture_bind(WasGoId wasgo_id, WasGo::WasGoId p_texture, int p_number);
WasGo::WasGoId _wasgo_VisualServer_wrapper_texture_create(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_texture_create_from_image(WasGoId wasgo_id, WasGo::WasGoId p_image, int p_flags);
WasGo::WasGoId _wasgo_VisualServer_wrapper_texture_debug_usage(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_VisualServer_wrapper_texture_get_data(WasGoId wasgo_id, WasGo::WasGoId p_texture, int p_cube_side);
int _wasgo_VisualServer_wrapper_texture_get_depth(WasGoId wasgo_id, WasGo::WasGoId p_texture);
int _wasgo_VisualServer_wrapper_texture_get_flags(WasGoId wasgo_id, WasGo::WasGoId p_texture);
WasGo::WasGoId _wasgo_VisualServer_wrapper_texture_get_format(WasGoId wasgo_id, WasGo::WasGoId p_texture);
int _wasgo_VisualServer_wrapper_texture_get_height(WasGoId wasgo_id, WasGo::WasGoId p_texture);
WasGo::WasGoId _wasgo_VisualServer_wrapper_texture_get_path(WasGoId wasgo_id, WasGo::WasGoId p_texture);
int _wasgo_VisualServer_wrapper_texture_get_texid(WasGoId wasgo_id, WasGo::WasGoId p_texture);
WasGo::WasGoId _wasgo_VisualServer_wrapper_texture_get_type(WasGoId wasgo_id, WasGo::WasGoId p_texture);
int _wasgo_VisualServer_wrapper_texture_get_width(WasGoId wasgo_id, WasGo::WasGoId p_texture);
void _wasgo_VisualServer_wrapper_texture_set_data(WasGoId wasgo_id, WasGo::WasGoId p_texture, WasGo::WasGoId p_image, int p_layer);
void _wasgo_VisualServer_wrapper_texture_set_data_partial(WasGoId wasgo_id, WasGo::WasGoId p_texture, WasGo::WasGoId p_image, int p_src_x, int p_src_y, int p_src_w, int p_src_h, int p_dst_x, int p_dst_y, int p_dst_mip, int p_layer);
void _wasgo_VisualServer_wrapper_texture_set_flags(WasGoId wasgo_id, WasGo::WasGoId p_texture, int p_flags);
void _wasgo_VisualServer_wrapper_texture_set_path(WasGoId wasgo_id, WasGo::WasGoId p_texture, WasGo::WasGoId p_path);
void _wasgo_VisualServer_wrapper_texture_set_shrink_all_x2_on_set_data(WasGoId wasgo_id, bool p_shrink);
void _wasgo_VisualServer_wrapper_texture_set_size_override(WasGoId wasgo_id, WasGo::WasGoId p_texture, int p_width, int p_height, int p_depth);
void _wasgo_VisualServer_wrapper_textures_keep_original(WasGoId wasgo_id, bool p_enable);
void _wasgo_VisualServer_wrapper_viewport_attach_camera(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_camera);
void _wasgo_VisualServer_wrapper_viewport_attach_canvas(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_canvas);
void _wasgo_VisualServer_wrapper_viewport_attach_to_screen(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_rect, int p_screen);
WasGo::WasGoId _wasgo_VisualServer_wrapper_viewport_create(WasGoId wasgo_id);
void _wasgo_VisualServer_wrapper_viewport_detach(WasGoId wasgo_id, WasGo::WasGoId p_viewport);
int _wasgo_VisualServer_wrapper_viewport_get_render_info(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_info);
WasGo::WasGoId _wasgo_VisualServer_wrapper_viewport_get_texture(WasGoId wasgo_id, WasGo::WasGoId p_viewport);
void _wasgo_VisualServer_wrapper_viewport_remove_canvas(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_canvas);
void _wasgo_VisualServer_wrapper_viewport_set_active(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_active);
void _wasgo_VisualServer_wrapper_viewport_set_canvas_stacking(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_canvas, int p_layer, int p_sublayer);
void _wasgo_VisualServer_wrapper_viewport_set_canvas_transform(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_canvas, WasGo::WasGoId p_offset);
void _wasgo_VisualServer_wrapper_viewport_set_clear_mode(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_clear_mode);
void _wasgo_VisualServer_wrapper_viewport_set_debug_draw(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_draw);
void _wasgo_VisualServer_wrapper_viewport_set_disable_3d(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_disabled);
void _wasgo_VisualServer_wrapper_viewport_set_disable_environment(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_disabled);
void _wasgo_VisualServer_wrapper_viewport_set_global_canvas_transform(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_transform);
void _wasgo_VisualServer_wrapper_viewport_set_hdr(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_enabled);
void _wasgo_VisualServer_wrapper_viewport_set_hide_canvas(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_hidden);
void _wasgo_VisualServer_wrapper_viewport_set_hide_scenario(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_hidden);
void _wasgo_VisualServer_wrapper_viewport_set_msaa(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_msaa);
void _wasgo_VisualServer_wrapper_viewport_set_parent_viewport(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_parent_viewport);
void _wasgo_VisualServer_wrapper_viewport_set_render_direct_to_screen(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_enabled);
void _wasgo_VisualServer_wrapper_viewport_set_scenario(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_scenario);
void _wasgo_VisualServer_wrapper_viewport_set_shadow_atlas_quadrant_subdivision(WasGoId wasgo_id, WasGo::WasGoId p_viewport, int p_quadrant, int p_subdivision);
void _wasgo_VisualServer_wrapper_viewport_set_shadow_atlas_size(WasGoId wasgo_id, WasGo::WasGoId p_viewport, int p_size);
void _wasgo_VisualServer_wrapper_viewport_set_size(WasGoId wasgo_id, WasGo::WasGoId p_viewport, int p_width, int p_height);
void _wasgo_VisualServer_wrapper_viewport_set_transparent_background(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_enabled);
void _wasgo_VisualServer_wrapper_viewport_set_update_mode(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_update_mode);
void _wasgo_VisualServer_wrapper_viewport_set_usage(WasGoId wasgo_id, WasGo::WasGoId p_viewport, WasGo::WasGoId p_usage);
void _wasgo_VisualServer_wrapper_viewport_set_use_arvr(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_use_arvr);
void _wasgo_VisualServer_wrapper_viewport_set_use_debanding(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_debanding);
void _wasgo_VisualServer_wrapper_viewport_set_use_fxaa(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_fxaa);
void _wasgo_VisualServer_wrapper_viewport_set_vflip(WasGoId wasgo_id, WasGo::WasGoId p_viewport, bool p_enabled);
}
#endif