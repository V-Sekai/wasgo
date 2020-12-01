/* THIS FILE IS GENERATED */
#ifndef SHADERMATERIAL_H
#define SHADERMATERIAL_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Material.h"
#include "Shader.h"
#include "ustring.h"
#include "Variant.h"
class ShaderMaterial : public Material{
public:
Shader get_shader();
Variant get_shader_param(String p_param);
void set_shader(Shader p_shader);
void set_shader_param(String p_param, Variant p_value);

ShaderMaterial(WasGoId p_wasgo_id);
~ShaderMaterial();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ShaderMaterial_wrapper_get_shader(WasGoId wasgo_id);
WasGoId _wasgo_ShaderMaterial_wrapper_get_shader_param(WasGoId wasgo_id, WasGoId p_param);
void _wasgo_ShaderMaterial_wrapper_set_shader(WasGoId wasgo_id, WasGoId p_shader);
void _wasgo_ShaderMaterial_wrapper_set_shader_param(WasGoId wasgo_id, WasGoId p_param, WasGoId p_value);
}
#endif