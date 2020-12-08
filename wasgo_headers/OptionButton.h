/* THIS FILE IS GENERATED */
#ifndef OPTIONBUTTON_H
#define OPTIONBUTTON_H

#include "wasgo\wasgoid.h"

#include "Button.h"
#include "PopupMenu.h"
#include "Variant.h"
#include "Ustring.h"
#include "Texture.h"
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
public:
explicit OptionButton(WasGoID p_wasgo_id);
explicit OptionButton(Button other);
OptionButton();
OptionButton new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_OptionButton_wrapper_add_icon_item(WasGoID wasgo_id, WasGoID p_texture, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_id);
void _wasgo_OptionButton_wrapper_add_item(WasGoID wasgo_id, const uint8_t * p_label, int p_label_wasgo_buffer_size, int p_id);
void _wasgo_OptionButton_wrapper_add_separator(WasGoID wasgo_id);
void _wasgo_OptionButton_wrapper_clear(WasGoID wasgo_id);
int _wasgo_OptionButton_wrapper_get_item_count(WasGoID wasgo_id);
WasGoID _wasgo_OptionButton_wrapper_get_item_icon(WasGoID wasgo_id, int p_idx);
int _wasgo_OptionButton_wrapper_get_item_id(WasGoID wasgo_id, int p_idx);
int _wasgo_OptionButton_wrapper_get_item_index(WasGoID wasgo_id, int p_id);
WasGoID _wasgo_OptionButton_wrapper_get_item_metadata(WasGoID wasgo_id, int p_idx);
void _wasgo_OptionButton_wrapper_get_item_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
WasGoID _wasgo_OptionButton_wrapper_get_popup(WasGoID wasgo_id);
int _wasgo_OptionButton_wrapper_get_selected(WasGoID wasgo_id);
int _wasgo_OptionButton_wrapper_get_selected_id(WasGoID wasgo_id);
WasGoID _wasgo_OptionButton_wrapper_get_selected_metadata(WasGoID wasgo_id);
int _wasgo_OptionButton_wrapper_is_item_disabled(WasGoID wasgo_id, int p_idx);
void _wasgo_OptionButton_wrapper_remove_item(WasGoID wasgo_id, int p_idx);
void _wasgo_OptionButton_wrapper_select(WasGoID wasgo_id, int p_idx);
void _wasgo_OptionButton_wrapper_set_item_disabled(WasGoID wasgo_id, int p_idx, bool p_disabled);
void _wasgo_OptionButton_wrapper_set_item_icon(WasGoID wasgo_id, int p_idx, WasGoID p_texture);
void _wasgo_OptionButton_wrapper_set_item_id(WasGoID wasgo_id, int p_idx, int p_id);
void _wasgo_OptionButton_wrapper_set_item_metadata(WasGoID wasgo_id, int p_idx, WasGoID p_metadata);
void _wasgo_OptionButton_wrapper_set_item_text(WasGoID wasgo_id, int p_idx, const uint8_t * p_text, int p_text_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_OptionButton_constructor();
            
}
#endif