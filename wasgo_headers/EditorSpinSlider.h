/* THIS FILE IS GENERATED */
#ifndef EDITORSPINSLIDER_H
#define EDITORSPINSLIDER_H

#include <stdint.h>

#include "String.h"
#include "Range.h"
#include "InputEvent.h"
class EditorSpinSlider : public Range{
public: EditorSpinSlider();
void  _grabber_gui_input(InputEvent arg0);
void  _grabber_mouse_entered();
void  _grabber_mouse_entered();
void  _grabber_mouse_exited();
void  _grabber_mouse_exited();
void  _gui_input(InputEvent arg0);
void  _value_focus_exited();
void  _value_focus_exited();
void  _value_input_closed();
void  _value_input_closed();
void  _value_input_entered(String arg0);
String  get_label();
String  get_label();
bool  is_flat();
bool  is_flat();
bool  is_read_only();
bool  is_read_only();
void  set_flat(bool flat);
void  set_label(String label);
void  set_read_only(bool read_only);
};
#endif