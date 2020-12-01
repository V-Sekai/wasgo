/* THIS FILE IS GENERATED */
#ifndef REFERENCERECT_H
#define REFERENCERECT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Color.h"
#include "Control.h"
class ReferenceRect : public Control{
public:
Color get_border_color();
float get_border_width();
bool get_editor_only();
void set_border_color(Color p_color);
void set_border_width(float p_width);
void set_editor_only(bool p_enabled);

ReferenceRect(WasGoId p_wasgo_id);
~ReferenceRect();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ReferenceRect_wrapper_get_border_color(WasGoId wasgo_id);
float _wasgo_ReferenceRect_wrapper_get_border_width(WasGoId wasgo_id);
int _wasgo_ReferenceRect_wrapper_get_editor_only(WasGoId wasgo_id);
void _wasgo_ReferenceRect_wrapper_set_border_color(WasGoId wasgo_id, WasGoId p_color);
void _wasgo_ReferenceRect_wrapper_set_border_width(WasGoId wasgo_id, float p_width);
void _wasgo_ReferenceRect_wrapper_set_editor_only(WasGoId wasgo_id, bool p_enabled);
}
#endif