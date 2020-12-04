/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "File.h"
void File::close(){
	_wasgo_File_wrapper_close(wasgo_id);
}
bool File::eof_reached(){
	return (bool) _wasgo_File_wrapper_eof_reached(wasgo_id);
}
bool File::file_exists(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return (bool) _wasgo_File_wrapper_file_exists(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
int File::get_16(){
	return (int) _wasgo_File_wrapper_get_16(wasgo_id);
}
int File::get_32(){
	return (int) _wasgo_File_wrapper_get_32(wasgo_id);
}
int File::get_64(){
	return (int) _wasgo_File_wrapper_get_64(wasgo_id);
}
int File::get_8(){
	return (int) _wasgo_File_wrapper_get_8(wasgo_id);
}
String File::get_as_text(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_File_wrapper_get_as_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
PoolByteArray File::get_buffer(int p_len){
	return PoolByteArray(_wasgo_File_wrapper_get_buffer(wasgo_id, p_len));
}
PoolStringArray File::get_csv_line(String p_delim = String(,)){

    Variant wasgo_var_delim = p_delim;
    int wasgo_size_delim = String(p_delim).size();
    uint8_t wasgo_buffer_delim[wasgo_size_delim];
    encode_variant(wasgo_var_delim, wasgo_buffer_delim, wasgo_size_delim);
    
	return PoolStringArray(_wasgo_File_wrapper_get_csv_line(wasgo_id, wasgo_buffer_delim, wasgo_size_delim));
}
float File::get_double(){
	return (float) _wasgo_File_wrapper_get_double(wasgo_id);
}
bool File::get_endian_swap(){
	return (bool) _wasgo_File_wrapper_get_endian_swap(wasgo_id);
}
Error File::get_error(){
	return Error(_wasgo_File_wrapper_get_error(wasgo_id));
}
float File::get_float(){
	return (float) _wasgo_File_wrapper_get_float(wasgo_id);
}
int File::get_len(){
	return (int) _wasgo_File_wrapper_get_len(wasgo_id);
}
String File::get_line(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_File_wrapper_get_line(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String File::get_md5(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_File_wrapper_get_md5(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_path, wasgo_size_path);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int File::get_modified_time(String p_file){

    Variant wasgo_var_file = p_file;
    int wasgo_size_file = String(p_file).size();
    uint8_t wasgo_buffer_file[wasgo_size_file];
    encode_variant(wasgo_var_file, wasgo_buffer_file, wasgo_size_file);
    
	return (int) _wasgo_File_wrapper_get_modified_time(wasgo_id, wasgo_buffer_file, wasgo_size_file);
}
String File::get_pascal_string(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_File_wrapper_get_pascal_string(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String File::get_path(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_File_wrapper_get_path(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String File::get_path_absolute(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_File_wrapper_get_path_absolute(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int File::get_position(){
	return (int) _wasgo_File_wrapper_get_position(wasgo_id);
}
float File::get_real(){
	return (float) _wasgo_File_wrapper_get_real(wasgo_id);
}
String File::get_sha256(String p_path){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_File_wrapper_get_sha256(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_path, wasgo_size_path);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Variant File::get_var(bool p_allow_objects = (bool) false){
	return Variant(_wasgo_File_wrapper_get_var(wasgo_id, p_allow_objects));
}
bool File::is_open(){
	return (bool) _wasgo_File_wrapper_is_open(wasgo_id);
}
Error File::open(String p_path, File::ModeFlags p_flags){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_File_wrapper_open(wasgo_id, wasgo_buffer_path, wasgo_size_path, p_flags._get_wasgo_id()));
}
Error File::open_compressed(String p_path, File::ModeFlags p_mode_flags, File::CompressionMode p_compression_mode = (File::CompressionMode) 0){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_File_wrapper_open_compressed(wasgo_id, wasgo_buffer_path, wasgo_size_path, p_mode_flags._get_wasgo_id(), p_compression_mode._get_wasgo_id()));
}
Error File::open_encrypted(String p_path, File::ModeFlags p_mode_flags, PoolByteArray p_key){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	return Error(_wasgo_File_wrapper_open_encrypted(wasgo_id, wasgo_buffer_path, wasgo_size_path, p_mode_flags._get_wasgo_id(), p_key._get_wasgo_id()));
}
Error File::open_encrypted_with_pass(String p_path, File::ModeFlags p_mode_flags, String p_pass){

    Variant wasgo_var_path = p_path;
    int wasgo_size_path = String(p_path).size();
    uint8_t wasgo_buffer_path[wasgo_size_path];
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    

    Variant wasgo_var_pass = p_pass;
    int wasgo_size_pass = String(p_pass).size();
    uint8_t wasgo_buffer_pass[wasgo_size_pass];
    encode_variant(wasgo_var_pass, wasgo_buffer_pass, wasgo_size_pass);
    
	return Error(_wasgo_File_wrapper_open_encrypted_with_pass(wasgo_id, wasgo_buffer_path, wasgo_size_path, p_mode_flags._get_wasgo_id(), wasgo_buffer_pass, wasgo_size_pass));
}
void File::seek(int p_position){
	_wasgo_File_wrapper_seek(wasgo_id, p_position);
}
void File::seek_end(int p_position = (int) 0){
	_wasgo_File_wrapper_seek_end(wasgo_id, p_position);
}
void File::set_endian_swap(bool p_enable){
	_wasgo_File_wrapper_set_endian_swap(wasgo_id, p_enable);
}
void File::store_16(int p_value){
	_wasgo_File_wrapper_store_16(wasgo_id, p_value);
}
void File::store_32(int p_value){
	_wasgo_File_wrapper_store_32(wasgo_id, p_value);
}
void File::store_64(int p_value){
	_wasgo_File_wrapper_store_64(wasgo_id, p_value);
}
void File::store_8(int p_value){
	_wasgo_File_wrapper_store_8(wasgo_id, p_value);
}
void File::store_buffer(PoolByteArray p_buffer){
	_wasgo_File_wrapper_store_buffer(wasgo_id, p_buffer._get_wasgo_id());
}
void File::store_csv_line(PoolStringArray p_values, String p_delim = String(,)){

    Variant wasgo_var_delim = p_delim;
    int wasgo_size_delim = String(p_delim).size();
    uint8_t wasgo_buffer_delim[wasgo_size_delim];
    encode_variant(wasgo_var_delim, wasgo_buffer_delim, wasgo_size_delim);
    
	_wasgo_File_wrapper_store_csv_line(wasgo_id, p_values._get_wasgo_id(), wasgo_buffer_delim, wasgo_size_delim);
}
void File::store_double(float p_value){
	_wasgo_File_wrapper_store_double(wasgo_id, p_value);
}
void File::store_float(float p_value){
	_wasgo_File_wrapper_store_float(wasgo_id, p_value);
}
void File::store_line(String p_line){

    Variant wasgo_var_line = p_line;
    int wasgo_size_line = String(p_line).size();
    uint8_t wasgo_buffer_line[wasgo_size_line];
    encode_variant(wasgo_var_line, wasgo_buffer_line, wasgo_size_line);
    
	_wasgo_File_wrapper_store_line(wasgo_id, wasgo_buffer_line, wasgo_size_line);
}
void File::store_pascal_string(String p_string){

    Variant wasgo_var_string = p_string;
    int wasgo_size_string = String(p_string).size();
    uint8_t wasgo_buffer_string[wasgo_size_string];
    encode_variant(wasgo_var_string, wasgo_buffer_string, wasgo_size_string);
    
	_wasgo_File_wrapper_store_pascal_string(wasgo_id, wasgo_buffer_string, wasgo_size_string);
}
void File::store_real(float p_value){
	_wasgo_File_wrapper_store_real(wasgo_id, p_value);
}
void File::store_string(String p_string){

    Variant wasgo_var_string = p_string;
    int wasgo_size_string = String(p_string).size();
    uint8_t wasgo_buffer_string[wasgo_size_string];
    encode_variant(wasgo_var_string, wasgo_buffer_string, wasgo_size_string);
    
	_wasgo_File_wrapper_store_string(wasgo_id, wasgo_buffer_string, wasgo_size_string);
}
void File::store_var(Variant p_value, bool p_full_objects = (bool) false){
	_wasgo_File_wrapper_store_var(wasgo_id, p_value._get_wasgo_id(), p_full_objects);
}

File::File(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
File::File(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_File_constructor();
}
File::new_instance(){
    return File(_wasgo_File_constructor());
}