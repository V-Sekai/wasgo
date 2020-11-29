/* THIS FILE IS GENERATED */
#ifndef TREEITEM_H
#define TREEITEM_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
#include "Object.h"
class TreeItem : public Object{
public: TreeItem();
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
void add_button(int p_column, Texture p_button, int p_button_idx = (int) -1, bool p_disabled = (bool) False, String p_tooltip = (String) );
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
TreeItem get_next_visible(bool p_wrap = (bool) False);
TreeItem get_parent();
TreeItem get_prev();
TreeItem get_prev_visible(bool p_wrap = (bool) False);
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
void set_custom_bg_color(int p_column, Color p_color, bool p_just_outline = (bool) False);
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
void set_range_config(int p_column, float p_min, float p_max, float p_step, bool p_expr = (bool) False);
void set_selectable(int p_column, bool p_selectable);
void set_suffix(int p_column, String p_text);
void set_text(int p_column, String p_text);
void set_text_align(int p_column, TreeItem::TextAlign p_text_align);
void set_tooltip(int p_column, String p_tooltip);
};
#endif