/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "StreamPeer.h"
int StreamPeer::get_16(){
	return (int) _wasgo_StreamPeer_wrapper_get_16(wasgo_id);
}
int StreamPeer::get_32(){
	return (int) _wasgo_StreamPeer_wrapper_get_32(wasgo_id);
}
int StreamPeer::get_64(){
	return (int) _wasgo_StreamPeer_wrapper_get_64(wasgo_id);
}
int StreamPeer::get_8(){
	return (int) _wasgo_StreamPeer_wrapper_get_8(wasgo_id);
}
int StreamPeer::get_available_bytes(){
	return (int) _wasgo_StreamPeer_wrapper_get_available_bytes(wasgo_id);
}
Array StreamPeer::get_data(int p_bytes){
	return Array(_wasgo_StreamPeer_wrapper_get_data(wasgo_id, p_bytes));
}
float StreamPeer::get_double(){
	return (float) _wasgo_StreamPeer_wrapper_get_double(wasgo_id);
}
float StreamPeer::get_float(){
	return (float) _wasgo_StreamPeer_wrapper_get_float(wasgo_id);
}
Array StreamPeer::get_partial_data(int p_bytes){
	return Array(_wasgo_StreamPeer_wrapper_get_partial_data(wasgo_id, p_bytes));
}
String StreamPeer::get_string(int p_bytes){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_StreamPeer_wrapper_get_string(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_bytes);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int StreamPeer::get_u16(){
	return (int) _wasgo_StreamPeer_wrapper_get_u16(wasgo_id);
}
int StreamPeer::get_u32(){
	return (int) _wasgo_StreamPeer_wrapper_get_u32(wasgo_id);
}
int StreamPeer::get_u64(){
	return (int) _wasgo_StreamPeer_wrapper_get_u64(wasgo_id);
}
int StreamPeer::get_u8(){
	return (int) _wasgo_StreamPeer_wrapper_get_u8(wasgo_id);
}
String StreamPeer::get_utf8_string(int p_bytes){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_StreamPeer_wrapper_get_utf8_string(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_bytes);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
Variant StreamPeer::get_var(bool p_allow_objects){
	return Variant(_wasgo_StreamPeer_wrapper_get_var(wasgo_id, p_allow_objects));
}
bool StreamPeer::is_big_endian_enabled(){
	return (bool) _wasgo_StreamPeer_wrapper_is_big_endian_enabled(wasgo_id);
}
void StreamPeer::put_16(int p_value){
	_wasgo_StreamPeer_wrapper_put_16(wasgo_id, p_value);
}
void StreamPeer::put_32(int p_value){
	_wasgo_StreamPeer_wrapper_put_32(wasgo_id, p_value);
}
void StreamPeer::put_64(int p_value){
	_wasgo_StreamPeer_wrapper_put_64(wasgo_id, p_value);
}
void StreamPeer::put_8(int p_value){
	_wasgo_StreamPeer_wrapper_put_8(wasgo_id, p_value);
}
Error StreamPeer::put_data(PoolByteArray p_data){
	return Error(_wasgo_StreamPeer_wrapper_put_data(wasgo_id, p_data._get_wasgo_id()));
}
void StreamPeer::put_double(float p_value){
	_wasgo_StreamPeer_wrapper_put_double(wasgo_id, p_value);
}
void StreamPeer::put_float(float p_value){
	_wasgo_StreamPeer_wrapper_put_float(wasgo_id, p_value);
}
Array StreamPeer::put_partial_data(PoolByteArray p_data){
	return Array(_wasgo_StreamPeer_wrapper_put_partial_data(wasgo_id, p_data._get_wasgo_id()));
}
void StreamPeer::put_string(String p_value){

    Variant wasgo_var_value = p_value;
    int wasgo_size_value = String(p_value).size();
    uint8_t wasgo_buffer_value[wasgo_size_value];
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_StreamPeer_wrapper_put_string(wasgo_id, wasgo_buffer_value, wasgo_size_value);
}
void StreamPeer::put_u16(int p_value){
	_wasgo_StreamPeer_wrapper_put_u16(wasgo_id, p_value);
}
void StreamPeer::put_u32(int p_value){
	_wasgo_StreamPeer_wrapper_put_u32(wasgo_id, p_value);
}
void StreamPeer::put_u64(int p_value){
	_wasgo_StreamPeer_wrapper_put_u64(wasgo_id, p_value);
}
void StreamPeer::put_u8(int p_value){
	_wasgo_StreamPeer_wrapper_put_u8(wasgo_id, p_value);
}
void StreamPeer::put_utf8_string(String p_value){

    Variant wasgo_var_value = p_value;
    int wasgo_size_value = String(p_value).size();
    uint8_t wasgo_buffer_value[wasgo_size_value];
    encode_variant(wasgo_var_value, wasgo_buffer_value, wasgo_size_value);
    
	_wasgo_StreamPeer_wrapper_put_utf8_string(wasgo_id, wasgo_buffer_value, wasgo_size_value);
}
void StreamPeer::put_var(Variant p_value, bool p_full_objects){
	_wasgo_StreamPeer_wrapper_put_var(wasgo_id, p_value._get_wasgo_id(), p_full_objects);
}
void StreamPeer::set_big_endian(bool p_enable){
	_wasgo_StreamPeer_wrapper_set_big_endian(wasgo_id, p_enable);
}

StreamPeer::StreamPeer(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
StreamPeer::StreamPeer(Reference other) : Reference(other._get_wasgo_id()){
}
StreamPeer::StreamPeer():Reference(){
}
StreamPeer StreamPeer::new_instance(){
    return StreamPeer(_wasgo_StreamPeer_constructor());
}
WasGoID StreamPeer::_get_wasgo_id(){
    return wasgo_id;
}
StreamPeer::operator bool(){
    return (bool) wasgo_id;
}
