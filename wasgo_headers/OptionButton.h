/* THIS FILE IS GENERATED */
#ifndef OPTIONBUTTON_H
#define OPTIONBUTTON_H

#include "wasgo\wasgo.h"

#include "PopupMenu.h"
#include "Variant.h"
#include "Texture.h"
#include "Button.h"
#include "ustring.h"
class OptionButton : public Button{
public:
void add_icon_item(Texture p_texture, String p_label, int p_id = (int) -1);
void add_item(String p_label, int p_id = (int) -1);
void add_separator();
void clear();
int get_item_count();
Texture get_item_icon(int p_idx);
int get_item_id(int p_idx);
int get_item_index(int p_id);
Variant get_item_metadata(int p_idx);
String get_item_text(int p_idx);
PopupMenu get_popup();
int get_selected();
int get_selected_id();
Variant get_selected_metadata();
bool is_item_disabled(int p_idx);
void remove_item(int p_idx);
void select(int p_idx);
void set_item_disabled(int p_idx, bool p_disabled);
void set_item_icon(int p_idx, Texture p_texture);
void set_item_id(int p_idx, int p_id);
void set_item_metadata(int p_idx, Variant p_metadata);
void set_item_text(int p_idx, String p_text);

protected:
OptionButton(WasGoId p_wasgo_id);
public:
OptionButton();
~OptionButton();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_OptionButton_wrapper_add_icon_item(WasGoId wasgo_id, WasGoId p_texture, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_id);
void _wasgo_OptionButton_wrapper_add_item(WasGoId wasgo_id, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_id);
void _wasgo_OptionButton_wrapper_add_separator(WasGoId wasgo_id);
void _wasgo_OptionButton_wrapper_clear(WasGoId wasgo_id);
int _wasgo_OptionButton_wrapper_get_item_count(WasGoId wasgo_id);
WasGoId _wasgo_OptionButton_wrapper_get_item_icon(WasGoId wasgo_id, int p_idx);
int _wasgo_OptionButton_wrapper_get_item_id(WasGoId wasgo_id, int p_idx);
int _wasgo_OptionButton_wrapper_get_item_index(WasGoId wasgo_id, int p_id);
WasGoId _wasgo_OptionButton_wrapper_get_item_metadata(WasGoId wasgo_id, int p_idx);
void _wasgo_OptionButton_wrapper_get_item_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
WasGoId _wasgo_OptionButton_wrapper_get_popup(WasGoId wasgo_id);
int _wasgo_OptionButton_wrapper_get_selected(WasGoId wasgo_id);
int _wasgo_OptionButton_wrapper_get_selected_id(WasGoId wasgo_id);
WasGoId _wasgo_OptionButton_wrapper_get_selected_metadata(WasGoId wasgo_id);
int _wasgo_OptionButton_wrapper_is_item_disabled(WasGoId wasgo_id, int p_idx);
void _wasgo_OptionButton_wrapper_remove_item(WasGoId wasgo_id, int p_idx);
void _wasgo_OptionButton_wrapper_select(WasGoId wasgo_id, int p_idx);
void _wasgo_OptionButton_wrapper_set_item_disabled(WasGoId wasgo_id, int p_idx, bool p_disabled);
void _wasgo_OptionButton_wrapper_set_item_icon(WasGoId wasgo_id, int p_idx, WasGoId p_texture);
void _wasgo_OptionButton_wrapper_set_item_id(WasGoId wasgo_id, int p_idx, int p_id);
void _wasgo_OptionButton_wrapper_set_item_metadata(WasGoId wasgo_id, int p_idx, WasGoId p_metadata);
void _wasgo_OptionButton_wrapper_set_item_text(WasGoId wasgo_id, int p_idx, const uint8_t * p_text, int p_text_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_OptionButton_constructor();
    void _wasgo_OptionButton_destructor(WasGoId p_wasgo_id);
            
}
#endif