/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "HTTPRequest.h"
void HTTPRequest::cancel_request(){
	_wasgo_HTTPRequest_wrapper_cancel_request(wasgo_id);
}
int HTTPRequest::get_body_size(){
	return (int) _wasgo_HTTPRequest_wrapper_get_body_size(wasgo_id);
}
int HTTPRequest::get_body_size_limit(){
	return (int) _wasgo_HTTPRequest_wrapper_get_body_size_limit(wasgo_id);
}
int HTTPRequest::get_download_chunk_size(){
	return (int) _wasgo_HTTPRequest_wrapper_get_download_chunk_size(wasgo_id);
}
String HTTPRequest::get_download_file(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_HTTPRequest_wrapper_get_download_file(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int HTTPRequest::get_downloaded_bytes(){
	return (int) _wasgo_HTTPRequest_wrapper_get_downloaded_bytes(wasgo_id);
}
HTTPClient::Status HTTPRequest::get_http_client_status(){
	return HTTPClient::Status(_wasgo_HTTPRequest_wrapper_get_http_client_status(wasgo_id));
}
int HTTPRequest::get_max_redirects(){
	return (int) _wasgo_HTTPRequest_wrapper_get_max_redirects(wasgo_id);
}
int HTTPRequest::get_timeout(){
	return (int) _wasgo_HTTPRequest_wrapper_get_timeout(wasgo_id);
}
bool HTTPRequest::is_using_threads(){
	return (bool) _wasgo_HTTPRequest_wrapper_is_using_threads(wasgo_id);
}
Error HTTPRequest::request(String p_url, PoolStringArray p_custom_headers = (PoolStringArray) [], bool p_ssl_validate_domain = (bool) true, HTTPClient::Method p_method = (HTTPClient::Method) 0, String p_request_data = (String) ){

    Variant wasgo_var_url = p_url;
    uint8_t wasgo_buffer_url[256];
    int wasgo_size_url = 256;
    encode_variant(wasgo_var_url, wasgo_buffer_url, wasgo_size_url);
    

    Variant wasgo_var_request_data = p_request_data;
    uint8_t wasgo_buffer_request_data[256];
    int wasgo_size_request_data = 256;
    encode_variant(wasgo_var_request_data, wasgo_buffer_request_data, wasgo_size_request_data);
    
	return Error(_wasgo_HTTPRequest_wrapper_request(wasgo_id, wasgo_buffer_url, wasgo_size_url, p_custom_headers._get_wasgo_id(), p_ssl_validate_domain, p_method._get_wasgo_id(), wasgo_buffer_request_data, wasgo_size_request_data));
}
void HTTPRequest::set_body_size_limit(int p_bytes){
	_wasgo_HTTPRequest_wrapper_set_body_size_limit(wasgo_id, p_bytes);
}
void HTTPRequest::set_download_chunk_size(int p_arg0){
	_wasgo_HTTPRequest_wrapper_set_download_chunk_size(wasgo_id, p_arg0);
}
void HTTPRequest::set_download_file(String p_path){

    Variant wasgo_var_path = p_path;
    uint8_t wasgo_buffer_path[256];
    int wasgo_size_path = 256;
    encode_variant(wasgo_var_path, wasgo_buffer_path, wasgo_size_path);
    
	_wasgo_HTTPRequest_wrapper_set_download_file(wasgo_id, wasgo_buffer_path, wasgo_size_path);
}
void HTTPRequest::set_max_redirects(int p_amount){
	_wasgo_HTTPRequest_wrapper_set_max_redirects(wasgo_id, p_amount);
}
void HTTPRequest::set_timeout(int p_timeout){
	_wasgo_HTTPRequest_wrapper_set_timeout(wasgo_id, p_timeout);
}
void HTTPRequest::set_use_threads(bool p_enable){
	_wasgo_HTTPRequest_wrapper_set_use_threads(wasgo_id, p_enable);
}

HTTPRequest::HTTPRequest(WasGoId p_wasgo_id) : Node(p_wasgo_id){
}
HTTPRequest::HTTPRequest(){
    wasgo_id = _wasgo_HTTPRequest_constructor();
}
HTTPRequest::~HTTPRequest(){
    _wasgo_HTTPRequest_destructor(wasgo_id);
}