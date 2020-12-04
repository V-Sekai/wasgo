/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HTTPClient.h"
void HTTPClient::close(){
	_wasgo_HTTPClient_wrapper_close(wasgo_id);
}
Error HTTPClient::connect_to_host(String p_host, int p_port = (int) -1, bool p_use_ssl = (bool) false, bool p_verify_host = (bool) true){

    Variant wasgo_var_host = p_host;
    int wasgo_size_host = String(p_host).size();
    uint8_t wasgo_buffer_host[wasgo_size_host];
    encode_variant(wasgo_var_host, wasgo_buffer_host, wasgo_size_host);
    
	return Error(_wasgo_HTTPClient_wrapper_connect_to_host(wasgo_id, wasgo_buffer_host, wasgo_size_host, p_port, p_use_ssl, p_verify_host));
}
StreamPeer HTTPClient::get_connection(){
	return StreamPeer(_wasgo_HTTPClient_wrapper_get_connection(wasgo_id));
}
int HTTPClient::get_read_chunk_size(){
	return (int) _wasgo_HTTPClient_wrapper_get_read_chunk_size(wasgo_id);
}
int HTTPClient::get_response_body_length(){
	return (int) _wasgo_HTTPClient_wrapper_get_response_body_length(wasgo_id);
}
int HTTPClient::get_response_code(){
	return (int) _wasgo_HTTPClient_wrapper_get_response_code(wasgo_id);
}
PoolStringArray HTTPClient::get_response_headers(){
	return PoolStringArray(_wasgo_HTTPClient_wrapper_get_response_headers(wasgo_id));
}
Dictionary HTTPClient::get_response_headers_as_dictionary(){
	return Dictionary(_wasgo_HTTPClient_wrapper_get_response_headers_as_dictionary(wasgo_id));
}
HTTPClient::Status HTTPClient::get_status(){
	return HTTPClient::Status(_wasgo_HTTPClient_wrapper_get_status(wasgo_id));
}
bool HTTPClient::has_response(){
	return (bool) _wasgo_HTTPClient_wrapper_has_response(wasgo_id);
}
bool HTTPClient::is_blocking_mode_enabled(){
	return (bool) _wasgo_HTTPClient_wrapper_is_blocking_mode_enabled(wasgo_id);
}
bool HTTPClient::is_response_chunked(){
	return (bool) _wasgo_HTTPClient_wrapper_is_response_chunked(wasgo_id);
}
Error HTTPClient::poll(){
	return Error(_wasgo_HTTPClient_wrapper_poll(wasgo_id));
}
String HTTPClient::query_string_from_dict(Dictionary p_fields){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_HTTPClient_wrapper_query_string_from_dict(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_fields._get_wasgo_id());
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
PoolByteArray HTTPClient::read_response_body_chunk(){
	return PoolByteArray(_wasgo_HTTPClient_wrapper_read_response_body_chunk(wasgo_id));
}
Error HTTPClient::request(HTTPClient::Method p_method, String p_url, PoolStringArray p_headers, String p_body = (String) ){

    Variant wasgo_var_url = p_url;
    int wasgo_size_url = String(p_url).size();
    uint8_t wasgo_buffer_url[wasgo_size_url];
    encode_variant(wasgo_var_url, wasgo_buffer_url, wasgo_size_url);
    

    Variant wasgo_var_body = p_body;
    int wasgo_size_body = String(p_body).size();
    uint8_t wasgo_buffer_body[wasgo_size_body];
    encode_variant(wasgo_var_body, wasgo_buffer_body, wasgo_size_body);
    
	return Error(_wasgo_HTTPClient_wrapper_request(wasgo_id, p_method._get_wasgo_id(), wasgo_buffer_url, wasgo_size_url, p_headers._get_wasgo_id(), wasgo_buffer_body, wasgo_size_body));
}
Error HTTPClient::request_raw(HTTPClient::Method p_method, String p_url, PoolStringArray p_headers, PoolByteArray p_body){

    Variant wasgo_var_url = p_url;
    int wasgo_size_url = String(p_url).size();
    uint8_t wasgo_buffer_url[wasgo_size_url];
    encode_variant(wasgo_var_url, wasgo_buffer_url, wasgo_size_url);
    
	return Error(_wasgo_HTTPClient_wrapper_request_raw(wasgo_id, p_method._get_wasgo_id(), wasgo_buffer_url, wasgo_size_url, p_headers._get_wasgo_id(), p_body._get_wasgo_id()));
}
void HTTPClient::set_blocking_mode(bool p_enabled){
	_wasgo_HTTPClient_wrapper_set_blocking_mode(wasgo_id, p_enabled);
}
void HTTPClient::set_connection(StreamPeer p_connection){
	_wasgo_HTTPClient_wrapper_set_connection(wasgo_id, p_connection._get_wasgo_id());
}
void HTTPClient::set_read_chunk_size(int p_bytes){
	_wasgo_HTTPClient_wrapper_set_read_chunk_size(wasgo_id, p_bytes);
}

HTTPClient::HTTPClient(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
HTTPClient::HTTPClient(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_HTTPClient_constructor();
}
HTTPClient::new_instance(){
    return HTTPClient(_wasgo_HTTPClient_constructor());
}