/* THIS FILE IS GENERATED */
#ifndef CHARFXTRANSFORM_H
#define CHARFXTRANSFORM_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Color.h"
#include "Variant.h"
#include "Vector2.h"
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
public:
explicit CharFXTransform(WasGoID p_wasgo_id);
explicit CharFXTransform(Reference other);
CharFXTransform new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CharFXTransform_wrapper_get_absolute_index(WasGoID wasgo_id);
int _wasgo_CharFXTransform_wrapper_get_character(WasGoID wasgo_id);
void _wasgo_CharFXTransform_wrapper_get_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_CharFXTransform_wrapper_get_elapsed_time(WasGoID wasgo_id);
WasGoID _wasgo_CharFXTransform_wrapper_get_environment(WasGoID wasgo_id);
void _wasgo_CharFXTransform_wrapper_get_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_CharFXTransform_wrapper_get_relative_index(WasGoID wasgo_id);
int _wasgo_CharFXTransform_wrapper_is_visible(WasGoID wasgo_id);
void _wasgo_CharFXTransform_wrapper_set_absolute_index(WasGoID wasgo_id, int p_index);
void _wasgo_CharFXTransform_wrapper_set_character(WasGoID wasgo_id, int p_character);
void _wasgo_CharFXTransform_wrapper_set_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_CharFXTransform_wrapper_set_elapsed_time(WasGoID wasgo_id, float p_time);
void _wasgo_CharFXTransform_wrapper_set_environment(WasGoID wasgo_id, WasGoID p_environment);
void _wasgo_CharFXTransform_wrapper_set_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_CharFXTransform_wrapper_set_relative_index(WasGoID wasgo_id, int p_index);
void _wasgo_CharFXTransform_wrapper_set_visibility(WasGoID wasgo_id, bool p_visibility);

    //constructor wrappers
    WasGoID _wasgo_CharFXTransform_constructor();
            
}
#endif