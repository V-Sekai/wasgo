/* THIS FILE IS GENERATED */
#ifndef CANVASITEMMATERIAL_H
#define CANVASITEMMATERIAL_H

#include <stdint.h>

#include "Material.h"
class CanvasItemMaterial : public Material{
public: CanvasItemMaterial();
enum LightMode{
LIGHT_MODE_NORMAL: 0,
LIGHT_MODE_UNSHADED: 1,
};
enum BlendMode{
BLEND_MODE_MIX: 0,
BLEND_MODE_ADD: 1,
BLEND_MODE_SUB: 2,
BLEND_MODE_MUL: 3,
};
enum.CanvasItemMaterial::BlendMode  get_blend_mode();
enum.CanvasItemMaterial::BlendMode  get_blend_mode();
enum.CanvasItemMaterial::LightMode  get_light_mode();
enum.CanvasItemMaterial::LightMode  get_light_mode();
int  get_particles_anim_h_frames();
int  get_particles_anim_h_frames();
bool  get_particles_anim_loop();
bool  get_particles_anim_loop();
int  get_particles_anim_v_frames();
int  get_particles_anim_v_frames();
bool  get_particles_animation();
bool  get_particles_animation();
void  set_blend_mode(int blend_mode);
void  set_light_mode(int light_mode);
void  set_particles_anim_h_frames(int frames);
void  set_particles_anim_loop(bool loop);
void  set_particles_anim_v_frames(int frames);
void  set_particles_animation(bool particles_anim);
};
#endif