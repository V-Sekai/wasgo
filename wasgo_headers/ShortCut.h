/* THIS FILE IS GENERATED */
#ifndef SHORTCUT_H
#define SHORTCUT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "InputEvent.h"
#include "Variant.h"
#include "Resource.h"
class ShortCut : public Resource{
String get_as_text();
InputEvent get_shortcut();
bool is_shortcut(InputEvent p_event);
bool is_valid();
void set_shortcut(InputEvent p_event);

ShortCut(WasGoId p_wasgo_id);
~ShortCut();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_ShortCut_wrapper_get_as_text(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_ShortCut_wrapper_get_shortcut(WasGoId wasgo_id);
int _wasgo_ShortCut_wrapper_is_shortcut(WasGoId wasgo_id, WasGo::WasGoId p_event);
int _wasgo_ShortCut_wrapper_is_valid(WasGoId wasgo_id);
void _wasgo_ShortCut_wrapper_set_shortcut(WasGoId wasgo_id, WasGo::WasGoId p_event);
}
#endif