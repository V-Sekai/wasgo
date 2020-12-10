/* THIS FILE IS GENERATED */
#ifndef ACCEPTDIALOG_H
#define ACCEPTDIALOG_H

#include "wasgo\wasgoid.h"

#include "Label.h"
#include "WindowDialog.h"
#include "Ustring.h"
#include "Button.h"
class Node;
class AcceptDialog : public WindowDialog{
public:
Button add_button(String p_text, bool p_right = (bool) false, String p_action = String());
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
public:
explicit AcceptDialog(WasGoID p_wasgo_id);
explicit AcceptDialog(WindowDialog other);
AcceptDialog();
AcceptDialog new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_AcceptDialog_wrapper_add_button(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size, int wasgo_throwaway, bool p_right, const uint8_t * p_action, int p_action_wasgo_buffer_size);
WasGoID _wasgo_AcceptDialog_wrapper_add_cancel(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_AcceptDialog_wrapper_get_hide_on_ok(WasGoID wasgo_id);
WasGoID _wasgo_AcceptDialog_wrapper_get_label(WasGoID wasgo_id);
WasGoID _wasgo_AcceptDialog_wrapper_get_ok(WasGoID wasgo_id);
void _wasgo_AcceptDialog_wrapper_get_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_AcceptDialog_wrapper_has_autowrap(WasGoID wasgo_id);
void _wasgo_AcceptDialog_wrapper_register_text_enter(WasGoID wasgo_id, WasGoID p_line_edit);
void _wasgo_AcceptDialog_wrapper_set_autowrap(WasGoID wasgo_id, bool p_autowrap);
void _wasgo_AcceptDialog_wrapper_set_hide_on_ok(WasGoID wasgo_id, bool p_enabled);
void _wasgo_AcceptDialog_wrapper_set_text(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_AcceptDialog_constructor();
            
}
#endif