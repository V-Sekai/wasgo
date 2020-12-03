/* THIS FILE IS GENERATED */
#ifndef SPINBOX_H
#define SPINBOX_H

#include "wasgo\wasgo.h"

#include "LineEdit.h"
#include "Range.h"
#include "ustring.h"
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
SpinBox(WasGoId p_wasgo_id);
public:
SpinBox();
~SpinBox();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SpinBox_wrapper_apply(WasGoId wasgo_id);
WasGoId _wasgo_SpinBox_wrapper_get_align(WasGoId wasgo_id);
WasGoId _wasgo_SpinBox_wrapper_get_line_edit(WasGoId wasgo_id);
void _wasgo_SpinBox_wrapper_get_prefix(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_SpinBox_wrapper_get_suffix(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_SpinBox_wrapper_is_editable(WasGoId wasgo_id);
void _wasgo_SpinBox_wrapper_set_align(WasGoId wasgo_id, WasGoId p_align);
void _wasgo_SpinBox_wrapper_set_editable(WasGoId wasgo_id, bool p_editable);
void _wasgo_SpinBox_wrapper_set_prefix(WasGoId wasgo_id, const uint8_t * p_prefix, int p_prefix_wasgo_buffer_size);
void _wasgo_SpinBox_wrapper_set_suffix(WasGoId wasgo_id, const uint8_t * p_suffix, int p_suffix_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_SpinBox_constructor();
    void _wasgo_SpinBox_destructor(WasGoId p_wasgo_id);
            
}
#endif