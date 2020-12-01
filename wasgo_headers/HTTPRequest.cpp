/* THIS FILE IS GENERATED */
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
String HTTPRequest::get_download_file(){
	return String::from_wasgo_id(_wasgo_HTTPRequest_wrapper_get_download_file(wasgo_id));
}
int HTTPRequest::get_downloaded_bytes(){
	return (int) _wasgo_HTTPRequest_wrapper_get_downloaded_bytes(wasgo_id);
}
HTTPClient::Status HTTPRequest::get_http_client_status(){
	return HTTPClient::Status::from_wasgo_id(_wasgo_HTTPRequest_wrapper_get_http_client_status(wasgo_id));
}
int HTTPRequest::get_max_redirects(){
	return (int) _wasgo_HTTPRequest_wrapper_get_max_redirects(wasgo_id);
}
bool HTTPRequest::is_using_threads(){
	return (bool) _wasgo_HTTPRequest_wrapper_is_using_threads(wasgo_id);
}
Error HTTPRequest::request(String p_url, PoolStringArray p_custom_headers = (PoolStringArray) [], bool p_ssl_validate_domain = (bool) true, HTTPClient::Method p_method = (HTTPClient::Method) 0, String p_request_data = (String) ){
	return Error::from_wasgo_id(_wasgo_HTTPRequest_wrapper_request(wasgo_id, ((Variant) p_url).get_wasgo_id(), ((Variant) p_custom_headers).get_wasgo_id(), p_ssl_validate_domain, ((Variant) p_method).get_wasgo_id(), ((Variant) p_request_data).get_wasgo_id()));
}
void HTTPRequest::set_body_size_limit(int p_bytes){
	_wasgo_HTTPRequest_wrapper_set_body_size_limit(wasgo_id, p_bytes);
}
void HTTPRequest::set_download_file(String p_path){
	_wasgo_HTTPRequest_wrapper_set_download_file(wasgo_id, ((Variant) p_path).get_wasgo_id());
}
void HTTPRequest::set_max_redirects(int p_amount){
	_wasgo_HTTPRequest_wrapper_set_max_redirects(wasgo_id, p_amount);
}
void HTTPRequest::set_use_threads(bool p_enable){
	_wasgo_HTTPRequest_wrapper_set_use_threads(wasgo_id, p_enable);
}