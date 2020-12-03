/* THIS FILE IS GENERATED */
#ifndef SHORTCUT_H
#define SHORTCUT_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "InputEvent.h"
#include "Resource.h"
class ShortCut : public Resource{
public:
String get_as_text();
InputEvent get_shortcut();
bool is_shortcut(InputEvent p_event);
bool is_valid();
void set_shortcut(InputEvent p_event);

protected:
ShortCut(WasGoId p_wasgo_id);
public:
ShortCut();
~ShortCut();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ShortCut_wrapper_get_as_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_ShortCut_wrapper_get_shortcut(WasGoId wasgo_id);
int _wasgo_ShortCut_wrapper_is_shortcut(WasGoId wasgo_id, WasGoId p_event);
int _wasgo_ShortCut_wrapper_is_valid(WasGoId wasgo_id);
void _wasgo_ShortCut_wrapper_set_shortcut(WasGoId wasgo_id, WasGoId p_event);

    //constructor and destructor wrappers
    WasGoId _wasgo_ShortCut_constructor();
    void _wasgo_ShortCut_destructor(WasGoId p_wasgo_id);
            
}
#endif