/* THIS FILE IS GENERATED */
#include "Directory.h"
Error Directory::change_dir(String p_todir){
	return Error::from_wasgo_id(_wasgo_Directory_wrapper_change_dir(wasgo_id, ((Variant) p_todir).get_wasgo_id()));
}
Error Directory::copy(String p_from, String p_to){
	return Error::from_wasgo_id(_wasgo_Directory_wrapper_copy(wasgo_id, ((Variant) p_from).get_wasgo_id(), ((Variant) p_to).get_wasgo_id()));
}
bool Directory::current_is_dir(){
	return (bool) _wasgo_Directory_wrapper_current_is_dir(wasgo_id);
}
bool Directory::dir_exists(String p_path){
	return (bool) _wasgo_Directory_wrapper_dir_exists(wasgo_id, ((Variant) p_path).get_wasgo_id());
}
bool Directory::file_exists(String p_path){
	return (bool) _wasgo_Directory_wrapper_file_exists(wasgo_id, ((Variant) p_path).get_wasgo_id());
}
String Directory::get_current_dir(){
	return String::from_wasgo_id(_wasgo_Directory_wrapper_get_current_dir(wasgo_id));
}
int Directory::get_current_drive(){
	return (int) _wasgo_Directory_wrapper_get_current_drive(wasgo_id);
}
String Directory::get_drive(int p_idx){
	return String::from_wasgo_id(_wasgo_Directory_wrapper_get_drive(wasgo_id, p_idx));
}
int Directory::get_drive_count(){
	return (int) _wasgo_Directory_wrapper_get_drive_count(wasgo_id);
}
String Directory::get_next(){
	return String::from_wasgo_id(_wasgo_Directory_wrapper_get_next(wasgo_id));
}
int Directory::get_space_left(){
	return (int) _wasgo_Directory_wrapper_get_space_left(wasgo_id);
}
Error Directory::list_dir_begin(bool p_skip_navigational = (bool) false, bool p_skip_hidden = (bool) false){
	return Error::from_wasgo_id(_wasgo_Directory_wrapper_list_dir_begin(wasgo_id, p_skip_navigational, p_skip_hidden));
}
void Directory::list_dir_end(){
	_wasgo_Directory_wrapper_list_dir_end(wasgo_id);
}
Error Directory::make_dir(String p_path){
	return Error::from_wasgo_id(_wasgo_Directory_wrapper_make_dir(wasgo_id, ((Variant) p_path).get_wasgo_id()));
}
Error Directory::make_dir_recursive(String p_path){
	return Error::from_wasgo_id(_wasgo_Directory_wrapper_make_dir_recursive(wasgo_id, ((Variant) p_path).get_wasgo_id()));
}
Error Directory::open(String p_path){
	return Error::from_wasgo_id(_wasgo_Directory_wrapper_open(wasgo_id, ((Variant) p_path).get_wasgo_id()));
}
Error Directory::remove(String p_path){
	return Error::from_wasgo_id(_wasgo_Directory_wrapper_remove(wasgo_id, ((Variant) p_path).get_wasgo_id()));
}
Error Directory::rename(String p_from, String p_to){
	return Error::from_wasgo_id(_wasgo_Directory_wrapper_rename(wasgo_id, ((Variant) p_from).get_wasgo_id(), ((Variant) p_to).get_wasgo_id()));
}