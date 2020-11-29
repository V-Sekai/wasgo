/* THIS FILE IS GENERATED */
#ifndef LABEL_H
#define LABEL_H

#include "stdint.h"

#include "Variant.h"
#include "Control.h"
class Label : public Control{
public: Label();
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
};
#endif