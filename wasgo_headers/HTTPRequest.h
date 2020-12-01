/* THIS FILE IS GENERATED */
#ifndef HTTPREQUEST_H
#define HTTPREQUEST_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "error_list.h"
#include "HTTPClient.h"
#include "ustring.h"
#include "Node.h"
class HTTPRequest : public Node{
public:
enum Result{
RESULT_SUCCESS,
RESULT_CHUNKED_BODY_SIZE_MISMATCH,
RESULT_CANT_CONNECT,
RESULT_CANT_RESOLVE,
RESULT_CONNECTION_ERROR,
RESULT_SSL_HANDSHAKE_ERROR,
RESULT_NO_RESPONSE,
RESULT_BODY_SIZE_LIMIT_EXCEEDED,
RESULT_REQUEST_FAILED,
RESULT_DOWNLOAD_FILE_CANT_OPEN,
RESULT_DOWNLOAD_FILE_WRITE_ERROR,
RESULT_REDIRECT_LIMIT_REACHED,
RESULT_TIMEOUT
};
void cancel_request();
int get_body_size();
int get_body_size_limit();
String get_download_file();
int get_downloaded_bytes();
HTTPClient::Status get_http_client_status();
int get_max_redirects();
bool is_using_threads();
Error request(String p_url, PoolStringArray p_custom_headers = (PoolStringArray) [], bool p_ssl_validate_domain = (bool) true, HTTPClient::Method p_method = (HTTPClient::Method) 0, String p_request_data = (String) );
void set_body_size_limit(int p_bytes);
void set_download_file(String p_path);
void set_max_redirects(int p_amount);
void set_use_threads(bool p_enable);

HTTPRequest(WasGoId p_wasgo_id);
~HTTPRequest();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_HTTPRequest_wrapper_cancel_request(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_get_body_size(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_get_body_size_limit(WasGoId wasgo_id);
WasGoId _wasgo_HTTPRequest_wrapper_get_download_file(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_get_downloaded_bytes(WasGoId wasgo_id);
WasGoId _wasgo_HTTPRequest_wrapper_get_http_client_status(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_get_max_redirects(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_is_using_threads(WasGoId wasgo_id);
WasGoId _wasgo_HTTPRequest_wrapper_request(WasGoId wasgo_id, WasGoId p_url, WasGoId p_custom_headers, bool p_ssl_validate_domain, WasGoId p_method, WasGoId p_request_data);
void _wasgo_HTTPRequest_wrapper_set_body_size_limit(WasGoId wasgo_id, int p_bytes);
void _wasgo_HTTPRequest_wrapper_set_download_file(WasGoId wasgo_id, WasGoId p_path);
void _wasgo_HTTPRequest_wrapper_set_max_redirects(WasGoId wasgo_id, int p_amount);
void _wasgo_HTTPRequest_wrapper_set_use_threads(WasGoId wasgo_id, bool p_enable);
}
#endif