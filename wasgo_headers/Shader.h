/* THIS FILE IS GENERATED */
#ifndef SHADER_H
#define SHADER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Texture.h"
#include "Resource.h"
class Shader : public Resource{
public:
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
WasGoId _wasgo_Shader_wrapper_get_code(WasGoId wasgo_id);
WasGoId _wasgo_Shader_wrapper_get_custom_defines(WasGoId wasgo_id);
WasGoId _wasgo_Shader_wrapper_get_default_texture_param(WasGoId wasgo_id, WasGoId p_param);
WasGoId _wasgo_Shader_wrapper_get_mode(WasGoId wasgo_id);
int _wasgo_Shader_wrapper_has_param(WasGoId wasgo_id, WasGoId p_name);
void _wasgo_Shader_wrapper_set_code(WasGoId wasgo_id, WasGoId p_code);
void _wasgo_Shader_wrapper_set_custom_defines(WasGoId wasgo_id, WasGoId p_custom_defines);
void _wasgo_Shader_wrapper_set_default_texture_param(WasGoId wasgo_id, WasGoId p_param, WasGoId p_texture);
}
#endif