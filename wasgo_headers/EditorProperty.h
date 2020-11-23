/* THIS FILE IS GENERATED */
#ifndef EDITORPROPERTY_H
#define EDITORPROPERTY_H

#include <stdint.h>

#include "String.h"
#include "InputEvent.h"
#include "Container.h"
#include "Control.h"
#include "Variant.h"
#include "Object.h"
class EditorProperty : public Container{
public: EditorProperty();
void  _focusable_focused(int arg0);
void  _gui_input(InputEvent arg0);
void  add_focusable(Control control);
void  emit_changed(String property, Variant value, String field = "", bool changing = false);
Object  get_edited_object();
Object  get_edited_object();
String  get_edited_property();
String  get_edited_property();
String  get_label();
String  get_label();
String  get_tooltip_text();
String  get_tooltip_text();
bool  is_checkable();
bool  is_checkable();
bool  is_checked();
bool  is_checked();
bool  is_draw_red();
bool  is_draw_red();
bool  is_keying();
bool  is_keying();
bool  is_read_only();
bool  is_read_only();
void  set_bottom_editor(Control editor);
void  set_checkable(bool checkable);
void  set_checked(bool checked);
void  set_draw_red(bool draw_red);
void  set_keying(bool keying);
void  set_label(String text);
void  set_read_only(bool read_only);
void  update_property();
void  update_property();
};
#endif