/* THIS FILE IS GENERATED */
#ifndef RICHTEXTLABEL_H
#define RICHTEXTLABEL_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "error_list.h"
#include "Control.h"
#include "Font.h"
#include "VScrollBar.h"
#include "Variant.h"
#include "Texture.h"
#include "ustring.h"
class RichTextLabel : public Control{
public:
enum Align{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT,
ALIGN_FILL
};
enum ItemType{
ITEM_FRAME,
ITEM_TEXT,
ITEM_IMAGE,
ITEM_NEWLINE,
ITEM_FONT,
ITEM_COLOR,
ITEM_UNDERLINE,
ITEM_STRIKETHROUGH,
ITEM_ALIGN,
ITEM_INDENT,
ITEM_LIST,
ITEM_TABLE,
ITEM_FADE,
ITEM_SHAKE,
ITEM_WAVE,
ITEM_TORNADO,
ITEM_RAINBOW,
ITEM_CUSTOMFX,
ITEM_META
};
enum ListType{
LIST_NUMBERS,
LIST_LETTERS,
LIST_DOTS
};
void add_image(Texture p_image, int p_width = (int) 0, int p_height = (int) 0);
void add_text(String p_text);
Error append_bbcode(String p_bbcode);
void clear();
String get_bbcode();
int get_content_height();
Array get_effects();
int get_line_count();
float get_percent_visible();
int get_tab_size();
String get_text();
int get_total_character_count();
VScrollBar get_v_scroll();
int get_visible_characters();
int get_visible_line_count();
void install_effect(Variant p_effect);
bool is_fit_content_height_enabled();
bool is_meta_underlined();
bool is_overriding_selected_font_color();
bool is_scroll_active();
bool is_scroll_following();
bool is_selection_enabled();
bool is_using_bbcode();
void newline();
Error parse_bbcode(String p_bbcode);
Dictionary parse_expressions_for_values(PoolStringArray p_expressions);
void pop();
void push_align(RichTextLabel::Align p_align);
void push_bold();
void push_bold_italics();
void push_cell();
void push_color(Color p_color);
void push_font(Font p_font);
void push_indent(int p_level);
void push_italics();
void push_list(RichTextLabel::ListType p_type);
void push_meta(Variant p_data);
void push_mono();
void push_normal();
void push_strikethrough();
void push_table(int p_columns);
void push_underline();
bool remove_line(int p_line);
void scroll_to_line(int p_line);
void set_bbcode(String p_text);
void set_effects(Array p_effects);
void set_fit_content_height(bool p_enabled);
void set_meta_underline(bool p_enable);
void set_override_selected_font_color(bool p_override);
void set_percent_visible(float p_percent_visible);
void set_scroll_active(bool p_active);
void set_scroll_follow(bool p_follow);
void set_selection_enabled(bool p_enabled);
void set_tab_size(int p_spaces);
void set_table_column_expand(int p_column, bool p_expand, int p_ratio);
void set_text(String p_text);
void set_use_bbcode(bool p_enable);
void set_visible_characters(int p_amount);

protected:
RichTextLabel(WasGoId p_wasgo_id);
public:
RichTextLabel();
~RichTextLabel();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RichTextLabel_wrapper_add_image(WasGoId wasgo_id, WasGoId p_image, int p_width, int p_height);
void _wasgo_RichTextLabel_wrapper_add_text(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
WasGoId _wasgo_RichTextLabel_wrapper_append_bbcode(WasGoId wasgo_id, const uint8_t * p_bbcode, int p_bbcode_wasgo_buffer_size);
void _wasgo_RichTextLabel_wrapper_clear(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_get_bbcode(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_RichTextLabel_wrapper_get_content_height(WasGoId wasgo_id);
WasGoId _wasgo_RichTextLabel_wrapper_get_effects(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_get_line_count(WasGoId wasgo_id);
float _wasgo_RichTextLabel_wrapper_get_percent_visible(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_get_tab_size(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_get_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_RichTextLabel_wrapper_get_total_character_count(WasGoId wasgo_id);
WasGoId _wasgo_RichTextLabel_wrapper_get_v_scroll(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_get_visible_characters(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_get_visible_line_count(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_install_effect(WasGoId wasgo_id, WasGoId p_effect);
int _wasgo_RichTextLabel_wrapper_is_fit_content_height_enabled(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_meta_underlined(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_overriding_selected_font_color(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_scroll_active(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_scroll_following(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_selection_enabled(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_is_using_bbcode(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_newline(WasGoId wasgo_id);
WasGoId _wasgo_RichTextLabel_wrapper_parse_bbcode(WasGoId wasgo_id, const uint8_t * p_bbcode, int p_bbcode_wasgo_buffer_size);
WasGoId _wasgo_RichTextLabel_wrapper_parse_expressions_for_values(WasGoId wasgo_id, WasGoId p_expressions);
void _wasgo_RichTextLabel_wrapper_pop(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_align(WasGoId wasgo_id, WasGoId p_align);
void _wasgo_RichTextLabel_wrapper_push_bold(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_bold_italics(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_cell(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_color(WasGoId wasgo_id, const uint8_t * p_color, int p_color_wasgo_buffer_size);
void _wasgo_RichTextLabel_wrapper_push_font(WasGoId wasgo_id, WasGoId p_font);
void _wasgo_RichTextLabel_wrapper_push_indent(WasGoId wasgo_id, int p_level);
void _wasgo_RichTextLabel_wrapper_push_italics(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_list(WasGoId wasgo_id, WasGoId p_type);
void _wasgo_RichTextLabel_wrapper_push_meta(WasGoId wasgo_id, WasGoId p_data);
void _wasgo_RichTextLabel_wrapper_push_mono(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_normal(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_strikethrough(WasGoId wasgo_id);
void _wasgo_RichTextLabel_wrapper_push_table(WasGoId wasgo_id, int p_columns);
void _wasgo_RichTextLabel_wrapper_push_underline(WasGoId wasgo_id);
int _wasgo_RichTextLabel_wrapper_remove_line(WasGoId wasgo_id, int p_line);
void _wasgo_RichTextLabel_wrapper_scroll_to_line(WasGoId wasgo_id, int p_line);
void _wasgo_RichTextLabel_wrapper_set_bbcode(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_RichTextLabel_wrapper_set_effects(WasGoId wasgo_id, WasGoId p_effects);
void _wasgo_RichTextLabel_wrapper_set_fit_content_height(WasGoId wasgo_id, bool p_enabled);
void _wasgo_RichTextLabel_wrapper_set_meta_underline(WasGoId wasgo_id, bool p_enable);
void _wasgo_RichTextLabel_wrapper_set_override_selected_font_color(WasGoId wasgo_id, bool p_override);
void _wasgo_RichTextLabel_wrapper_set_percent_visible(WasGoId wasgo_id, float p_percent_visible);
void _wasgo_RichTextLabel_wrapper_set_scroll_active(WasGoId wasgo_id, bool p_active);
void _wasgo_RichTextLabel_wrapper_set_scroll_follow(WasGoId wasgo_id, bool p_follow);
void _wasgo_RichTextLabel_wrapper_set_selection_enabled(WasGoId wasgo_id, bool p_enabled);
void _wasgo_RichTextLabel_wrapper_set_tab_size(WasGoId wasgo_id, int p_spaces);
void _wasgo_RichTextLabel_wrapper_set_table_column_expand(WasGoId wasgo_id, int p_column, bool p_expand, int p_ratio);
void _wasgo_RichTextLabel_wrapper_set_text(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_RichTextLabel_wrapper_set_use_bbcode(WasGoId wasgo_id, bool p_enable);
void _wasgo_RichTextLabel_wrapper_set_visible_characters(WasGoId wasgo_id, int p_amount);

    //constructor and destructor wrappers
    WasGoId _wasgo_RichTextLabel_constructor();
    void _wasgo_RichTextLabel_destructor(WasGoId p_wasgo_id);
            
}
#endif