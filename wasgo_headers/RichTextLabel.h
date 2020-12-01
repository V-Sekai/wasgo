/* THIS FILE IS GENERATED */
#ifndef RICHTEXTLABEL_H
#define RICHTEXTLABEL_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Control.h"
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

RichTextLabel(WasGoId p_wasgo_id);
~RichTextLabel();
            
};


//Wrapper Functions
extern "C"{
}
#endif