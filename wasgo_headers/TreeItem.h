/* THIS FILE IS GENERATED */
#ifndef TREEITEM_H
#define TREEITEM_H

#include "wasgo\wasgo.h"

#include "Rect2.h"
#include "Texture.h"
#include "ustring.h"
#include "Object.h"
#include "Color.h"
#include "Variant.h"
class TreeItem : public Object{
public:
enum TextAlign{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT
};
enum TreeCellMode{
CELL_MODE_STRING,
CELL_MODE_CHECK,
CELL_MODE_RANGE,
CELL_MODE_ICON,
CELL_MODE_CUSTOM
};
void add_button(int p_column, Texture p_button, int p_button_idx = (int) -1, bool p_disabled = (bool) false, String p_tooltip = (String) );
Variant call_recursive(String p_method);
void clear_custom_bg_color(int p_column);
void clear_custom_color(int p_column);
void deselect(int p_column);
void erase_button(int p_column, int p_button_idx);
Texture get_button(int p_column, int p_button_idx);
int get_button_count(int p_column);
String get_button_tooltip(int p_column, int p_button_idx);
TreeItem::TreeCellMode get_cell_mode(int p_column);
TreeItem get_children();
Color get_custom_bg_color(int p_column);
Color get_custom_color(int p_column);
int get_custom_minimum_height();
bool get_expand_right(int p_column);
Texture get_icon(int p_column);
int get_icon_max_width(int p_column);
Color get_icon_modulate(int p_column);
Rect2 get_icon_region(int p_column);
Variant get_metadata(int p_column);
TreeItem get_next();
TreeItem get_next_visible(bool p_wrap = (bool) false);
TreeItem get_parent();
TreeItem get_prev();
TreeItem get_prev_visible(bool p_wrap = (bool) false);
float get_range(int p_column);
Dictionary get_range_config(int p_column);
String get_suffix(int p_column);
String get_text(int p_column);
TreeItem::TextAlign get_text_align(int p_column);
String get_tooltip(int p_column);
bool is_button_disabled(int p_column, int p_button_idx);
bool is_checked(int p_column);
bool is_collapsed();
bool is_custom_set_as_button(int p_column);
bool is_editable(int p_column);
bool is_folding_disabled();
bool is_selectable(int p_column);
bool is_selected(int p_column);
void move_to_bottom();
void move_to_top();
void remove_child(Object p_child);
void select(int p_column);
void set_button(int p_column, int p_button_idx, Texture p_button);
void set_button_disabled(int p_column, int p_button_idx, bool p_disabled);
void set_cell_mode(int p_column, TreeItem::TreeCellMode p_mode);
void set_checked(int p_column, bool p_checked);
void set_collapsed(bool p_enable);
void set_custom_as_button(int p_column, bool p_enable);
void set_custom_bg_color(int p_column, Color p_color, bool p_just_outline = (bool) false);
void set_custom_color(int p_column, Color p_color);
void set_custom_draw(int p_column, Object p_object, String p_callback);
void set_custom_minimum_height(int p_height);
void set_disable_folding(bool p_disable);
void set_editable(int p_column, bool p_enabled);
void set_expand_right(int p_column, bool p_enable);
void set_icon(int p_column, Texture p_texture);
void set_icon_max_width(int p_column, int p_width);
void set_icon_modulate(int p_column, Color p_modulate);
void set_icon_region(int p_column, Rect2 p_region);
void set_metadata(int p_column, Variant p_meta);
void set_range(int p_column, float p_value);
void set_range_config(int p_column, float p_min, float p_max, float p_step, bool p_expr = (bool) false);
void set_selectable(int p_column, bool p_selectable);
void set_suffix(int p_column, String p_text);
void set_text(int p_column, String p_text);
void set_text_align(int p_column, TreeItem::TextAlign p_text_align);
void set_tooltip(int p_column, String p_tooltip);
};


