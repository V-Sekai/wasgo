/* THIS FILE IS GENERATED */
#ifndef VISUALSERVER_H
#define VISUALSERVER_H

#include <stdint.h>

#include "Vector2.h"
#include "Basis.h"
#include "PoolRealArray.h"
#include "Vector3.h"
#include "PoolVector2Array.h"
#include "AABB.h"
#include "String.h"
#include "Rect2.h"
#include "PoolIntArray.h"
#include "Object.h"
#include "Transform.h"
#include "Transform2D.h"
#include "Plane.h"
#include "PoolByteArray.h"
#include "Image.h"
#include "RID.h"
#include "Variant.h"
class VisualServer : public Object{
public: VisualServer();
enum ReflectionProbeUpdateMode{
REFLECTION_PROBE_UPDATE_ONCE: 0,
};
enum LightDirectionalShadowDepthRangeMode{
LIGHT_DIRECTIONAL_SHADOW_DEPTH_RANGE_STABLE: 0,
};
enum BlendShapeMode{
BLEND_SHAPE_MODE_NORMALIZED: 0,
};
enum PrimitiveType{
PRIMITIVE_POINTS: 0,
PRIMITIVE_LINES: 1,
PRIMITIVE_LINE_STRIP: 2,
PRIMITIVE_LINE_LOOP: 3,
PRIMITIVE_TRIANGLES: 4,
PRIMITIVE_TRIANGLE_STRIP: 5,
PRIMITIVE_TRIANGLE_FAN: 6,
};
enum TextureType{
TEXTURE_TYPE_2D: 0,
TEXTURE_TYPE_CUBEMAP: 1,
TEXTURE_TYPE_2D_ARRAY: 2,
};
enum EnvironmentSSAOQuality{
ENV_SSAO_QUALITY_LOW: 0,
ENV_SSAO_QUALITY_MEDIUM: 1,
};
enum EnvironmentDOFBlurQuality{
ENV_DOF_BLUR_QUALITY_LOW: 0,
ENV_DOF_BLUR_QUALITY_MEDIUM: 1,
};
enum RenderInfo{
INFO_OBJECTS_IN_FRAME: 0,
INFO_VERTICES_IN_FRAME: 1,
INFO_MATERIAL_CHANGES_IN_FRAME: 2,
INFO_SHADER_CHANGES_IN_FRAME: 3,
INFO_SURFACE_CHANGES_IN_FRAME: 4,
INFO_DRAW_CALLS_IN_FRAME: 5,
INFO_USAGE_VIDEO_MEM_TOTAL: 6,
INFO_VIDEO_MEM_USED: 7,
INFO_TEXTURE_MEM_USED: 8,
};
enum NinePatchAxisMode{
NINE_PATCH_STRETCH: 0,
NINE_PATCH_TILE: 1,
};
enum ViewportRenderInfo{
VIEWPORT_RENDER_INFO_OBJECTS_IN_FRAME: 0,
VIEWPORT_RENDER_INFO_VERTICES_IN_FRAME: 1,
VIEWPORT_RENDER_INFO_MATERIAL_CHANGES_IN_FRAME: 2,
VIEWPORT_RENDER_INFO_SHADER_CHANGES_IN_FRAME: 3,
VIEWPORT_RENDER_INFO_SURFACE_CHANGES_IN_FRAME: 4,
VIEWPORT_RENDER_INFO_DRAW_CALLS_IN_FRAME: 5,
};
enum ViewportClearMode{
VIEWPORT_CLEAR_ALWAYS: 0,
VIEWPORT_CLEAR_NEVER: 1,
};
enum LightOmniShadowDetail{
LIGHT_OMNI_SHADOW_DETAIL_VERTICAL: 0,
};
enum ShaderMode{
SHADER_SPATIAL: 0,
SHADER_CANVAS_ITEM: 1,
SHADER_PARTICLES: 2,
};
enum MultimeshTransformFormat{
MULTIMESH_TRANSFORM_2D: 0,
};
enum ShadowCastingSetting{
SHADOW_CASTING_SETTING_OFF: 0,
SHADOW_CASTING_SETTING_ON: 1,
SHADOW_CASTING_SETTING_DOUBLE_SIDED: 2,
};
enum ViewportDebugDraw{
VIEWPORT_DEBUG_DRAW_DISABLED: 0,
VIEWPORT_DEBUG_DRAW_UNSHADED: 1,
VIEWPORT_DEBUG_DRAW_OVERDRAW: 2,
};
enum ViewportUsage{
VIEWPORT_USAGE_2D: 0,
VIEWPORT_USAGE_2D_NO_SAMPLING: 1,
VIEWPORT_USAGE_3D: 2,
};
enum EnvironmentBG{
ENV_BG_CLEAR_COLOR: 0,
ENV_BG_COLOR: 1,
ENV_BG_SKY: 2,
ENV_BG_COLOR_SKY: 3,
ENV_BG_CANVAS: 4,
ENV_BG_KEEP: 5,
};
enum MultimeshCustomDataFormat{
MULTIMESH_CUSTOM_DATA_NONE: 0,
MULTIMESH_CUSTOM_DATA_8BIT: 1,
};
enum LightOmniShadowMode{
LIGHT_OMNI_SHADOW_DUAL_PARABOLOID: 0,
};
enum TextureFlags{
TEXTURE_FLAG_MIPMAPS: 1,
TEXTURE_FLAG_REPEAT: 2,
TEXTURE_FLAG_FILTER: 4,
TEXTURE_FLAGS_DEFAULT: 7,
TEXTURE_FLAG_ANISOTROPIC_FILTER: 8,
TEXTURE_FLAG_CONVERT_TO_LINEAR: 16,
TEXTURE_FLAG_MIRRORED_REPEAT: 32,
};
enum Features{
FEATURE_SHADERS: 0,
};
enum InstanceType{
INSTANCE_NONE: 0,
INSTANCE_MESH: 1,
INSTANCE_MULTIMESH: 2,
INSTANCE_IMMEDIATE: 3,
INSTANCE_PARTICLES: 4,
INSTANCE_LIGHT: 5,
INSTANCE_REFLECTION_PROBE: 6,
INSTANCE_GI_PROBE: 7,
INSTANCE_LIGHTMAP_CAPTURE: 8,
INSTANCE_MAX: 9,
};
enum EnvironmentSSAOBlur{
ENV_SSAO_BLUR_DISABLED: 0,
ENV_SSAO_BLUR_1x1: 1,
ENV_SSAO_BLUR_2x2: 2,
};
enum EnvironmentToneMapper{
ENV_TONE_MAPPER_LINEAR: 0,
ENV_TONE_MAPPER_REINHARD: 1,
ENV_TONE_MAPPER_FILMIC: 2,
};
enum EnvironmentGlowBlendMode{
GLOW_BLEND_MODE_ADDITIVE: 0,
GLOW_BLEND_MODE_SCREEN: 1,
GLOW_BLEND_MODE_SOFTLIGHT: 2,
};
enum MultimeshColorFormat{
MULTIMESH_COLOR_NONE: 0,
MULTIMESH_COLOR_8BIT: 1,
};
enum CanvasLightShadowFilter{
CANVAS_LIGHT_FILTER_NONE: 0,
CANVAS_LIGHT_FILTER_PCF3: 1,
CANVAS_LIGHT_FILTER_PCF5: 2,
CANVAS_LIGHT_FILTER_PCF7: 3,
CANVAS_LIGHT_FILTER_PCF9: 4,
};
enum ScenarioDebugMode{
SCENARIO_DEBUG_DISABLED: 0,
SCENARIO_DEBUG_WIREFRAME: 1,
SCENARIO_DEBUG_OVERDRAW: 2,
};
enum ViewportUpdateMode{
VIEWPORT_UPDATE_DISABLED: 0,
VIEWPORT_UPDATE_ONCE: 1,
VIEWPORT_UPDATE_WHEN_VISIBLE: 2,
};
enum ArrayFormat{
ARRAY_FORMAT_VERTEX: 1,
ARRAY_FORMAT_NORMAL: 2,
ARRAY_FORMAT_TANGENT: 4,
ARRAY_FORMAT_COLOR: 8,
ARRAY_FORMAT_TEX_UV: 16,
ARRAY_FORMAT_TEX_UV2: 32,
ARRAY_FORMAT_BONES: 64,
ARRAY_FORMAT_WEIGHTS: 128,
ARRAY_FORMAT_INDEX: 256,
ARRAY_COMPRESS_VERTEX: 512,
ARRAY_COMPRESS_NORMAL: 1024,
ARRAY_COMPRESS_TANGENT: 2048,
ARRAY_COMPRESS_COLOR: 4096,
ARRAY_COMPRESS_TEX_UV: 8192,
ARRAY_COMPRESS_TEX_UV2: 16384,
ARRAY_COMPRESS_BONES: 32768,
ARRAY_COMPRESS_WEIGHTS: 65536,
ARRAY_COMPRESS_DEFAULT: 97280,
ARRAY_COMPRESS_INDEX: 131072,
ARRAY_FLAG_USE_2D_VERTICES: 262144,
};
enum ParticlesDrawOrder{
PARTICLES_DRAW_ORDER_INDEX: 0,
PARTICLES_DRAW_ORDER_LIFETIME: 1,
};
enum CanvasLightMode{
CANVAS_LIGHT_MODE_ADD: 0,
CANVAS_LIGHT_MODE_SUB: 1,
CANVAS_LIGHT_MODE_MIX: 2,
};
enum LightDirectionalShadowMode{
LIGHT_DIRECTIONAL_SHADOW_ORTHOGONAL: 0,
LIGHT_DIRECTIONAL_SHADOW_PARALLEL_2_SPLITS: 1,
};
enum LightParam{
LIGHT_PARAM_ENERGY: 0,
LIGHT_PARAM_SPECULAR: 2,
LIGHT_PARAM_RANGE: 3,
LIGHT_PARAM_ATTENUATION: 4,
LIGHT_PARAM_SPOT_ANGLE: 5,
LIGHT_PARAM_SPOT_ATTENUATION: 6,
LIGHT_PARAM_CONTACT_SHADOW_SIZE: 7,
LIGHT_PARAM_SHADOW_MAX_DISTANCE: 8,
LIGHT_PARAM_SHADOW_SPLIT_1_OFFSET: 9,
LIGHT_PARAM_SHADOW_SPLIT_2_OFFSET: 10,
LIGHT_PARAM_SHADOW_SPLIT_3_OFFSET: 11,
LIGHT_PARAM_SHADOW_NORMAL_BIAS: 12,
LIGHT_PARAM_SHADOW_BIAS: 13,
LIGHT_PARAM_SHADOW_BIAS_SPLIT_SCALE: 14,
};
enum ArrayType{
ARRAY_VERTEX: 0,
ARRAY_NORMAL: 1,
ARRAY_TANGENT: 2,
ARRAY_COLOR: 3,
ARRAY_TEX_UV: 4,
ARRAY_TEX_UV2: 5,
ARRAY_BONES: 6,
ARRAY_WEIGHTS: 7,
ARRAY_INDEX: 8,
};
enum CanvasOccluderPolygonCullMode{
CANVAS_OCCLUDER_POLYGON_CULL_DISABLED: 0,
CANVAS_OCCLUDER_POLYGON_CULL_CLOCKWISE: 1,
};
enum InstanceFlags{
INSTANCE_FLAG_USE_BAKED_LIGHT: 0,
INSTANCE_FLAG_DRAW_NEXT_FRAME_IF_VISIBLE: 1,
};
enum ViewportMSAA{
VIEWPORT_MSAA_DISABLED: 0,
VIEWPORT_MSAA_2X: 1,
VIEWPORT_MSAA_4X: 2,
VIEWPORT_MSAA_8X: 3,
VIEWPORT_MSAA_16X: 4,
VIEWPORT_MSAA_EXT_2X: 5,
};
enum LightType{
LIGHT_DIRECTIONAL: 0,
LIGHT_OMNI: 1,
};
enum CubeMapSide{
CUBEMAP_LEFT: 0,
CUBEMAP_RIGHT: 1,
CUBEMAP_BOTTOM: 2,
CUBEMAP_TOP: 3,
CUBEMAP_FRONT: 4,
};
void  black_bars_set_images(RID left, RID top, RID right, RID bottom);
void  black_bars_set_margins(int left, int top, int right, int bottom);
RID  camera_create();
RID  camera_create();
void  camera_set_cull_mask(RID camera, int layers);
void  camera_set_environment(RID camera, RID env);
void  camera_set_frustum(RID camera, float size, Vector2 offset, float z_near, float z_far);
void  camera_set_orthogonal(RID camera, float size, float z_near, float z_far);
void  camera_set_perspective(RID camera, float fovy_degrees, float z_near, float z_far);
void  camera_set_transform(RID camera, Transform transform);
void  camera_set_use_vertical_aspect(RID camera, bool enable);
RID  canvas_create();
RID  canvas_create();
void  canvas_item_add_circle(RID item, Vector2 pos, float radius, Color color);
void  canvas_item_add_clip_ignore(RID item, bool ignore);
void  canvas_item_add_line(RID item, Vector2 from, Vector2 to, Color color, float width = 1, bool antialiased = false);
void  canvas_item_add_mesh(RID item, RID mesh, Transform2D transform = ((1, 0), (0, 1), (0, 0)), Color modulate = 1,1,1,1, RID texture = [rid], RID normal_map = [rid]);
void  canvas_item_add_multimesh(RID item, RID mesh, RID texture, RID normal_map = [rid]);
void  canvas_item_add_nine_patch(RID item, Rect2 rect, Rect2 source, RID texture, Vector2 topleft, Vector2 bottomright, int x_axis_mode = 0, int y_axis_mode = 0, bool draw_center = true, Color modulate = 1,1,1,1, RID normal_map = [rid]);
void  canvas_item_add_particles(RID item, RID particles, RID texture, RID normal_map);
void  canvas_item_add_polygon(RID item, PoolVector2Array points, PoolColorArray colors, PoolVector2Array uvs = [], RID texture = [rid], RID normal_map = [rid], bool antialiased = false);
void  canvas_item_add_polyline(RID item, PoolVector2Array points, PoolColorArray colors, float width = 1, bool antialiased = false);
void  canvas_item_add_primitive(RID item, PoolVector2Array points, PoolColorArray colors, PoolVector2Array uvs, RID texture, float width = 1, RID normal_map = [rid]);
void  canvas_item_add_rect(RID item, Rect2 rect, Color color);
void  canvas_item_add_set_transform(RID item, Transform2D transform);
void  canvas_item_add_texture_rect(RID item, Rect2 rect, RID texture, bool tile = false, Color modulate = 1,1,1,1, bool transpose = false, RID normal_map = [rid]);
void  canvas_item_add_texture_rect_region(RID item, Rect2 rect, RID texture, Rect2 src_rect, Color modulate = 1,1,1,1, bool transpose = false, RID normal_map = [rid], bool clip_uv = true);
void  canvas_item_add_triangle_array(RID item, PoolIntArray indices, PoolVector2Array points, PoolColorArray colors, PoolVector2Array uvs = [], PoolIntArray bones = [], PoolRealArray weights = [], RID texture = [rid], int count = -1, RID normal_map = [rid], bool antialiased = false, bool antialiasing_use_indices = false);
void  canvas_item_clear(RID item);
RID  canvas_item_create();
RID  canvas_item_create();
void  canvas_item_set_clip(RID item, bool clip);
void  canvas_item_set_copy_to_backbuffer(RID item, bool enabled, Rect2 rect);
void  canvas_item_set_custom_rect(RID item, bool use_custom_rect, Rect2 rect = (0, 0, 0, 0));
void  canvas_item_set_distance_field_mode(RID item, bool enabled);
void  canvas_item_set_draw_behind_parent(RID item, bool enabled);
void  canvas_item_set_draw_index(RID item, int index);
void  canvas_item_set_light_mask(RID item, int mask);
void  canvas_item_set_material(RID item, RID material);
void  canvas_item_set_modulate(RID item, Color color);
void  canvas_item_set_parent(RID item, RID parent);
void  canvas_item_set_self_modulate(RID item, Color color);
void  canvas_item_set_sort_children_by_y(RID item, bool enabled);
void  canvas_item_set_transform(RID item, Transform2D transform);
void  canvas_item_set_use_parent_material(RID item, bool enabled);
void  canvas_item_set_visible(RID item, bool visible);
void  canvas_item_set_z_as_relative_to_parent(RID item, bool enabled);
void  canvas_item_set_z_index(RID item, int z_index);
void  canvas_light_attach_to_canvas(RID light, RID canvas);
RID  canvas_light_create();
RID  canvas_light_create();
void  canvas_light_occluder_attach_to_canvas(RID occluder, RID canvas);
RID  canvas_light_occluder_create();
RID  canvas_light_occluder_create();
void  canvas_light_occluder_set_enabled(RID occluder, bool enabled);
void  canvas_light_occluder_set_light_mask(RID occluder, int mask);
void  canvas_light_occluder_set_polygon(RID occluder, RID polygon);
void  canvas_light_occluder_set_transform(RID occluder, Transform2D transform);
void  canvas_light_set_color(RID light, Color color);
void  canvas_light_set_enabled(RID light, bool enabled);
void  canvas_light_set_energy(RID light, float energy);
void  canvas_light_set_height(RID light, float height);
void  canvas_light_set_item_cull_mask(RID light, int mask);
void  canvas_light_set_item_shadow_cull_mask(RID light, int mask);
void  canvas_light_set_layer_range(RID light, int min_layer, int max_layer);
void  canvas_light_set_mode(RID light, int mode);
void  canvas_light_set_scale(RID light, float scale);
void  canvas_light_set_shadow_buffer_size(RID light, int size);
void  canvas_light_set_shadow_color(RID light, Color color);
void  canvas_light_set_shadow_enabled(RID light, bool enabled);
void  canvas_light_set_shadow_filter(RID light, int filter);
void  canvas_light_set_shadow_gradient_length(RID light, float length);
void  canvas_light_set_shadow_smooth(RID light, float smooth);
void  canvas_light_set_texture(RID light, RID texture);
void  canvas_light_set_texture_offset(RID light, Vector2 offset);
void  canvas_light_set_transform(RID light, Transform2D transform);
void  canvas_light_set_z_range(RID light, int min_z, int max_z);
RID  canvas_occluder_polygon_create();
RID  canvas_occluder_polygon_create();
void  canvas_occluder_polygon_set_cull_mode(RID occluder_polygon, int mode);
void  canvas_occluder_polygon_set_shape(RID occluder_polygon, PoolVector2Array shape, bool closed);
void  canvas_occluder_polygon_set_shape_as_lines(RID occluder_polygon, PoolVector2Array shape);
void  canvas_set_item_mirroring(RID canvas, RID item, Vector2 mirroring);
void  canvas_set_modulate(RID canvas, Color color);
RID  directional_light_create();
RID  directional_light_create();
void  draw(bool swap_buffers = true, float frame_step = 0);
RID  environment_create();
RID  environment_create();
void  environment_set_adjustment(RID env, bool enable, float brightness, float contrast, float saturation, RID ramp);
void  environment_set_ambient_light(RID env, Color color, float energy = 1, float sky_contibution = 0);
void  environment_set_background(RID env, int bg);
void  environment_set_bg_color(RID env, Color color);
void  environment_set_bg_energy(RID env, float energy);
void  environment_set_canvas_max_layer(RID env, int max_layer);
void  environment_set_dof_blur_far(RID env, bool enable, float distance, float transition, float far_amount, int quality);
void  environment_set_dof_blur_near(RID env, bool enable, float distance, float transition, float far_amount, int quality);
void  environment_set_fog(RID env, bool enable, Color color, Color sun_color, float sun_amount);
void  environment_set_fog_depth(RID env, bool enable, float depth_begin, float depth_end, float depth_curve, bool transmit, float transmit_curve);
void  environment_set_fog_height(RID env, bool enable, float min_height, float max_height, float height_curve);
void  environment_set_glow(RID env, bool enable, int level_flags, float intensity, float strength, float bloom_threshold, int blend_mode, float hdr_bleed_threshold, float hdr_bleed_scale, float hdr_luminance_cap, bool bicubic_upscale);
void  environment_set_sky(RID env, RID sky);
void  environment_set_sky_custom_fov(RID env, float scale);
void  environment_set_sky_orientation(RID env, Basis orientation);
void  environment_set_ssao(RID env, bool enable, float radius, float intensity, float radius2, float intensity2, float bias, float light_affect, float ao_channel_affect, Color color, int quality, int blur, float bilateral_sharpness);
void  environment_set_ssr(RID env, bool enable, int max_steps, float fade_in, float fade_out, float depth_tolerance, bool roughness);
void  environment_set_tonemap(RID env, int tone_mapper, float exposure, float white, bool auto_exposure, float min_luminance, float max_luminance, float auto_exp_speed, float auto_exp_grey);
void  finish();
void  finish();
void  force_draw(bool swap_buffers = true, float frame_step = 0);
void  force_sync();
void  force_sync();
void  free_rid(RID rid);
int  get_render_info(int info);
RID  get_test_cube();
RID  get_test_cube();
RID  get_test_texture();
RID  get_test_texture();
String  get_video_adapter_name();
String  get_video_adapter_name();
String  get_video_adapter_vendor();
String  get_video_adapter_vendor();
RID  get_white_texture();
RID  get_white_texture();
RID  gi_probe_create();
RID  gi_probe_create();
float  gi_probe_get_bias(RID probe);
AABB  gi_probe_get_bounds(RID probe);
float  gi_probe_get_cell_size(RID probe);
PoolIntArray  gi_probe_get_dynamic_data(RID probe);
int  gi_probe_get_dynamic_range(RID probe);
float  gi_probe_get_energy(RID probe);
float  gi_probe_get_normal_bias(RID probe);
float  gi_probe_get_propagation(RID probe);
Transform  gi_probe_get_to_cell_xform(RID probe);
bool  gi_probe_is_compressed(RID probe);
bool  gi_probe_is_interior(RID probe);
void  gi_probe_set_bias(RID probe, float bias);
void  gi_probe_set_bounds(RID probe, AABB bounds);
void  gi_probe_set_cell_size(RID probe, float range);
void  gi_probe_set_compress(RID probe, bool enable);
void  gi_probe_set_dynamic_data(RID probe, PoolIntArray data);
void  gi_probe_set_dynamic_range(RID probe, int range);
void  gi_probe_set_energy(RID probe, float energy);
void  gi_probe_set_interior(RID probe, bool enable);
void  gi_probe_set_normal_bias(RID probe, float bias);
void  gi_probe_set_propagation(RID probe, float propagation);
void  gi_probe_set_to_cell_xform(RID probe, Transform xform);
bool  has_changed();
bool  has_changed();
bool  has_feature(int feature);
bool  has_os_feature(String feature);
void  immediate_begin(RID immediate, int primitive, RID texture = [rid]);
void  immediate_clear(RID immediate);
void  immediate_color(RID immediate, Color color);
RID  immediate_create();
RID  immediate_create();
void  immediate_end(RID immediate);
RID  immediate_get_material(RID immediate);
void  immediate_normal(RID immediate, Vector3 normal);
void  immediate_set_material(RID immediate, RID material);
void  immediate_tangent(RID immediate, Plane tangent);
void  immediate_uv(RID immediate, Vector2 tex_uv);
void  immediate_uv2(RID immediate, Vector2 tex_uv);
void  immediate_vertex(RID immediate, Vector3 vertex);
void  immediate_vertex_2d(RID immediate, Vector2 vertex);
void  init();
void  init();
void  instance_attach_object_instance_id(RID instance, int id);
void  instance_attach_skeleton(RID instance, RID skeleton);
RID  instance_create();
RID  instance_create();
RID  instance_create2(RID base, RID scenario);
void  instance_geometry_set_as_instance_lod(RID instance, RID as_lod_of_instance);
void  instance_geometry_set_cast_shadows_setting(RID instance, int shadow_casting_setting);
void  instance_geometry_set_draw_range(RID instance, float min, float max, float min_margin, float max_margin);
void  instance_geometry_set_flag(RID instance, int flag, bool enabled);
void  instance_geometry_set_material_override(RID instance, RID material);
void  instance_set_base(RID instance, RID base);
void  instance_set_blend_shape_weight(RID instance, int shape, float weight);
void  instance_set_custom_aabb(RID instance, AABB aabb);
void  instance_set_exterior(RID instance, bool enabled);
void  instance_set_extra_visibility_margin(RID instance, float margin);
void  instance_set_layer_mask(RID instance, int mask);
void  instance_set_scenario(RID instance, RID scenario);
void  instance_set_surface_material(RID instance, int surface, RID material);
void  instance_set_transform(RID instance, Transform transform);
void  instance_set_use_lightmap(RID instance, RID lightmap_instance, RID lightmap);
void  instance_set_visible(RID instance, bool visible);
Array  instances_cull_aabb(AABB aabb, RID scenario = [rid]);
Array  instances_cull_convex(Array convex, RID scenario = [rid]);
Array  instances_cull_ray(Vector3 from, Vector3 to, RID scenario = [rid]);
void  light_directional_set_blend_splits(RID light, bool enable);
void  light_directional_set_shadow_depth_range_mode(RID light, int range_mode);
void  light_directional_set_shadow_mode(RID light, int mode);
void  light_omni_set_shadow_detail(RID light, int detail);
void  light_omni_set_shadow_mode(RID light, int mode);
void  light_set_color(RID light, Color color);
void  light_set_cull_mask(RID light, int mask);
void  light_set_negative(RID light, bool enable);
void  light_set_param(RID light, int param, float value);
void  light_set_projector(RID light, RID texture);
void  light_set_reverse_cull_face_mode(RID light, bool enabled);
void  light_set_shadow(RID light, bool enabled);
void  light_set_shadow_color(RID light, Color color);
void  light_set_use_gi(RID light, bool enabled);
RID  lightmap_capture_create();
RID  lightmap_capture_create();
AABB  lightmap_capture_get_bounds(RID capture);
float  lightmap_capture_get_energy(RID capture);
PoolByteArray  lightmap_capture_get_octree(RID capture);
int  lightmap_capture_get_octree_cell_subdiv(RID capture);
Transform  lightmap_capture_get_octree_cell_transform(RID capture);
void  lightmap_capture_set_bounds(RID capture, AABB bounds);
void  lightmap_capture_set_energy(RID capture, float energy);
void  lightmap_capture_set_octree(RID capture, PoolByteArray octree);
void  lightmap_capture_set_octree_cell_subdiv(RID capture, int subdiv);
void  lightmap_capture_set_octree_cell_transform(RID capture, Transform xform);
RID  make_sphere_mesh(int latitudes, int longitudes, float radius);
RID  material_create();
RID  material_create();
Variant  material_get_param(RID material, String parameter);
Variant  material_get_param_default(RID material, String parameter);
RID  material_get_shader(RID shader_material);
void  material_set_line_width(RID material, float width);
void  material_set_next_pass(RID material, RID next_material);
void  material_set_param(RID material, String parameter, Variant value);
void  material_set_render_priority(RID material, int priority);
void  material_set_shader(RID shader_material, RID shader);
void  mesh_add_surface_from_arrays(RID mesh, int primitive, Array arrays, Array blend_shapes = [], int compress_format = 97280);
void  mesh_clear(RID mesh);
RID  mesh_create();
RID  mesh_create();
int  mesh_get_blend_shape_count(RID mesh);
enum.VisualServer::BlendShapeMode  mesh_get_blend_shape_mode(RID mesh);
AABB  mesh_get_custom_aabb(RID mesh);
int  mesh_get_surface_count(RID mesh);
void  mesh_remove_surface(RID mesh, int index);
void  mesh_set_blend_shape_count(RID mesh, int amount);
void  mesh_set_blend_shape_mode(RID mesh, int mode);
void  mesh_set_custom_aabb(RID mesh, AABB aabb);
AABB  mesh_surface_get_aabb(RID mesh, int surface);
PoolByteArray  mesh_surface_get_array(RID mesh, int surface);
int  mesh_surface_get_array_index_len(RID mesh, int surface);
int  mesh_surface_get_array_len(RID mesh, int surface);
Array  mesh_surface_get_arrays(RID mesh, int surface);
Array  mesh_surface_get_blend_shape_arrays(RID mesh, int surface);
int  mesh_surface_get_format(RID mesh, int surface);
int  mesh_surface_get_format_offset(int format, int vertex_len, int index_len, int array_index);
int  mesh_surface_get_format_stride(int format, int vertex_len, int index_len);
PoolByteArray  mesh_surface_get_index_array(RID mesh, int surface);
RID  mesh_surface_get_material(RID mesh, int surface);
enum.VisualServer::PrimitiveType  mesh_surface_get_primitive_type(RID mesh, int surface);
Array  mesh_surface_get_skeleton_aabb(RID mesh, int surface);
void  mesh_surface_set_material(RID mesh, int surface, RID material);
void  mesh_surface_update_region(RID mesh, int surface, int offset, PoolByteArray data);
void  multimesh_allocate(RID multimesh, int instances, int transform_format, int color_format, int custom_data_format = 0);
RID  multimesh_create();
RID  multimesh_create();
AABB  multimesh_get_aabb(RID multimesh);
int  multimesh_get_instance_count(RID multimesh);
RID  multimesh_get_mesh(RID multimesh);
int  multimesh_get_visible_instances(RID multimesh);
Color  multimesh_instance_get_color(RID multimesh, int index);
Color  multimesh_instance_get_custom_data(RID multimesh, int index);
Transform  multimesh_instance_get_transform(RID multimesh, int index);
Transform2D  multimesh_instance_get_transform_2d(RID multimesh, int index);
void  multimesh_instance_set_color(RID multimesh, int index, Color color);
void  multimesh_instance_set_custom_data(RID multimesh, int index, Color custom_data);
void  multimesh_instance_set_transform(RID multimesh, int index, Transform transform);
void  multimesh_instance_set_transform_2d(RID multimesh, int index, Transform2D transform);
void  multimesh_set_as_bulk_array(RID multimesh, PoolRealArray array);
void  multimesh_set_mesh(RID multimesh, RID mesh);
void  multimesh_set_visible_instances(RID multimesh, int visible);
RID  omni_light_create();
RID  omni_light_create();
RID  particles_create();
RID  particles_create();
AABB  particles_get_current_aabb(RID particles);
bool  particles_get_emitting(RID particles);
bool  particles_is_inactive(RID particles);
void  particles_request_process(RID particles);
void  particles_restart(RID particles);
void  particles_set_amount(RID particles, int amount);
void  particles_set_custom_aabb(RID particles, AABB aabb);
void  particles_set_draw_order(RID particles, int order);
void  particles_set_draw_pass_mesh(RID particles, int pass, RID mesh);
void  particles_set_draw_passes(RID particles, int count);
void  particles_set_emission_transform(RID particles, Transform transform);
void  particles_set_emitting(RID particles, bool emitting);
void  particles_set_explosiveness_ratio(RID particles, float ratio);
void  particles_set_fixed_fps(RID particles, int fps);
void  particles_set_fractional_delta(RID particles, bool enable);
void  particles_set_lifetime(RID particles, float lifetime);
void  particles_set_one_shot(RID particles, bool one_shot);
void  particles_set_pre_process_time(RID particles, float time);
void  particles_set_process_material(RID particles, RID material);
void  particles_set_randomness_ratio(RID particles, float ratio);
void  particles_set_speed_scale(RID particles, float scale);
void  particles_set_use_local_coordinates(RID particles, bool enable);
RID  reflection_probe_create();
RID  reflection_probe_create();
void  reflection_probe_set_as_interior(RID probe, bool enable);
void  reflection_probe_set_cull_mask(RID probe, int layers);
void  reflection_probe_set_enable_box_projection(RID probe, bool enable);
void  reflection_probe_set_enable_shadows(RID probe, bool enable);
void  reflection_probe_set_extents(RID probe, Vector3 extents);
void  reflection_probe_set_intensity(RID probe, float intensity);
void  reflection_probe_set_interior_ambient(RID probe, Color color);
void  reflection_probe_set_interior_ambient_energy(RID probe, float energy);
void  reflection_probe_set_interior_ambient_probe_contribution(RID probe, float contrib);
void  reflection_probe_set_max_distance(RID probe, float distance);
void  reflection_probe_set_origin_offset(RID probe, Vector3 offset);
void  reflection_probe_set_update_mode(RID probe, int mode);
void  request_frame_drawn_callback(Object where, String method, Variant userdata);
RID  scenario_create();
RID  scenario_create();
void  scenario_set_debug(RID scenario, int debug_mode);
void  scenario_set_environment(RID scenario, RID environment);
void  scenario_set_fallback_environment(RID scenario, RID environment);
void  scenario_set_reflection_atlas_size(RID scenario, int size, int subdiv);
void  set_boot_image(Image image, Color color, bool scale, bool use_filter = true);
void  set_debug_generate_wireframes(bool generate);
void  set_default_clear_color(Color color);
RID  shader_create();
RID  shader_create();
String  shader_get_code(RID shader);
RID  shader_get_default_texture_param(RID shader, String name);
Array  shader_get_param_list(RID shader);
void  shader_set_code(RID shader, String code);
void  shader_set_default_texture_param(RID shader, String name, RID texture);
void  skeleton_allocate(RID skeleton, int bones, bool is_2d_skeleton = false);
Transform  skeleton_bone_get_transform(RID skeleton, int bone);
Transform2D  skeleton_bone_get_transform_2d(RID skeleton, int bone);
void  skeleton_bone_set_transform(RID skeleton, int bone, Transform transform);
void  skeleton_bone_set_transform_2d(RID skeleton, int bone, Transform2D transform);
RID  skeleton_create();
RID  skeleton_create();
int  skeleton_get_bone_count(RID skeleton);
RID  sky_create();
RID  sky_create();
void  sky_set_texture(RID sky, RID cube_map, int radiance_size);
RID  spot_light_create();
RID  spot_light_create();
void  sync();
void  sync();
void  texture_allocate(RID texture, int width, int height, int depth_3d, int format, int type, int flags = 7);
void  texture_bind(RID texture, int number);
RID  texture_create();
RID  texture_create();
RID  texture_create_from_image(Image image, int flags = 7);
Array  texture_debug_usage();
Array  texture_debug_usage();
Image  texture_get_data(RID texture, int cube_side = 0);
int  texture_get_depth(RID texture);
int  texture_get_flags(RID texture);
enum.Image::Format  texture_get_format(RID texture);
int  texture_get_height(RID texture);
String  texture_get_path(RID texture);
int  texture_get_texid(RID texture);
enum.VisualServer::TextureType  texture_get_type(RID texture);
int  texture_get_width(RID texture);
void  texture_set_data(RID texture, Image image, int layer = 0);
void  texture_set_data_partial(RID texture, Image image, int src_x, int src_y, int src_w, int src_h, int dst_x, int dst_y, int dst_mip, int layer = 0);
void  texture_set_flags(RID texture, int flags);
void  texture_set_path(RID texture, String path);
void  texture_set_shrink_all_x2_on_set_data(bool shrink);
void  texture_set_size_override(RID texture, int width, int height, int depth);
void  textures_keep_original(bool enable);
void  viewport_attach_camera(RID viewport, RID camera);
void  viewport_attach_canvas(RID viewport, RID canvas);
void  viewport_attach_to_screen(RID viewport, Rect2 rect = (0, 0, 0, 0), int screen = 0);
RID  viewport_create();
RID  viewport_create();
void  viewport_detach(RID viewport);
int  viewport_get_render_info(RID viewport, int info);
RID  viewport_get_texture(RID viewport);
void  viewport_remove_canvas(RID viewport, RID canvas);
void  viewport_set_active(RID viewport, bool active);
void  viewport_set_canvas_stacking(RID viewport, RID canvas, int layer, int sublayer);
void  viewport_set_canvas_transform(RID viewport, RID canvas, Transform2D offset);
void  viewport_set_clear_mode(RID viewport, int clear_mode);
void  viewport_set_debug_draw(RID viewport, int draw);
void  viewport_set_disable_3d(RID viewport, bool disabled);
void  viewport_set_disable_environment(RID viewport, bool disabled);
void  viewport_set_global_canvas_transform(RID viewport, Transform2D transform);
void  viewport_set_hdr(RID viewport, bool enabled);
void  viewport_set_hide_canvas(RID viewport, bool hidden);
void  viewport_set_hide_scenario(RID viewport, bool hidden);
void  viewport_set_msaa(RID viewport, int msaa);
void  viewport_set_parent_viewport(RID viewport, RID parent_viewport);
void  viewport_set_render_direct_to_screen(RID viewport, bool enabled);
void  viewport_set_scenario(RID viewport, RID scenario);
void  viewport_set_shadow_atlas_quadrant_subdivision(RID viewport, int quadrant, int subdivision);
void  viewport_set_shadow_atlas_size(RID viewport, int size);
void  viewport_set_size(RID viewport, int width, int height);
void  viewport_set_transparent_background(RID viewport, bool enabled);
void  viewport_set_update_mode(RID viewport, int update_mode);
void  viewport_set_usage(RID viewport, int usage);
void  viewport_set_use_arvr(RID viewport, bool use_arvr);
void  viewport_set_vflip(RID viewport, bool enabled);
};
#endif