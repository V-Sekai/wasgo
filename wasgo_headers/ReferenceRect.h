/* THIS FILE IS GENERATED */
#ifndef REFERENCERECT_H
#define REFERENCERECT_H

#include "wasgo\wasgo.h"

#include "Control.h"
#include "Color.h"
class ReferenceRect : public Control{
public:
Color get_border_color();
float get_border_width();
bool get_editor_only();
void set_border_color(Color p_color);
void set_border_width(float p_width);
void set_editor_only(bool p_enabled);

protected:
public:
explicit ReferenceRect(WasGoID p_wasgo_id);
explicit ReferenceRect(Control other);
ReferenceRect new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ReferenceRect_wrapper_get_border_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ReferenceRect_wrapper_get_border_width(WasGoID wasgo_id);
int _wasgo_ReferenceRect_wrapper_get_editor_only(WasGoID wasgo_id);
void _wasgo_ReferenceRect_wrapper_set_border_color(WasGoID wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_ReferenceRect_wrapper_set_border_width(WasGoID wasgo_id, float p_width);
void _wasgo_ReferenceRect_wrapper_set_editor_only(WasGoID wasgo_id, bool p_enabled);

    //constructor wrappers
    WasGoID _wasgo_ReferenceRect_constructor();
            
}
#endif