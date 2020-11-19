/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Object.h"
#include "Variant.h"
class UndoRedo : public Object{
public: UndoRedo();
enum MergeMode{
MERGE_DISABLE: 0,
MERGE_ENDS: 1,
};
void  add_do_method(Object object, String method);
void  add_do_property(Object object, String property, Variant value);
void  add_do_reference(Object object);
void  add_undo_method(Object object, String method);
void  add_undo_property(Object object, String property, Variant value);
void  add_undo_reference(Object object);
void  clear_history(bool increase_version = true);
void  commit_action();
void  commit_action();
void  create_action(String name, int merge_mode = 0);
String  get_current_action_name();
String  get_current_action_name();
int  get_version();
int  get_version();
bool  has_redo();
bool  has_redo();
bool  has_undo();
bool  has_undo();
bool  is_commiting_action();
bool  is_commiting_action();
bool  redo();
bool  redo();
bool  undo();
bool  undo();
};