/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "InputEvent.h"
#include "TextureButton.h"
#include "Popup.h"
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