/* THIS FILE IS GENERATED */
#ifndef SPINBOX_H
#define SPINBOX_H

#include <stdint.h>

#include "String.h"
#include "LineEdit.h"
#include "Range.h"
#include "InputEvent.h"
class SpinBox : public Range{
public: SpinBox();
void  _gui_input(InputEvent arg0);
void  _line_edit_focus_exit();
void  _line_edit_focus_exit();
void  _line_edit_input(InputEvent arg0);
void  _range_click_timeout();
void  _range_click_timeout();
void  _text_entered(String arg0);
void  apply();
void  apply();
enum.LineEdit::Align  get_align();
enum.LineEdit::Align  get_align();
LineEdit  get_line_edit();
LineEdit  get_line_edit();
String  get_prefix();
String  get_prefix();
String  get_suffix();
String  get_suffix();
bool  is_editable();
bool  is_editable();
void  set_align(int align);
void  set_editable(bool editable);
void  set_prefix(String prefix);
void  set_suffix(String suffix);
};
#endif