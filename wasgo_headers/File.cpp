/* THIS FILE IS GENERATED */
#include "File.h"
void File::close(){
	_wasgo_File_wrapper_close(wasgo_id);
}
bool File::eof_reached(){
	return (bool) _wasgo_File_wrapper_eof_reached(wasgo_id));
}
bool File::file_exists(String p_path){
	return (bool) _wasgo_File_wrapper_file_exists(wasgo_id, ((Variant) path).get_wasgo_id()));
}
int File::get_16(){
	return (int) _wasgo_File_wrapper_get_16(wasgo_id));
}
int File::get_32(){
	return (int) _wasgo_File_wrapper_get_32(wasgo_id));
}
int File::get_64(){
	return (int) _wasgo_File_wrapper_get_64(wasgo_id));
}
int File::get_8(){
	return (int) _wasgo_File_wrapper_get_8(wasgo_id));
}
String File::get_as_text(){
	return String::from_wasgo_id(_wasgo_File_wrapper_get_as_text(wasgo_id));
}
PoolByteArray File::get_buffer(int p_len){
	return PoolByteArray::from_wasgo_id(_wasgo_File_wrapper_get_buffer(wasgo_id, len));
}
PoolStringArray File::get_csv_line(String p_delim = (String) ,){
	return PoolStringArray::from_wasgo_id(_wasgo_File_wrapper_get_csv_line(wasgo_id, ((Variant) delim).get_wasgo_id()));
}
float File::get_double(){
	return (float) _wasgo_File_wrapper_get_double(wasgo_id));
}
bool File::get_endian_swap(){
	return (bool) _wasgo_File_wrapper_get_endian_swap(wasgo_id));
}
Error File::get_error(){
	return Error::from_wasgo_id(_wasgo_File_wrapper_get_error(wasgo_id));
}
float File::get_float(){
	return (float) _wasgo_File_wrapper_get_float(wasgo_id));
}
int File::get_len(){
	return (int) _wasgo_File_wrapper_get_len(wasgo_id));
}
String File::get_line(){
	return String::from_wasgo_id(_wasgo_File_wrapper_get_line(wasgo_id));
}
String File::get_md5(String p_path){
	return String::from_wasgo_id(_wasgo_File_wrapper_get_md5(wasgo_id, ((Variant) path).get_wasgo_id()));
}
int File::get_modified_time(String p_file){
	return (int) _wasgo_File_wrapper_get_modified_time(wasgo_id, ((Variant) file).get_wasgo_id()));
}
String File::get_pascal_string(){
	return String::from_wasgo_id(_wasgo_File_wrapper_get_pascal_string(wasgo_id));
}
String File::get_path(){
	return String::from_wasgo_id(_wasgo_File_wrapper_get_path(wasgo_id));
}
String File::get_path_absolute(){
	return String::from_wasgo_id(_wasgo_File_wrapper_get_path_absolute(wasgo_id));
}
int File::get_position(){
	return (int) _wasgo_File_wrapper_get_position(wasgo_id));
}
float File::get_real(){
	return (float) _wasgo_File_wrapper_get_real(wasgo_id));
}
String File::get_sha256(String p_path){
	return String::from_wasgo_id(_wasgo_File_wrapper_get_sha256(wasgo_id, ((Variant) path).get_wasgo_id()));
}
Variant File::get_var(bool p_allow_objects = (bool) False){
	return Variant::from_wasgo_id(_wasgo_File_wrapper_get_var(wasgo_id, allow_objects));
}
bool File::is_open(){
	return (bool) _wasgo_File_wrapper_is_open(wasgo_id));
}
Error File::open(String p_path, File::ModeFlags p_flags){
	return Error::from_wasgo_id(_wasgo_File_wrapper_open(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) flags).get_wasgo_id()));
}
Error File::open_compressed(String p_path, File::ModeFlags p_mode_flags, File::CompressionMode p_compression_mode = (File::CompressionMode) 0){
	return Error::from_wasgo_id(_wasgo_File_wrapper_open_compressed(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) mode_flags).get_wasgo_id(), ((Variant) compression_mode).get_wasgo_id()));
}
Error File::open_encrypted(String p_path, File::ModeFlags p_mode_flags, PoolByteArray p_key){
	return Error::from_wasgo_id(_wasgo_File_wrapper_open_encrypted(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) mode_flags).get_wasgo_id(), ((Variant) key).get_wasgo_id()));
}
Error File::open_encrypted_with_pass(String p_path, File::ModeFlags p_mode_flags, String p_pass){
	return Error::from_wasgo_id(_wasgo_File_wrapper_open_encrypted_with_pass(wasgo_id, ((Variant) path).get_wasgo_id(), ((Variant) mode_flags).get_wasgo_id(), ((Variant) pass).get_wasgo_id()));
}
void File::seek(int p_position){
	_wasgo_File_wrapper_seek(wasgo_id, position);
}
void File::seek_end(int p_position = (int) 0){
	_wasgo_File_wrapper_seek_end(wasgo_id, position);
}
void File::set_endian_swap(bool p_enable){
	_wasgo_File_wrapper_set_endian_swap(wasgo_id, enable);
}
void File::store_16(int p_value){
	_wasgo_File_wrapper_store_16(wasgo_id, value);
}
void File::store_32(int p_value){
	_wasgo_File_wrapper_store_32(wasgo_id, value);
}
void File::store_64(int p_value){
	_wasgo_File_wrapper_store_64(wasgo_id, value);
}
void File::store_8(int p_value){
	_wasgo_File_wrapper_store_8(wasgo_id, value);
}
void File::store_buffer(PoolByteArray p_buffer){
	_wasgo_File_wrapper_store_buffer(wasgo_id, ((Variant) buffer).get_wasgo_id());
}
void File::store_csv_line(PoolStringArray p_values, String p_delim = (String) ,){
	_wasgo_File_wrapper_store_csv_line(wasgo_id, ((Variant) values).get_wasgo_id(), ((Variant) delim).get_wasgo_id());
}
void File::store_double(float p_value){
	_wasgo_File_wrapper_store_double(wasgo_id, value);
}
void File::store_float(float p_value){
	_wasgo_File_wrapper_store_float(wasgo_id, value);
}
void File::store_line(String p_line){
	_wasgo_File_wrapper_store_line(wasgo_id, ((Variant) line).get_wasgo_id());
}
void File::store_pascal_string(String p_string){
	_wasgo_File_wrapper_store_pascal_string(wasgo_id, ((Variant) string).get_wasgo_id());
}
void File::store_real(float p_value){
	_wasgo_File_wrapper_store_real(wasgo_id, value);
}
void File::store_string(String p_string){
	_wasgo_File_wrapper_store_string(wasgo_id, ((Variant) string).get_wasgo_id());
}
void File::store_var(Variant p_value, bool p_full_objects = (bool) False){
	_wasgo_File_wrapper_store_var(wasgo_id, ((Variant) value).get_wasgo_id(), full_objects);
}

File::File(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
File::~File(){
}