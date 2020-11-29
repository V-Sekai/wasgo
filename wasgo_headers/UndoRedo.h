/* THIS FILE IS GENERATED */
#ifndef UNDOREDO_H
#define UNDOREDO_H

#include "stdint.h"

#include "Object.h"
#include "Variant.h"
class UndoRedo : public Object{
public: UndoRedo();
enum MergeMode{
MERGE_DISABLE,
MERGE_ENDS,
MERGE_ALL
};
void add_do_method(Object p_object, String p_method);
void add_do_property(Object p_object, String p_property, Variant p_value);
void add_do_reference(Object p_object);
void add_undo_method(Object p_object, String p_method);
void add_undo_property(Object p_object, String p_property, Variant p_value);
void add_undo_reference(Object p_object);
void clear_history(bool p_increase_version = (bool) True);
void commit_action();
void create_action(String p_name, UndoRedo::MergeMode p_merge_mode = (UndoRedo::MergeMode) 0);
String get_current_action_name();
int get_version();
bool has_redo();
bool has_undo();
bool is_commiting_action();
bool redo();
bool undo();
};
#endif