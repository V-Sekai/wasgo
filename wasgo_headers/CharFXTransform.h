/* THIS FILE IS GENERATED */
#ifndef CHARFXTRANSFORM_H
#define CHARFXTRANSFORM_H

#include <stdint.h>

#include "Reference.h"
#include "Vector2.h"
#include "Dictionary.h"
#include "Variant.h"
class CharFXTransform : public Reference{
public: CharFXTransform();
int  get_absolute_index();
int  get_absolute_index();
int  get_character();
int  get_character();
Color  get_color();
Color  get_color();
float  get_elapsed_time();
float  get_elapsed_time();
Dictionary  get_environment();
Dictionary  get_environment();
Vector2  get_offset();
Vector2  get_offset();
int  get_relative_index();
int  get_relative_index();
bool  is_visible();
bool  is_visible();
void  set_absolute_index(int index);
void  set_character(int character);
void  set_color(Color color);
void  set_elapsed_time(float time);
void  set_environment(Dictionary environment);
void  set_offset(Vector2 offset);
void  set_relative_index(int index);
void  set_visibility(bool visibility);
};
#endif