/* THIS FILE IS GENERATED */
#ifndef SPINBOX_H
#define SPINBOX_H

#include "wasgo\wasgoid.h"

#include "Ustring.h"
#include "Range.h"
#include "LineEdit.h"
class SpinBox : public Range{
public:
void apply();
LineEdit::Align get_align();
LineEdit get_line_edit();
String get_prefix();
String get_suffix();
bool is_editable();
void set_align(LineEdit::Align p_align);
void set_editable(bool p_editable);
void set_prefix(String p_prefix);
void set_suffix(String p_suffix);

protected:
public:
explicit SpinBox(WasGoID p_wasgo_id);
explicit SpinBox(Range other);
SpinBox();
SpinBox new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SpinBox_wrapper_apply(WasGoID wasgo_id);
WasGoID _wasgo_SpinBox_wrapper_get_align(WasGoID wasgo_id);
WasGoID _wasgo_SpinBox_wrapper_get_line_edit(WasGoID wasgo_id);
void _wasgo_SpinBox_wrapper_get_prefix(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SpinBox_wrapper_get_suffix(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_SpinBox_wrapper_is_editable(WasGoID wasgo_id);
void _wasgo_SpinBox_wrapper_set_align(WasGoID wasgo_id, WasGoID p_align);
void _wasgo_SpinBox_wrapper_set_editable(WasGoID wasgo_id, bool p_editable);
void _wasgo_SpinBox_wrapper_set_prefix(WasGoID wasgo_id, const uint8_t * p_prefix, int p_prefix_wasgo_buffer_size);
void _wasgo_SpinBox_wrapper_set_suffix(WasGoID wasgo_id, const uint8_t * p_suffix, int p_suffix_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_SpinBox_constructor();
            
}
#endif