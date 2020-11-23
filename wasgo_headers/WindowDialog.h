/* THIS FILE IS GENERATED */
#ifndef WINDOWDIALOG_H
#define WINDOWDIALOG_H

#include <stdint.h>

#include "String.h"
#include "TextureButton.h"
#include "Popup.h"
#include "InputEvent.h"
class WindowDialog : public Popup{
public: WindowDialog();
void  _closed();
void  _closed();
void  _gui_input(InputEvent arg0);
TextureButton  get_close_button();
TextureButton  get_close_button();
bool  get_resizable();
bool  get_resizable();
String  get_title();
String  get_title();
void  set_resizable(bool resizable);
void  set_title(String title);
};
#endif