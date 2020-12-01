/* THIS FILE IS GENERATED */
#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Control.h"
class TextEdit : public Control{
public:
enum MenuItems{
MENU_CUT,
MENU_COPY,
MENU_PASTE,
MENU_CLEAR,
MENU_SELECT_ALL,
MENU_UNDO,
MENU_REDO,
MENU_MAX
};
enum SearchFlags{
SEARCH_MATCH_CASE,
SEARCH_WHOLE_WORDS,
SEARCH_BACKWARDS
};
enum SearchResult{
SEARCH_RESULT_COLUMN,
SEARCH_RESULT_LINE
};

TextEdit(WasGoId p_wasgo_id);
~TextEdit();
            
};


//Wrapper Functions
extern "C"{
}
#endif