/* THIS FILE IS GENERATED */
#ifndef CHARFXTRANSFORM_H
#define CHARFXTRANSFORM_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "Vector2.h"
#include "Variant.h"
#include "Reference.h"
class CharFXTransform : public Reference{
public:
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

protected:
CharFXTransform(WasGoId p_wasgo_id);
public:
CharFXTransform();
~CharFXTransform();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CharFXTransform_wrapper_get_absolute_index(WasGoId wasgo_id);
int _wasgo_CharFXTransform_wrapper_get_character(WasGoId wasgo_id);
void _wasgo_CharFXTransform_wrapper_get_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_CharFXTransform_wrapper_get_elapsed_time(WasGoId wasgo_id);
WasGoId _wasgo_CharFXTransform_wrapper_get_environment(WasGoId wasgo_id);
void _wasgo_CharFXTransform_wrapper_get_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_CharFXTransform_wrapper_get_relative_index(WasGoId wasgo_id);
int _wasgo_CharFXTransform_wrapper_is_visible(WasGoId wasgo_id);
void _wasgo_CharFXTransform_wrapper_set_absolute_index(WasGoId wasgo_id, int p_index);
void _wasgo_CharFXTransform_wrapper_set_character(WasGoId wasgo_id, int p_character);
void _wasgo_CharFXTransform_wrapper_set_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_CharFXTransform_wrapper_set_elapsed_time(WasGoId wasgo_id, float p_time);
void _wasgo_CharFXTransform_wrapper_set_environment(WasGoId wasgo_id, WasGoId p_environment);
void _wasgo_CharFXTransform_wrapper_set_offset(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_CharFXTransform_wrapper_set_relative_index(WasGoId wasgo_id, int p_index);
void _wasgo_CharFXTransform_wrapper_set_visibility(WasGoId wasgo_id, bool p_visibility);

    //constructor and destructor wrappers
    WasGoId _wasgo_CharFXTransform_constructor();
    void _wasgo_CharFXTransform_destructor(WasGoId p_wasgo_id);
            
}
#endif