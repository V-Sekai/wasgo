/* THIS FILE IS GENERATED */
#ifndef UNDOREDO_H
#define UNDOREDO_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "ustring.h"
class UndoRedo : public Object{
public:
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
void clear_history(bool p_increase_version = (bool) true);
void commit_action();
void create_action(String p_name, UndoRedo::MergeMode p_merge_mode = (UndoRedo::MergeMode) 0);
String get_current_action_name();
int get_version();
bool has_redo();
bool has_undo();
bool is_commiting_action();
bool redo();
bool undo();

protected:
public:
explicit UndoRedo(WasGoId p_wasgo_id);
explicit UndoRedo(Object other);
UndoRedo new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_UndoRedo_wrapper_add_do_method(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_UndoRedo_wrapper_add_do_property(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_property, int p_property_wasgo_buffer_size, WasGoId p_value);
void _wasgo_UndoRedo_wrapper_add_do_reference(WasGoId wasgo_id, WasGoId p_object);
void _wasgo_UndoRedo_wrapper_add_undo_method(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_UndoRedo_wrapper_add_undo_property(WasGoId wasgo_id, WasGoId p_object, const uint8_t * p_property, int p_property_wasgo_buffer_size, WasGoId p_value);
void _wasgo_UndoRedo_wrapper_add_undo_reference(WasGoId wasgo_id, WasGoId p_object);
void _wasgo_UndoRedo_wrapper_clear_history(WasGoId wasgo_id, bool p_increase_version);
void _wasgo_UndoRedo_wrapper_commit_action(WasGoId wasgo_id);
void _wasgo_UndoRedo_wrapper_create_action(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoId p_merge_mode);
void _wasgo_UndoRedo_wrapper_get_current_action_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_UndoRedo_wrapper_get_version(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_has_redo(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_has_undo(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_is_commiting_action(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_redo(WasGoId wasgo_id);
int _wasgo_UndoRedo_wrapper_undo(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_UndoRedo_constructor();
            
}
#endif