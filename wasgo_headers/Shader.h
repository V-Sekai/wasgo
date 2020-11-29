/* THIS FILE IS GENERATED */
#ifndef SHADER_H
#define SHADER_H

#include "stdint.h"

#include "Resource.h"
#include "Variant.h"
#include "Texture.h"
class Shader : public Resource{
public: Shader();
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
};
#endif