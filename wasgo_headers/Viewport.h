/* THIS FILE IS GENERATED */
#ifndef VIEWPORT_H
#define VIEWPORT_H

#include "stdint.h"

#include "Variant.h"
#include "World.h"
#include "World2D.h"
#include "Node.h"
class Viewport : public Node{
public: Viewport();
enum ClearMode{
CLEAR_MODE_ALWAYS,
CLEAR_MODE_NEVER,
CLEAR_MODE_ONLY_NEXT_FRAME
};
enum DebugDraw{
DEBUG_DRAW_DISABLED,
DEBUG_DRAW_UNSHADED,
DEBUG_DRAW_OVERDRAW,
DEBUG_DRAW_WIREFRAME
};
enum MSAA{
MSAA_DISABLED,
MSAA_2X,
MSAA_4X,
MSAA_8X,
MSAA_16X
};
enum RenderInfo{
RENDER_INFO_OBJECTS_IN_FRAME,
RENDER_INFO_VERTICES_IN_FRAME,
RENDER_INFO_MATERIAL_CHANGES_IN_FRAME,
RENDER_INFO_SHADER_CHANGES_IN_FRAME,
RENDER_INFO_SURFACE_CHANGES_IN_FRAME,
RENDER_INFO_DRAW_CALLS_IN_FRAME,
RENDER_INFO_2D_ITEMS_IN_FRAME,
RENDER_INFO_2D_DRAW_CALLS_IN_FRAME,
RENDER_INFO_MAX
};
enum ShadowAtlasQuadrantSubdiv{
SHADOW_ATLAS_QUADRANT_SUBDIV_DISABLED,
SHADOW_ATLAS_QUADRANT_SUBDIV_1,
SHADOW_ATLAS_QUADRANT_SUBDIV_4,
SHADOW_ATLAS_QUADRANT_SUBDIV_16,
SHADOW_ATLAS_QUADRANT_SUBDIV_64,
SHADOW_ATLAS_QUADRANT_SUBDIV_256,
SHADOW_ATLAS_QUADRANT_SUBDIV_1024,
SHADOW_ATLAS_QUADRANT_SUBDIV_MAX
};
enum UpdateMode{
UPDATE_DISABLED,
UPDATE_ONCE,
UPDATE_WHEN_VISIBLE,
UPDATE_ALWAYS
};
enum Usage{
USAGE_2D,
USAGE_2D_NO_SAMPLING,
USAGE_3D,
USAGE_3D_NO_EFFECTS
};
World find_world();
World2D find_world_2d();
Transform2D get_canvas_transform();
Transform2D get_final_transform();
Transform2D get_global_canvas_transform();
Vector2 get_size();
Rect2 get_visible_rect();
World get_world();
World2D get_world_2d();
bool has_transparent_background();
void set_canvas_transform(Transform2D p_xform);
void set_global_canvas_transform(Transform2D p_xform);
void set_size(Vector2 p_size);
void set_transparent_background(bool p_enable);
void set_use_arvr(bool p_use);
void set_world(World p_world);
void set_world_2d(World2D p_world_2d);
bool use_arvr();
};
#endif