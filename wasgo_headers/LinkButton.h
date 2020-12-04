/* THIS FILE IS GENERATED */
#ifndef LINKBUTTON_H
#define LINKBUTTON_H

#include "wasgo\wasgo.h"

#include "BaseButton.h"
#include "ustring.h"
class LinkButton : public BaseButton{
public:
enum UnderlineMode{
UNDERLINE_MODE_ALWAYS,
UNDERLINE_MODE_ON_HOVER,
UNDERLINE_MODE_NEVER
};
String get_text();
LinkButton::UnderlineMode get_underline_mode();
void set_text(String p_text);
void set_underline_mode(LinkButton::UnderlineMode p_underline_mode);

protected:
public:
explicit LinkButton(WasGoID p_wasgo_id);
explicit LinkButton(BaseButton other);
LinkButton new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_LinkButton_wrapper_get_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_LinkButton_wrapper_get_underline_mode(WasGoID wasgo_id);
void _wasgo_LinkButton_wrapper_set_text(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_LinkButton_wrapper_set_underline_mode(WasGoID wasgo_id, WasGoID p_underline_mode);

    //constructor wrappers
    WasGoID _wasgo_LinkButton_constructor();
            
}
#endif