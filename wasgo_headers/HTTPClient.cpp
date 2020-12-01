/* THIS FILE IS GENERATED */
#include "HTTPClient.h"
void HTTPClient::close(){
	_wasgo_HTTPClient_wrapper_close(wasgo_id);
}
Error HTTPClient::connect_to_host(String p_host, int p_port = (int) -1, bool p_use_ssl = (bool) false, bool p_verify_host = (bool) true){
	return Error::from_wasgo_id(_wasgo_HTTPClient_wrapper_connect_to_host(wasgo_id, ((Variant) p_host).get_wasgo_id(), p_port, p_use_ssl, p_verify_host));
}
StreamPeer HTTPClient::get_connection(){
	return StreamPeer::from_wasgo_id(_wasgo_HTTPClient_wrapper_get_connection(wasgo_id));
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
	return PoolStringArray::from_wasgo_id(_wasgo_HTTPClient_wrapper_get_response_headers(wasgo_id));
}
Dictionary HTTPClient::get_response_headers_as_dictionary(){
	return Dictionary::from_wasgo_id(_wasgo_HTTPClient_wrapper_get_response_headers_as_dictionary(wasgo_id));
}
HTTPClient::Status HTTPClient::get_status(){
	return HTTPClient::Status::from_wasgo_id(_wasgo_HTTPClient_wrapper_get_status(wasgo_id));
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
	return Error::from_wasgo_id(_wasgo_HTTPClient_wrapper_poll(wasgo_id));
}
String HTTPClient::query_string_from_dict(Dictionary p_fields){
	return String::from_wasgo_id(_wasgo_HTTPClient_wrapper_query_string_from_dict(wasgo_id, ((Variant) p_fields).get_wasgo_id()));
}
PoolByteArray HTTPClient::read_response_body_chunk(){
	return PoolByteArray::from_wasgo_id(_wasgo_HTTPClient_wrapper_read_response_body_chunk(wasgo_id));
}
Error HTTPClient::request(HTTPClient::Method p_method, String p_url, PoolStringArray p_headers, String p_body = (String) ){
	return Error::from_wasgo_id(_wasgo_HTTPClient_wrapper_request(wasgo_id, ((Variant) p_method).get_wasgo_id(), ((Variant) p_url).get_wasgo_id(), ((Variant) p_headers).get_wasgo_id(), ((Variant) p_body).get_wasgo_id()));
}
Error HTTPClient::request_raw(HTTPClient::Method p_method, String p_url, PoolStringArray p_headers, PoolByteArray p_body){
	return Error::from_wasgo_id(_wasgo_HTTPClient_wrapper_request_raw(wasgo_id, ((Variant) p_method).get_wasgo_id(), ((Variant) p_url).get_wasgo_id(), ((Variant) p_headers).get_wasgo_id(), ((Variant) p_body).get_wasgo_id()));
}
void HTTPClient::set_blocking_mode(bool p_enabled){
	_wasgo_HTTPClient_wrapper_set_blocking_mode(wasgo_id, p_enabled);
}
void HTTPClient::set_connection(StreamPeer p_connection){
	_wasgo_HTTPClient_wrapper_set_connection(wasgo_id, ((Variant) p_connection).get_wasgo_id());
}
void HTTPClient::set_read_chunk_size(int p_bytes){
	_wasgo_HTTPClient_wrapper_set_read_chunk_size(wasgo_id, p_bytes);
}