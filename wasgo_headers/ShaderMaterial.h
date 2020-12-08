/* THIS FILE IS GENERATED */
#ifndef SHADERMATERIAL_H
#define SHADERMATERIAL_H

#include "wasgo\wasgoid.h"

#include "Ustring.h"
#include "Variant.h"
#include "Shader.h"
#include "Material.h"
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
explicit ShaderMaterial(WasGoID p_wasgo_id);
explicit ShaderMaterial(Material other);
ShaderMaterial();
ShaderMaterial new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_ShaderMaterial_wrapper_get_shader(WasGoID wasgo_id);
WasGoID _wasgo_ShaderMaterial_wrapper_get_shader_param(WasGoID wasgo_id, const uint8_t * p_param, int p_param_wasgo_buffer_size);
int _wasgo_ShaderMaterial_wrapper_property_can_revert(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoID _wasgo_ShaderMaterial_wrapper_property_get_revert(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_ShaderMaterial_wrapper_set_shader(WasGoID wasgo_id, WasGoID p_shader);
void _wasgo_ShaderMaterial_wrapper_set_shader_param(WasGoID wasgo_id, const uint8_t * p_param, int p_param_wasgo_buffer_size, WasGoID p_value);

    //constructor wrappers
    WasGoID _wasgo_ShaderMaterial_constructor();
            
}
#endif