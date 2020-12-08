/* THIS FILE IS GENERATED */
#ifndef WINDOWDIALOG_H
#define WINDOWDIALOG_H

#include "wasgo\wasgoid.h"

#include "TextureButton.h"
#include "Popup.h"
#include "Ustring.h"
class WindowDialog : public Popup{
public:
TextureButton get_close_button();
bool get_resizable();
String get_title();
void set_resizable(bool p_resizable);
void set_title(String p_title);

protected:
public:
explicit WindowDialog(WasGoID p_wasgo_id);
explicit WindowDialog(Popup other);
WindowDialog();
WindowDialog new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_WindowDialog_wrapper_get_close_button(WasGoID wasgo_id);
int _wasgo_WindowDialog_wrapper_get_resizable(WasGoID wasgo_id);
void _wasgo_WindowDialog_wrapper_get_title(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_WindowDialog_wrapper_set_resizable(WasGoID wasgo_id, bool p_resizable);
void _wasgo_WindowDialog_wrapper_set_title(WasGoID wasgo_id, const uint8_t * p_title, int p_title_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_WindowDialog_constructor();
            
}
#endif