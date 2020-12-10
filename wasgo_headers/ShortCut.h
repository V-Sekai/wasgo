/* THIS FILE IS GENERATED */
#ifndef SHORTCUT_H
#define SHORTCUT_H

#include "wasgo\wasgoid.h"

#include "Ustring.h"
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
public:
explicit ShortCut(WasGoID p_wasgo_id);
explicit ShortCut(Resource other);
ShortCut();
ShortCut new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_ShortCut_wrapper_get_as_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_ShortCut_wrapper_get_shortcut(WasGoID wasgo_id);
int _wasgo_ShortCut_wrapper_is_shortcut(WasGoID wasgo_id, WasGoID p_event);
int _wasgo_ShortCut_wrapper_is_valid(WasGoID wasgo_id);
void _wasgo_ShortCut_wrapper_set_shortcut(WasGoID wasgo_id, WasGoID p_event);

    //constructor wrappers
    WasGoID _wasgo_ShortCut_constructor();
            
}
#endif