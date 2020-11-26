/* THIS FILE IS GENERATED */
#ifndef TREEITEM_H
#define TREEITEM_H

#include <stdint.h>

#include "Dictionary.h"
#include "String.h"
#include "Rect2.h"
#include "Texture.h"
#include "Object.h"
#include "Variant.h"
class TreeItem : public Object{
public: TreeItem();
enum TreeCellMode{
CELL_MODE_STRING: 0,
CELL_MODE_CHECK: 1,
CELL_MODE_RANGE: 2,
CELL_MODE_ICON: 3,
};
enum TextAlign{
ALIGN_LEFT: 0,
ALIGN_CENTER: 1,
};
void  add_button(int column, Texture button, int button_idx = -1, bool disabled = false, String tooltip = "");
Variant  call_recursive(String method);
void  clear_custom_bg_color(int column);
void  clear_custom_color(int column);
void  deselect(int column);
void  erase_button(int column, int button_idx);
Texture  get_button(int column, int button_idx);
int  get_button_count(int column);
String  get_button_tooltip(int column, int button_idx);
enum.TreeItem::TreeCellMode  get_cell_mode(int column);
TreeItem  get_children();
TreeItem  get_children();
Color  get_custom_bg_color(int column);
Color  get_custom_color(int column);
int  get_custom_minimum_height();
int  get_custom_minimum_height();
bool  get_expand_right(int column);
Texture  get_icon(int column);
int  get_icon_max_width(int column);
Color  get_icon_modulate(int column);
Rect2  get_icon_region(int column);
Variant  get_metadata(int column);
TreeItem  get_next();
TreeItem  get_next();
TreeItem  get_next_visible(bool wrap = false);
TreeItem  get_parent();
TreeItem  get_parent();
TreeItem  get_prev();
TreeItem  get_prev();
TreeItem  get_prev_visible(bool wrap = false);
float  get_range(int column);
Dictionary  get_range_config(int column);
String  get_text(int column);
enum.TreeItem::TextAlign  get_text_align(int column);
String  get_tooltip(int column);
bool  is_button_disabled(int column, int button_idx);
bool  is_checked(int column);
bool  is_collapsed();
bool  is_collapsed();
bool  is_custom_set_as_button(int column);
bool  is_editable(int column);
bool  is_folding_disabled();
bool  is_folding_disabled();
bool  is_selectable(int column);
bool  is_selected(int column);
void  move_to_bottom();
void  move_to_bottom();
void  move_to_top();
void  move_to_top();
void  remove_child(Object child);
void  select(int column);
void  set_button(int column, int button_idx, Texture button);
void  set_button_disabled(int column, int button_idx, bool disabled);
void  set_cell_mode(int column, int mode);
void  set_checked(int column, bool checked);
void  set_collapsed(bool enable);
void  set_custom_as_button(int column, bool enable);
void  set_custom_bg_color(int column, Color color, bool just_outline = false);
void  set_custom_color(int column, Color color);
void  set_custom_draw(int column, Object object, String callback);
void  set_custom_minimum_height(int height);
void  set_disable_folding(bool disable);
void  set_editable(int column, bool enabled);
void  set_expand_right(int column, bool enable);
void  set_icon(int column, Texture texture);
void  set_icon_max_width(int column, int width);
void  set_icon_modulate(int column, Color modulate);
void  set_icon_region(int column, Rect2 region);
void  set_metadata(int column, Variant meta);
void  set_range(int column, float value);
void  set_range_config(int column, float min, float max, float step, bool expr = false);
void  set_selectable(int column, bool selectable);
void  set_text(int column, String text);
void  set_text_align(int column, int text_align);
void  set_tooltip(int column, String tooltip);
};
#endif