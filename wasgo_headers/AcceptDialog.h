/* THIS FILE IS GENERATED */
#ifndef ACCEPTDIALOG_H
#define ACCEPTDIALOG_H

#include <stdint.h>

#include "Label.h"
#include "WindowDialog.h"
#include "String.h"
#include "Node.h"
#include "Button.h"
class AcceptDialog : public WindowDialog{
public: AcceptDialog();
void  _builtin_text_entered(String arg0);
void  _custom_action(String arg0);
void  _ok();
void  _ok();
Button  add_button(String text, bool right = false, String action = "");
Button  add_cancel(String name);
bool  get_hide_on_ok();
bool  get_hide_on_ok();
Label  get_label();
Label  get_label();
Button  get_ok();
Button  get_ok();
String  get_text();
String  get_text();
bool  has_autowrap();
bool  has_autowrap();
void  register_text_enter(Node line_edit);
void  set_autowrap(bool autowrap);
void  set_hide_on_ok(bool enabled);
void  set_text(String text);
};
#endif