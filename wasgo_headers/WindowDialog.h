/* THIS FILE IS GENERATED */
#ifndef WINDOWDIALOG_H
#define WINDOWDIALOG_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "TextureButton.h"
#include "Popup.h"
class WindowDialog : public Popup{
public:
TextureButton get_close_button();
bool get_resizable();
String get_title();
void set_resizable(bool p_resizable);
void set_title(String p_title);

protected:
WindowDialog(WasGoId p_wasgo_id);
public:
WindowDialog();
~WindowDialog();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_WindowDialog_wrapper_get_close_button(WasGoId wasgo_id);
int _wasgo_WindowDialog_wrapper_get_resizable(WasGoId wasgo_id);
void _wasgo_WindowDialog_wrapper_get_title(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_WindowDialog_wrapper_set_resizable(WasGoId wasgo_id, bool p_resizable);
void _wasgo_WindowDialog_wrapper_set_title(WasGoId wasgo_id, const uint8_t * p_title, int p_title_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_WindowDialog_constructor();
    void _wasgo_WindowDialog_destructor(WasGoId p_wasgo_id);
            
}
#endif