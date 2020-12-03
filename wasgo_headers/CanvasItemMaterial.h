/* THIS FILE IS GENERATED */
#ifndef CANVASITEMMATERIAL_H
#define CANVASITEMMATERIAL_H

#include "wasgo\wasgo.h"

#include "Material.h"
class CanvasItemMaterial : public Material{
public:
enum BlendMode{
BLEND_MODE_MIX,
BLEND_MODE_ADD,
BLEND_MODE_SUB,
BLEND_MODE_MUL,
BLEND_MODE_PREMULT_ALPHA
};
enum LightMode{
LIGHT_MODE_NORMAL,
LIGHT_MODE_UNSHADED,
LIGHT_MODE_LIGHT_ONLY
};
CanvasItemMaterial::BlendMode get_blend_mode();
CanvasItemMaterial::LightMode get_light_mode();
int get_particles_anim_h_frames();
bool get_particles_anim_loop();
int get_particles_anim_v_frames();
bool get_particles_animation();
void set_blend_mode(CanvasItemMaterial::BlendMode p_blend_mode);
void set_light_mode(CanvasItemMaterial::LightMode p_light_mode);
void set_particles_anim_h_frames(int p_frames);
void set_particles_anim_loop(bool p_loop);
void set_particles_anim_v_frames(int p_frames);
void set_particles_animation(bool p_particles_anim);

protected:
CanvasItemMaterial(WasGoId p_wasgo_id);
public:
CanvasItemMaterial();
~CanvasItemMaterial();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_CanvasItemMaterial_wrapper_get_blend_mode(WasGoId wasgo_id);
WasGoId _wasgo_CanvasItemMaterial_wrapper_get_light_mode(WasGoId wasgo_id);
int _wasgo_CanvasItemMaterial_wrapper_get_particles_anim_h_frames(WasGoId wasgo_id);
int _wasgo_CanvasItemMaterial_wrapper_get_particles_anim_loop(WasGoId wasgo_id);
int _wasgo_CanvasItemMaterial_wrapper_get_particles_anim_v_frames(WasGoId wasgo_id);
int _wasgo_CanvasItemMaterial_wrapper_get_particles_animation(WasGoId wasgo_id);
void _wasgo_CanvasItemMaterial_wrapper_set_blend_mode(WasGoId wasgo_id, WasGoId p_blend_mode);
void _wasgo_CanvasItemMaterial_wrapper_set_light_mode(WasGoId wasgo_id, WasGoId p_light_mode);
void _wasgo_CanvasItemMaterial_wrapper_set_particles_anim_h_frames(WasGoId wasgo_id, int p_frames);
void _wasgo_CanvasItemMaterial_wrapper_set_particles_anim_loop(WasGoId wasgo_id, bool p_loop);
void _wasgo_CanvasItemMaterial_wrapper_set_particles_anim_v_frames(WasGoId wasgo_id, int p_frames);
void _wasgo_CanvasItemMaterial_wrapper_set_particles_animation(WasGoId wasgo_id, bool p_particles_anim);

    //constructor and destructor wrappers
    WasGoId _wasgo_CanvasItemMaterial_constructor();
    void _wasgo_CanvasItemMaterial_destructor(WasGoId p_wasgo_id);
            
}
#endif