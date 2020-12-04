/* THIS FILE IS GENERATED */
#ifndef SHADERMATERIAL_H
#define SHADERMATERIAL_H

#include "wasgo\wasgo.h"

#include "Shader.h"
#include "Variant.h"
#include "Material.h"
#include "ustring.h"
class ShaderMaterial : public Material{
public:
Shader get_shader();
Variant get_shader_param(String p_param);
bool property_can_revert(String p_name);
Variant property_get_revert(String p_name);
void set_shader(Shader p_shader);
void set_shader_param(String p_param, Variant p_value);

protected:
public:
explicit ShaderMaterial(WasGoId p_wasgo_id);
explicit ShaderMaterial(Material other);
ShaderMaterial new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ShaderMaterial_wrapper_get_shader(WasGoId wasgo_id);
WasGoId _wasgo_ShaderMaterial_wrapper_get_shader_param(WasGoId wasgo_id, const uint8_t * p_param, int p_param_wasgo_buffer_size);
int _wasgo_ShaderMaterial_wrapper_property_can_revert(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoId _wasgo_ShaderMaterial_wrapper_property_get_revert(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_ShaderMaterial_wrapper_set_shader(WasGoId wasgo_id, WasGoId p_shader);
void _wasgo_ShaderMaterial_wrapper_set_shader_param(WasGoId wasgo_id, const uint8_t * p_param, int p_param_wasgo_buffer_size, WasGoId p_value);

    //constructor wrappers
    WasGoId _wasgo_ShaderMaterial_constructor();
            
}
#endif