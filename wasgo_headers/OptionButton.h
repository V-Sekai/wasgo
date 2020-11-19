/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "PopupMenu.h"
#include "Texture.h"
#include "Variant.h"
#include "Button.h"
class OptionButton : public Button{
public: OptionButton();
void  _focused(int arg0);
Array  _get_items();
Array  _get_items();
void  _select_int(int arg0);
void  _selected(int arg0);
void  _set_items(Array arg0);
void  add_icon_item(Texture texture, String label, int id = -1);
void  add_item(String label, int id = -1);
void  add_separator();
void  add_separator();
void  clear();
void  clear();
int  get_item_count();
int  get_item_count();
Texture  get_item_icon(int idx);
int  get_item_id(int idx);
int  get_item_index(int id);
Variant  get_item_metadata(int idx);
String  get_item_text(int idx);
PopupMenu  get_popup();
PopupMenu  get_popup();
int  get_selected();
int  get_selected();
int  get_selected_id();
int  get_selected_id();
Variant  get_selected_metadata();
Variant  get_selected_metadata();
bool  is_item_disabled(int idx);
void  remove_item(int idx);
void  select(int idx);
void  set_item_disabled(int idx, bool disabled);
void  set_item_icon(int idx, Texture texture);
void  set_item_id(int idx, int id);
void  set_item_metadata(int idx, Variant metadata);
void  set_item_text(int idx, String text);
};