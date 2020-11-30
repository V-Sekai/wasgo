/* THIS FILE IS GENERATED */
#ifndef UNDOREDO_H
#define UNDOREDO_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
class UndoRedo : public Object{
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

UndoRedo(WasGoId p_wasgo_id);
~UndoRedo();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_UndoRedo_wrapper_add_do_method(WasGoId wasgo_id, WasGo::WasGoId p_object, WasGo::WasGoId p_method);
void _wasgo_UndoRedo_wrapper_add_do_property(WasGoId wasgo_id, WasGo::WasGoId p_object, WasGo::WasGoId p_property, WasGo::WasGoId p_value);
void _wasgo_UndoRedo_wrapper_add_do_reference(WasGoId wasgo_id, WasGo::WasGoId p_object);
void _wasgo_UndoRedo_wrapper_add_undo_method(WasGoId wasgo_id, WasGo::WasGoId p_object, WasGo::WasGoId p_method);
void _wasgo_UndoRedo_wrapper_add_undo_property(WasGoId wasgo_id, WasGo::WasGoId p_object, WasGo::WasGoId p_property, WasGo::WasGoId p_value);
void _wasgo_UndoRedo_wrapper_add_undo_reference(WasGoId wasgo_id, WasGo::WasGoId p_object);
void _wasgo_UndoRedo_wrapper_clear_history(WasGoId wasgo_id, bool p_increase_version);
void _wasgo_UndoRedo_wrapper_commit_action(WasGoId wasgo_id);
void _wasgo_UndoRedo_wrapper_create_action(WasGoId wasgo_id, WasGo::WasGoId p_name, WasGo::WasGoId p_merge_mode);
WasGo::WasGoId _wasgo_UndoRedo_wrapper_get_current_action_name(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_get_version(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_has_redo(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_has_undo(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_is_commiting_action(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_redo(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_undo(WasGoId wasgo_id);
}
#endif