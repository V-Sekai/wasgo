/* THIS FILE IS GENERATED */
#ifndef SHADERMATERIAL_H
#define SHADERMATERIAL_H

#include "stdint.h"

#include "Shader.h"
#include "Variant.h"
#include "Material.h"
class ShaderMaterial : public Material{
public: ShaderMaterial();
Shader get_shader();
Variant get_shader_param(String p_param);
void set_shader(Shader p_shader);
void set_shader_param(String p_param, Variant p_value);
};
#endif