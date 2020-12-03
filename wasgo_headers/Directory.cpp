/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Directory.h"
Error Directory::change_dir(String p_todir){

    Variant wasgo_var_todir = p_todir;
    uint8_t wasgo_buffer_todir[256];
    int wasgo_size_todir = 256;
    encode_variant(wasgo_var_todir, wasgo_buffer_todir, wasgo_size_todir);
    
	return Error(_wasgo_Directory_wrapper_change_dir(wasgo_id, wasgo_buffer_todir, wasgo_size_todir));
}
Error Directory::copy(String p_from, String p_to){

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[256];
    int wasgo_size_from = 256;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    uint8_t wasgo_buffer_to[256];
    int wasgo_size_to = 256;
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	return Error(_wasgo_Directory_wrapper_copy(wasgo_id, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_to, wasgo_size_to));
}
bool Directory::current_is_dir(){
	return (bool) _wasgo_Directory_wrapper_current_is_dir(wasgo_id);
}
bool Directory::dir_exists(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return (bool) _wasgo_Directory_wrapper_dir_exists(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
bool Directory::file_exists(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return (bool) _wasgo_Directory_wrapper_file_exists(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
String Directory::get_current_dir(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Directory_wrapper_get_current_dir(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int Directory::get_current_drive(){
	return (int) _wasgo_Directory_wrapper_get_current_drive(wasgo_id);
}
String Directory::get_drive(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Directory_wrapper_get_drive(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int Directory::get_drive_count(){
	return (int) _wasgo_Directory_wrapper_get_drive_count(wasgo_id);
}
String Directory::get_next(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Directory_wrapper_get_next(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int Directory::get_space_left(){
	return (int) _wasgo_Directory_wrapper_get_space_left(wasgo_id);
}
Error Directory::list_dir_begin(bool p_skip_navigational = (bool) false, bool p_skip_hidden = (bool) false){
	return Error(_wasgo_Directory_wrapper_list_dir_begin(wasgo_id, p_skip_navigational, p_skip_hidden));
}
void Directory::list_dir_end(){
	_wasgo_Directory_wrapper_list_dir_end(wasgo_id);
}
Error Directory::make_dir(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_Directory_wrapper_make_dir(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error Directory::make_dir_recursive(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_Directory_wrapper_make_dir_recursive(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error Directory::open(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_Directory_wrapper_open(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error Directory::remove(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_Directory_wrapper_remove(wasgo_id, wasgo_buffer_path, wasgo_size_path));
}
Error Directory::rename(String p_from, String p_to){

    Variant wasgo_var_from = p_from;
    uint8_t wasgo_buffer_from[256];
    int wasgo_size_from = 256;
    encode_variant(wasgo_var_from, wasgo_buffer_from, wasgo_size_from);
    

    Variant wasgo_var_to = p_to;
    uint8_t wasgo_buffer_to[256];
    int wasgo_size_to = 256;
    encode_variant(wasgo_var_to, wasgo_buffer_to, wasgo_size_to);
    
	return Error(_wasgo_Directory_wrapper_rename(wasgo_id, wasgo_buffer_from, wasgo_size_from, wasgo_buffer_to, wasgo_size_to));
}

Directory::Directory(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
Directory::Directory(){
    wasgo_id = _wasgo_Directory_constructor();
}
Directory::~Directory(){
    _wasgo_Directory_destructor(wasgo_id);
}