/* THIS FILE IS GENERATED */
#ifndef LABEL_H
#define LABEL_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Control.h"
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
Label(WasGoId p_wasgo_id);
public:
Label();
~Label();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Label_wrapper_get_align(WasGoId wasgo_id);
int _wasgo_Label_wrapper_get_line_count(WasGoId wasgo_id);
int _wasgo_Label_wrapper_get_line_height(WasGoId wasgo_id);
int _wasgo_Label_wrapper_get_lines_skipped(WasGoId wasgo_id);
int _wasgo_Label_wrapper_get_max_lines_visible(WasGoId wasgo_id);
float _wasgo_Label_wrapper_get_percent_visible(WasGoId wasgo_id);
void _wasgo_Label_wrapper_get_text(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Label_wrapper_get_total_character_count(WasGoId wasgo_id);
WasGoId _wasgo_Label_wrapper_get_valign(WasGoId wasgo_id);
int _wasgo_Label_wrapper_get_visible_characters(WasGoId wasgo_id);
int _wasgo_Label_wrapper_get_visible_line_count(WasGoId wasgo_id);
int _wasgo_Label_wrapper_has_autowrap(WasGoId wasgo_id);
int _wasgo_Label_wrapper_is_clipping_text(WasGoId wasgo_id);
int _wasgo_Label_wrapper_is_uppercase(WasGoId wasgo_id);
void _wasgo_Label_wrapper_set_align(WasGoId wasgo_id, WasGoId p_align);
void _wasgo_Label_wrapper_set_autowrap(WasGoId wasgo_id, bool p_enable);
void _wasgo_Label_wrapper_set_clip_text(WasGoId wasgo_id, bool p_enable);
void _wasgo_Label_wrapper_set_lines_skipped(WasGoId wasgo_id, int p_lines_skipped);
void _wasgo_Label_wrapper_set_max_lines_visible(WasGoId wasgo_id, int p_lines_visible);
void _wasgo_Label_wrapper_set_percent_visible(WasGoId wasgo_id, float p_percent_visible);
void _wasgo_Label_wrapper_set_text(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
void _wasgo_Label_wrapper_set_uppercase(WasGoId wasgo_id, bool p_enable);
void _wasgo_Label_wrapper_set_valign(WasGoId wasgo_id, WasGoId p_valign);
void _wasgo_Label_wrapper_set_visible_characters(WasGoId wasgo_id, int p_amount);

    //constructor and destructor wrappers
    WasGoId _wasgo_Label_constructor();
    void _wasgo_Label_destructor(WasGoId p_wasgo_id);
            
}
#endif