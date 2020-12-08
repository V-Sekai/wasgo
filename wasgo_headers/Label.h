/* THIS FILE IS GENERATED */
#ifndef LABEL_H
#define LABEL_H

#include "wasgo\wasgoid.h"

#include "Control.h"
#include "Ustring.h"
class Label : public Control{
public:
enum Align{
ALIGN_LEFT,
ALIGN_CENTER,
ALIGN_RIGHT,
ALIGN_FILL
};
enum VAlign{
VALIGN_TOP,
VALIGN_CENTER,
VALIGN_BOTTOM,
VALIGN_FILL
};
Label::Align get_align();
int get_line_count();
int get_line_height();
int get_lines_skipped();
int get_max_lines_visible();
float get_percent_visible();
String get_text();
int get_total_character_count();
Label::VAlign get_valign();
int get_visible_characters();
int get_visible_line_count();
bool has_autowrap();
bool is_clipping_text();
bool is_uppercase();
void set_align(Label::Align p_align);
void set_autowrap(bool p_enable);
void set_clip_text(bool p_enable);
void set_lines_skipped(int p_lines_skipped);
void set_max_lines_visible(int p_lines_visible);
void set_percent_visible(float p_percent_visible);
void set_text(String p_text);
void set_uppercase(bool p_enable);
void set_valign(Label::VAlign p_valign);
void set_visible_characters(int p_amount);

protected:
public:
explicit Label(WasGoID p_wasgo_id);
explicit Label(Control other);
Label();
Label new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Label_wrapper_get_align(WasGoID wasgo_id);
int _wasgo_Label_wrapper_get_line_count(WasGoID wasgo_id);
int _wasgo_Label_wrapper_get_line_height(WasGoID wasgo_id);
int _wasgo_Label_wrapper_get_lines_skipped(WasGoID wasgo_id);
int _wasgo_Label_wrapper_get_max_lines_visible(WasGoID wasgo_id);
float _wasgo_Label_wrapper_get_percent_visible(WasGoID wasgo_id);
void _wasgo_Label_wrapper_get_text(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Label_wrapper_get_total_character_count(WasGoID wasgo_id);
WasGoID _wasgo_Label_wrapper_get_valign(WasGoID wasgo_id);
int _wasgo_Label_wrapper_get_visible_characters(WasGoID wasgo_id);
int _wasgo_Label_wrapper_get_visible_line_count(WasGoID wasgo_id);
int _wasgo_Label_wrapper_has_autowrap(WasGoID wasgo_id);
int _wasgo_Label_wrapper_is_clipping_text(WasGoID wasgo_id);
int _wasgo_Label_wrapper_is_uppercase(WasGoID wasgo_id);
void _wasgo_Label_wrapper_set_align(WasGoID wasgo_id, WasGoID p_align);
void _wasgo_Label_wrapper_set_autowrap(WasGoID wasgo_id, bool p_enable);
void _wasgo_Label_wrapper_set_clip_text(WasGoID wasgo_id, bool p_enable);
void _wasgo_Label_wrapper_set_lines_skipped(WasGoID wasgo_id, int p_lines_skipped);
void _wasgo_Label_wrapper_set_max_lines_visible(WasGoID wasgo_id, int p_lines_visible);
void _wasgo_Label_wrapper_set_percent_visible(WasGoID wasgo_id, float p_percent_visible);
void _wasgo_Label_wrapper_set_text(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_Label_wrapper_set_uppercase(WasGoID wasgo_id, bool p_enable);
void _wasgo_Label_wrapper_set_valign(WasGoID wasgo_id, WasGoID p_valign);
void _wasgo_Label_wrapper_set_visible_characters(WasGoID wasgo_id, int p_amount);

    //constructor wrappers
    WasGoID _wasgo_Label_constructor();
            
}
#endif