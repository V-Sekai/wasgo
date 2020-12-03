/* THIS FILE IS GENERATED */
#ifndef ACCEPTDIALOG_H
#define ACCEPTDIALOG_H

#include "wasgo\wasgo.h"

#include "Button.h"
#include "ustring.h"
#include "Label.h"
#include "WindowDialog.h"
#include "Node.h"
class AcceptDialog : public WindowDialog{
public:
Button add_button(String p_text, bool p_right = (bool) false, String p_action = (String) );
Button add_cancel(String p_name);
bool get_hide_on_ok();
Label get_label();
Button get_ok();
String get_text();
bool has_autowrap();
void register_text_enter(Node p_line_edit);
void set_autowrap(bool p_autowrap);
void set_hide_on_ok(bool p_enabled);
void set_text(String p_text);

protected:
AcceptDialog(WasGoId p_wasgo_id);
public:
AcceptDialog();
~AcceptDialog();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_AcceptDialog_wrapper_add_button(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size, bool p_right, const uint8_t * p_action, int p_action_wasgo_buffer_size);
WasGoId _wasgo_AcceptDialog_wrapper_add_cancel(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_AcceptDialog_wrapper_get_hide_on_ok(WasGoId wasgo_id);
WasGoId _wasgo_AcceptDialog_wrapper_get_label(WasGoId wasgo_id);
WasGoId _wasgo_AcceptDialog_wrapper_get_ok(WasGoId wasgo_id);
void _wasgo_AcceptDialog_wrapper_get_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AcceptDialog_wrapper_has_autowrap(WasGoId wasgo_id);
void _wasgo_AcceptDialog_wrapper_register_text_enter(WasGoId wasgo_id, WasGoId p_line_edit);
void _wasgo_AcceptDialog_wrapper_set_autowrap(WasGoId wasgo_id, bool p_autowrap);
void _wasgo_AcceptDialog_wrapper_set_hide_on_ok(WasGoId wasgo_id, bool p_enabled);
void _wasgo_AcceptDialog_wrapper_set_text(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_AcceptDialog_constructor();
    void _wasgo_AcceptDialog_destructor(WasGoId p_wasgo_id);
            
}
#endif