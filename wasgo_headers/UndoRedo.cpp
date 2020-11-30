/* THIS FILE IS GENERATED */
#include "UndoRedo.h"
void UndoRedo::add_do_method(Object p_object, String p_method){
	_wasgo_UndoRedo_wrapper_add_do_method(wasgo_id, ((Variant) object).get_wasgo_id(), ((Variant) method).get_wasgo_id());
}
void UndoRedo::add_do_property(Object p_object, String p_property, Variant p_value){
	_wasgo_UndoRedo_wrapper_add_do_property(wasgo_id, ((Variant) object).get_wasgo_id(), ((Variant) property).get_wasgo_id(), ((Variant) value).get_wasgo_id());
}
void UndoRedo::add_do_reference(Object p_object){
	_wasgo_UndoRedo_wrapper_add_do_reference(wasgo_id, ((Variant) object).get_wasgo_id());
}
void UndoRedo::add_undo_method(Object p_object, String p_method){
	_wasgo_UndoRedo_wrapper_add_undo_method(wasgo_id, ((Variant) object).get_wasgo_id(), ((Variant) method).get_wasgo_id());
}
void UndoRedo::add_undo_property(Object p_object, String p_property, Variant p_value){
	_wasgo_UndoRedo_wrapper_add_undo_property(wasgo_id, ((Variant) object).get_wasgo_id(), ((Variant) property).get_wasgo_id(), ((Variant) value).get_wasgo_id());
}
void UndoRedo::add_undo_reference(Object p_object){
	_wasgo_UndoRedo_wrapper_add_undo_reference(wasgo_id, ((Variant) object).get_wasgo_id());
}
void UndoRedo::clear_history(bool p_increase_version = (bool) True){
	_wasgo_UndoRedo_wrapper_clear_history(wasgo_id, increase_version);
}
void UndoRedo::commit_action(){
	_wasgo_UndoRedo_wrapper_commit_action(wasgo_id);
}
void UndoRedo::create_action(String p_name, UndoRedo::MergeMode p_merge_mode = (UndoRedo::MergeMode) 0){
	_wasgo_UndoRedo_wrapper_create_action(wasgo_id, ((Variant) name).get_wasgo_id(), ((Variant) merge_mode).get_wasgo_id());
}
String UndoRedo::get_current_action_name(){
	return String::from_wasgo_id(_wasgo_UndoRedo_wrapper_get_current_action_name(wasgo_id));
}
int UndoRedo::get_version(){
	return (int) _wasgo_UndoRedo_wrapper_get_version(wasgo_id));
}
bool UndoRedo::has_redo(){
	return (bool) _wasgo_UndoRedo_wrapper_has_redo(wasgo_id));
}
bool UndoRedo::has_undo(){
	return (bool) _wasgo_UndoRedo_wrapper_has_undo(wasgo_id));
}
bool UndoRedo::is_commiting_action(){
	return (bool) _wasgo_UndoRedo_wrapper_is_commiting_action(wasgo_id));
}
bool UndoRedo::redo(){
	return (bool) _wasgo_UndoRedo_wrapper_redo(wasgo_id));
}
bool UndoRedo::undo(){
	return (bool) _wasgo_UndoRedo_wrapper_undo(wasgo_id));
}

UndoRedo::UndoRedo(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
UndoRedo::~UndoRedo(){
}