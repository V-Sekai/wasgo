/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "FileDialog.h"
void FileDialog::add_filter(String p_filter){

    Variant wasgo_var_filter = p_filter;
    int wasgo_size_filter = String(p_filter).size();
    uint8_t wasgo_buffer_filter[wasgo_size_filter];
    encode_variant(wasgo_var_filter, wasgo_buffer_filter, wasgo_size_filter);
    
	_wasgo_FileDialog_wrapper_add_filter(wasgo_id, wasgo_buffer_filter, wasgo_size_filter);
}
void FileDialog::clear_filters(){
	_wasgo_FileDialog_wrapper_clear_filters(wasgo_id);
}
void FileDialog::deselect_items(){
	_wasgo_FileDialog_wrapper_deselect_items(wasgo_id);
}
FileDialog::Access FileDialog::get_access(){
	return FileDialog::Access(_wasgo_FileDialog_wrapper_get_access(wasgo_id));
}
String FileDialog::get_current_dir(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_FileDialog_wrapper_get_current_dir(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String FileDialog::get_current_file(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_FileDialog_wrapper_get_current_file(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String FileDialog::get_current_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_FileDialog_wrapper_get_current_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
PoolStringArray FileDialog::get_filters(){
	return PoolStringArray(_wasgo_FileDialog_wrapper_get_filters(wasgo_id));
}
LineEdit FileDialog::get_line_edit(){
	return LineEdit(_wasgo_FileDialog_wrapper_get_line_edit(wasgo_id));
}
FileDialog::Mode FileDialog::get_mode(){
	return FileDialog::Mode(_wasgo_FileDialog_wrapper_get_mode(wasgo_id));
}
VBoxContainer FileDialog::get_vbox(){
	return VBoxContainer(_wasgo_FileDialog_wrapper_get_vbox(wasgo_id));
}
void FileDialog::invalidate(){
	_wasgo_FileDialog_wrapper_invalidate(wasgo_id);
}
bool FileDialog::is_mode_overriding_title(){
	return (bool) _wasgo_FileDialog_wrapper_is_mode_overriding_title(wasgo_id);
}
bool FileDialog::is_showing_hidden_files(){
	return (bool) _wasgo_FileDialog_wrapper_is_showing_hidden_files(wasgo_id);
}
void FileDialog::set_access(FileDialog::Access p_access){
	_wasgo_FileDialog_wrapper_set_access(wasgo_id, p_access._get_wasgo_id());
}
void FileDialog::set_current_dir(String p_dir){

    Variant wasgo_var_dir = p_dir;
    int wasgo_size_dir = String(p_dir).size();
    uint8_t wasgo_buffer_dir[wasgo_size_dir];
    encode_variant(wasgo_var_dir, wasgo_buffer_dir, wasgo_size_dir);
    
	_wasgo_FileDialog_wrapper_set_current_dir(wasgo_id, wasgo_buffer_dir, wasgo_size_dir);
}
void FileDialog::set_current_file(String p_file){

    Variant wasgo_var_file = p_file;
    int wasgo_size_file = String(p_file).size();
    uint8_t wasgo_buffer_file[wasgo_size_file];
    encode_variant(wasgo_var_file, wasgo_buffer_file, wasgo_size_file);
    
	_wasgo_FileDialog_wrapper_set_current_file(wasgo_id, wasgo_buffer_file, wasgo_size_file);
}
void FileDialog::set_current_path(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_FileDialog_wrapper_set_current_path(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
void FileDialog::set_filters(PoolStringArray p_filters){
	_wasgo_FileDialog_wrapper_set_filters(wasgo_id, p_filters._get_wasgo_id());
}
void FileDialog::set_mode(FileDialog::Mode p_mode){
	_wasgo_FileDialog_wrapper_set_mode(wasgo_id, p_mode._get_wasgo_id());
}
void FileDialog::set_mode_overrides_title(bool p_override){
	_wasgo_FileDialog_wrapper_set_mode_overrides_title(wasgo_id, p_override);
}
void FileDialog::set_show_hidden_files(bool p_show){
	_wasgo_FileDialog_wrapper_set_show_hidden_files(wasgo_id, p_show);
}

FileDialog::FileDialog(WasGoID p_wasgo_id) : ConfirmationDialog(p_wasgo_id){
}
FileDialog::FileDialog(ConfirmationDialog other) : ConfirmationDialog(other._get_wasgo_id()){
}
FileDialog::FileDialog():ConfirmationDialog(){
}
FileDialog FileDialog::new_instance(){
    return FileDialog(_wasgo_FileDialog_constructor());
}
WasGoID FileDialog::_get_wasgo_id(){
    return wasgo_id;
}
FileDialog::operator bool(){
    return (bool) wasgo_id;
}
