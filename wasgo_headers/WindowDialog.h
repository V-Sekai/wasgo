/* THIS FILE IS GENERATED */
#ifndef WINDOWDIALOG_H
#define WINDOWDIALOG_H

#include "wasgo\wasgo.h"

#include "Popup.h"
#include "TextureButton.h"
#include "ustring.h"
class WindowDialog : public Popup{
public:
TextureButton get_close_button();
bool get_resizable();
String get_title();
void set_resizable(bool p_resizable);
void set_title(String p_title);

protected:
public:
explicit WindowDialog(WasGoId p_wasgo_id);
explicit WindowDialog(Popup other);
WindowDialog new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_WindowDialog_wrapper_get_close_button(WasGoId wasgo_id);
int _wasgo_WindowDialog_wrapper_get_resizable(WasGoId wasgo_id);
void _wasgo_WindowDialog_wrapper_get_title(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_WindowDialog_wrapper_set_resizable(WasGoId wasgo_id, bool p_resizable);
void _wasgo_WindowDialog_wrapper_set_title(WasGoId wasgo_id, const uint8_t * p_title, int p_title_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_WindowDialog_constructor();
            
}
#endif