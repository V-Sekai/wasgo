/* THIS FILE IS GENERATED */
#ifndef RICHTEXTLABEL_H
#define RICHTEXTLABEL_H

#include <stdint.h>

#include "String.h"
#include "VScrollBar.h"
#include "InputEvent.h"
#include "PoolStringArray.h"
#include "Erro.h"
#include "Dictionary.h"
#include "Control.h"
#include "Variant.h"
#include "Font.h"
#include "Texture.h"
class RichTextLabel : public Control{
public: RichTextLabel();
enum Align{
ALIGN_LEFT: 0,
ALIGN_CENTER: 1,
ALIGN_RIGHT: 2,
};
enum ListType{
LIST_NUMBERS: 0,
LIST_LETTERS: 1,
};
enum ItemType{
ITEM_FRAME: 0,
ITEM_TEXT: 1,
ITEM_IMAGE: 2,
ITEM_NEWLINE: 3,
ITEM_FONT: 4,
ITEM_COLOR: 5,
ITEM_UNDERLINE: 6,
ITEM_STRIKETHROUGH: 7,
ITEM_ALIGN: 8,
ITEM_INDENT: 9,
ITEM_LIST: 10,
ITEM_TABLE: 11,
ITEM_FADE: 12,
ITEM_SHAKE: 13,
ITEM_WAVE: 14,
ITEM_TORNADO: 15,
ITEM_RAINBOW: 16,
ITEM_META: 17,
};
void  _gui_input(InputEvent arg0);
void  _scroll_changed(float arg0);
void  add_image(Texture image, int width = 0, int height = 0);
void  add_text(String text);
enum.Error  append_bbcode(String bbcode);
void  clear();
void  clear();
String  get_bbcode();
String  get_bbcode();
int  get_content_height();
int  get_content_height();
Array  get_effects();
Array  get_effects();
int  get_line_count();
int  get_line_count();
float  get_percent_visible();
float  get_percent_visible();
int  get_tab_size();
int  get_tab_size();
String  get_text();
String  get_text();
int  get_total_character_count();
int  get_total_character_count();
VScrollBar  get_v_scroll();
VScrollBar  get_v_scroll();
int  get_visible_characters();
int  get_visible_characters();
int  get_visible_line_count();
int  get_visible_line_count();
void  install_effect(Variant effect);
bool  is_meta_underlined();
bool  is_meta_underlined();
bool  is_overriding_selected_font_color();
bool  is_overriding_selected_font_color();
bool  is_scroll_active();
bool  is_scroll_active();
bool  is_scroll_following();
bool  is_scroll_following();
bool  is_selection_enabled();
bool  is_selection_enabled();
bool  is_using_bbcode();
bool  is_using_bbcode();
void  newline();
void  newline();
enum.Error  parse_bbcode(String bbcode);
Dictionary  parse_expressions_for_values(PoolStringArray expressions);
void  pop();
void  pop();
void  push_align(int align);
void  push_bold();
void  push_bold();
void  push_bold_italics();
void  push_bold_italics();
void  push_cell();
void  push_cell();
void  push_color(Color color);
void  push_font(Font font);
void  push_indent(int level);
void  push_italics();
void  push_italics();
void  push_list(int type);
void  push_meta(Variant data);
void  push_mono();
void  push_mono();
void  push_normal();
void  push_normal();
void  push_strikethrough();
void  push_strikethrough();
void  push_table(int columns);
void  push_underline();
void  push_underline();
bool  remove_line(int line);
void  scroll_to_line(int line);
void  set_bbcode(String text);
void  set_effects(Array effects);
void  set_meta_underline(bool enable);
void  set_override_selected_font_color(bool override);
void  set_percent_visible(float percent_visible);
void  set_scroll_active(bool active);
void  set_scroll_follow(bool follow);
void  set_selection_enabled(bool enabled);
void  set_tab_size(int spaces);
void  set_table_column_expand(int column, bool expand, int ratio);
void  set_text(String text);
void  set_use_bbcode(bool enable);
void  set_visible_characters(int amount);
};
#endif