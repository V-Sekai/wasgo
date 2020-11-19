/* THIS FILE IS GENERATED */
#ifndef SHADER_H
#define SHADER_H

#include <stdint.h>

#include "Texture.h"
#include "String.h"
#include "Resource.h"
class Shader : public Resource{
public: Shader();
enum Mode{
MODE_SPATIAL: 0,
MODE_CANVAS_ITEM: 1,
};
String  get_code();
String  get_code();
Texture  get_default_texture_param(String param);
enum.Shader::Mode  get_mode();
enum.Shader::Mode  get_mode();
bool  has_param(String name);
void  set_code(String code);
void  set_default_texture_param(String param, Texture texture);
};
#endif