//Wrapper Functions
extern "C"{
void _wasgo_TreeItem_wrapper_add_button(WasGoId wasgo_id, int p_column, WasGoId p_button, int p_button_idx, bool p_disabled, const uint8_t * p_tooltip, int p_tooltip_wasgo_buffer_size);
WasGoId _wasgo_TreeItem_wrapper_call_recursive(WasGoId wasgo_id, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_clear_custom_bg_color(WasGoId wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_clear_custom_color(WasGoId wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_deselect(WasGoId wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_erase_button(WasGoId wasgo_id, int p_column, int p_button_idx);
WasGoId _wasgo_TreeItem_wrapper_get_button(WasGoId wasgo_id, int p_column, int p_button_idx);
int _wasgo_TreeItem_wrapper_get_button_count(WasGoId wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_get_button_tooltip(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_column, int p_button_idx);
WasGoId _wasgo_TreeItem_wrapper_get_cell_mode(WasGoId wasgo_id, int p_column);
WasGoId _wasgo_TreeItem_wrapper_get_children(WasGoId wasgo_id);
void _wasgo_TreeItem_wrapper_get_custom_bg_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_column);
void _wasgo_TreeItem_wrapper_get_custom_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_column);
int _wasgo_TreeItem_wrapper_get_custom_minimum_height(WasGoId wasgo_id);
int _wasgo_TreeItem_wrapper_get_expand_right(WasGoId wasgo_id, int p_column);
WasGoId _wasgo_TreeItem_wrapper_get_icon(WasGoId wasgo_id, int p_column);
int _wasgo_TreeItem_wrapper_get_icon_max_width(WasGoId wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_get_icon_modulate(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_column);
void _wasgo_TreeItem_wrapper_get_icon_region(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_column);
WasGoId _wasgo_TreeItem_wrapper_get_metadata(WasGoId wasgo_id, int p_column);
WasGoId _wasgo_TreeItem_wrapper_get_next(WasGoId wasgo_id);
WasGoId _wasgo_TreeItem_wrapper_get_next_visible(WasGoId wasgo_id, bool p_wrap);
WasGoId _wasgo_TreeItem_wrapper_get_parent(WasGoId wasgo_id);
WasGoId _wasgo_TreeItem_wrapper_get_prev(WasGoId wasgo_id);
WasGoId _wasgo_TreeItem_wrapper_get_prev_visible(WasGoId wasgo_id, bool p_wrap);
float _wasgo_TreeItem_wrapper_get_range(WasGoId wasgo_id, int p_column);
WasGoId _wasgo_TreeItem_wrapper_get_range_config(WasGoId wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_get_suffix(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_column);
void _wasgo_TreeItem_wrapper_get_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_column);
WasGoId _wasgo_TreeItem_wrapper_get_text_align(WasGoId wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_get_tooltip(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_column);
int _wasgo_TreeItem_wrapper_is_button_disabled(WasGoId wasgo_id, int p_column, int p_button_idx);
int _wasgo_TreeItem_wrapper_is_checked(WasGoId wasgo_id, int p_column);
int _wasgo_TreeItem_wrapper_is_collapsed(WasGoId wasgo_id);
int _wasgo_TreeItem_wrapper_is_custom_set_as_button(WasGoId wasgo_id, int p_column);
int _wasgo_TreeItem_wrapper_is_editable(WasGoId wasgo_id, int p_column);
int _wasgo_TreeItem_wrapper_is_folding_disabled(WasGoId wasgo_id);
int _wasgo_TreeItem_wrapper_is_selectable(WasGoId wasgo_id, int p_column);
int _wasgo_TreeItem_wrapper_is_selected(WasGoId wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_move_to_bottom(WasGoId wasgo_id);
void _wasgo_TreeItem_wrapper_move_to_top(WasGoId wasgo_id);
void _wasgo_TreeItem_wrapper_remove_child(WasGoId wasgo_id, WasGoId p_child);
void _wasgo_TreeItem_wrapper_select(WasGoId wasgo_id, int p_column);
void _wasgo_TreeItem_wrapper_set_button(WasGoId wasgo_id, int p_column, int p_button_idx, WasGoId p_button);
void _wasgo_TreeItem_wrapper_set_button_disabled(WasGoId wasgo_id, int p_column, int p_button_idx, bool p_disabled);
void _wasgo_TreeItem_wrapper_set_cell_mode(WasGoId wasgo_id, int p_column, WasGoId p_mode);
void _wasgo_TreeItem_wrapper_set_checked(WasGoId wasgo_id, int p_column, bool p_checked);
void _wasgo_TreeItem_wrapper_set_collapsed(WasGoId wasgo_id, bool p_enable);
void _wasgo_TreeItem_wrapper_set_custom_as_button(WasGoId wasgo_id, int p_column, bool p_enable);
void _wasgo_TreeItem_wrapper_set_custom_bg_color(WasGoId wasgo_id, int p_column, const uint8_t * p_color, int p_color_wasgo_buffer_size, bool p_just_outline);
void _wasgo_TreeItem_wrapper_set_custom_color(WasGoId wasgo_id, int p_column, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_custom_draw(WasGoId wasgo_id, int p_column, WasGoId p_object, const uint8_t * p_callback, int p_callback_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_custom_minimum_height(WasGoId wasgo_id, int p_height);
void _wasgo_TreeItem_wrapper_set_disable_folding(WasGoId wasgo_id, bool p_disable);
void _wasgo_TreeItem_wrapper_set_editable(WasGoId wasgo_id, int p_column, bool p_enabled);
void _wasgo_TreeItem_wrapper_set_expand_right(WasGoId wasgo_id, int p_column, bool p_enable);
void _wasgo_TreeItem_wrapper_set_icon(WasGoId wasgo_id, int p_column, WasGoId p_texture);
void _wasgo_TreeItem_wrapper_set_icon_max_width(WasGoId wasgo_id, int p_column, int p_width);
void _wasgo_TreeItem_wrapper_set_icon_modulate(WasGoId wasgo_id, int p_column, const uint8_t * p_modulate, int p_modulate_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_icon_region(WasGoId wasgo_id, int p_column, const uint8_t * p_region, int p_region_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_metadata(WasGoId wasgo_id, int p_column, WasGoId p_meta);
void _wasgo_TreeItem_wrapper_set_range(WasGoId wasgo_id, int p_column, float p_value);
void _wasgo_TreeItem_wrapper_set_range_config(WasGoId wasgo_id, int p_column, float p_min, float p_max, float p_step, bool p_expr);
void _wasgo_TreeItem_wrapper_set_selectable(WasGoId wasgo_id, int p_column, bool p_selectable);
void _wasgo_TreeItem_wrapper_set_suffix(WasGoId wasgo_id, int p_column, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_text(WasGoId wasgo_id, int p_column, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_TreeItem_wrapper_set_text_align(WasGoId wasgo_id, int p_column, WasGoId p_text_align);
void _wasgo_TreeItem_wrapper_set_tooltip(WasGoId wasgo_id, int p_column, const uint8_t * p_tooltip, int p_tooltip_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_TreeItem_constructor();
    void _wasgo_TreeItem_destructor(WasGoId p_wasgo_id);
            
}
#endif