/* THIS FILE IS GENERATED */
#ifndef SHADER_H
#define SHADER_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Texture.h"
#include "ustring.h"
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

protected:
public:
explicit Shader(WasGoID p_wasgo_id);
explicit Shader(Resource other);
Shader new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Shader_wrapper_get_code(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Shader_wrapper_get_custom_defines(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Shader_wrapper_get_default_texture_param(WasGoID wasgo_id, const uint8_t * p_param, int p_param_wasgo_buffer_size);
WasGoID _wasgo_Shader_wrapper_get_mode(WasGoID wasgo_id);
int _wasgo_Shader_wrapper_has_param(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_Shader_wrapper_set_code(WasGoID wasgo_id, const uint8_t * p_code, int p_code_wasgo_buffer_size);
void _wasgo_Shader_wrapper_set_custom_defines(WasGoID wasgo_id, const uint8_t * p_custom_defines, int p_custom_defines_wasgo_buffer_size);
void _wasgo_Shader_wrapper_set_default_texture_param(WasGoID wasgo_id, const uint8_t * p_param, int p_param_wasgo_buffer_size, WasGoID p_texture);

    //constructor wrappers
    WasGoID _wasgo_Shader_constructor();
            
}
#endif