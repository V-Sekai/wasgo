/* THIS FILE IS GENERATED */
#ifndef CHARFXTRANSFORM_H
#define CHARFXTRANSFORM_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
class CharFXTransform : public Reference{
public: CharFXTransform();
int get_absolute_index();
int get_character();
Color get_color();
float get_elapsed_time();
Dictionary get_environment();
Vector2 get_offset();
int get_relative_index();
bool is_visible();
void set_absolute_index(int p_index);
void set_character(int p_character);
void set_color(Color p_color);
void set_elapsed_time(float p_time);
void set_environment(Dictionary p_environment);
void set_offset(Vector2 p_offset);
void set_relative_index(int p_index);
void set_visibility(bool p_visibility);
};
#endif