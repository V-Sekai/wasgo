/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Control.h"
#include "String.h"
class Label : public Control{
public: Label();
enum Align{
ALIGN_LEFT: 0,
ALIGN_CENTER: 1,
ALIGN_RIGHT: 2,
};
enum VAlign{
VALIGN_TOP: 0,
VALIGN_CENTER: 1,
VALIGN_BOTTOM: 2,
};
enum.Label::Align  get_align();
enum.Label::Align  get_align();
int  get_line_count();
int  get_line_count();
int  get_line_height();
int  get_line_height();
int  get_lines_skipped();
int  get_lines_skipped();
int  get_max_lines_visible();
int  get_max_lines_visible();
float  get_percent_visible();
float  get_percent_visible();
String  get_text();
String  get_text();
int  get_total_character_count();
int  get_total_character_count();
enum.Label::VAlign  get_valign();
enum.Label::VAlign  get_valign();
int  get_visible_characters();
int  get_visible_characters();
int  get_visible_line_count();
int  get_visible_line_count();
bool  has_autowrap();
bool  has_autowrap();
bool  is_clipping_text();
bool  is_clipping_text();
bool  is_uppercase();
bool  is_uppercase();
void  set_align(int align);
void  set_autowrap(bool enable);
void  set_clip_text(bool enable);
void  set_lines_skipped(int lines_skipped);
void  set_max_lines_visible(int lines_visible);
void  set_percent_visible(float percent_visible);
void  set_text(String text);
void  set_uppercase(bool enable);
void  set_valign(int valign);
void  set_visible_characters(int amount);
};