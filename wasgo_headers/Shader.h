/* THIS FILE IS GENERATED */
#ifndef SHADER_H
#define SHADER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
#include "Texture.h"
class Shader : public Resource{
enum Mode{
MODE_SPATIAL,
MODE_CANVAS_ITEM,
MODE_PARTICLES
};
String get_code();
String get_custom_defines();
Texture get_default_texture_param(String p_param);
Shader::Mode get_mode();
bool has_param(String p_name);
void set_code(String p_code);
void set_custom_defines(String p_custom_defines);
void set_default_texture_param(String p_param, Texture p_texture);

Shader(WasGoId p_wasgo_id);
~Shader();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Shader_wrapper_get_code(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Shader_wrapper_get_custom_defines(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Shader_wrapper_get_default_texture_param(WasGoId wasgo_id, WasGo::WasGoId p_param);
WasGo::WasGoId _wasgo_Shader_wrapper_get_mode(WasGoId wasgo_id);
int _wasgo_Shader_wrapper_has_param(WasGoId wasgo_id, WasGo::WasGoId p_name);
void _wasgo_Shader_wrapper_set_code(WasGoId wasgo_id, WasGo::WasGoId p_code);
void _wasgo_Shader_wrapper_set_custom_defines(WasGoId wasgo_id, WasGo::WasGoId p_custom_defines);
void _wasgo_Shader_wrapper_set_default_texture_param(WasGoId wasgo_id, WasGo::WasGoId p_param, WasGo::WasGoId p_texture);
}
#endif