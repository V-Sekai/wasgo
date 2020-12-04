/* THIS FILE IS GENERATED */
#ifndef HTTPREQUEST_H
#define HTTPREQUEST_H

#include "wasgo\wasgo.h"

#include "Node.h"
#include "error_list.h"
#include "ustring.h"
#include "HTTPClient.h"
#include "Variant.h"
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
int get_download_chunk_size();
String get_download_file();
int get_downloaded_bytes();
HTTPClient::Status get_http_client_status();
int get_max_redirects();
int get_timeout();
bool is_using_threads();
Error request(String p_url, PoolStringArray p_custom_headers = (PoolStringArray) [], bool p_ssl_validate_domain = (bool) true, HTTPClient::Method p_method = (HTTPClient::Method) 0, String p_request_data = (String) );
void set_body_size_limit(int p_bytes);
void set_download_chunk_size(int p_arg0);
void set_download_file(String p_path);
void set_max_redirects(int p_amount);
void set_timeout(int p_timeout);
void set_use_threads(bool p_enable);

protected:
public:
explicit HTTPRequest(WasGoId p_wasgo_id);
explicit HTTPRequest(Node other);
HTTPRequest new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_HTTPRequest_wrapper_cancel_request(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_get_body_size(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_get_body_size_limit(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_get_download_chunk_size(WasGoId wasgo_id);
void _wasgo_HTTPRequest_wrapper_get_download_file(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_HTTPRequest_wrapper_get_downloaded_bytes(WasGoId wasgo_id);
WasGoId _wasgo_HTTPRequest_wrapper_get_http_client_status(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_get_max_redirects(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_get_timeout(WasGoId wasgo_id);
int _wasgo_HTTPRequest_wrapper_is_using_threads(WasGoId wasgo_id);
WasGoId _wasgo_HTTPRequest_wrapper_request(WasGoId wasgo_id, const uint8_t * p_url, int p_url_wasgo_buffer_size, WasGoId p_custom_headers, bool p_ssl_validate_domain, WasGoId p_method, const uint8_t * p_request_data, int p_request_data_wasgo_buffer_size);
void _wasgo_HTTPRequest_wrapper_set_body_size_limit(WasGoId wasgo_id, int p_bytes);
void _wasgo_HTTPRequest_wrapper_set_download_chunk_size(WasGoId wasgo_id, int p_arg0);
void _wasgo_HTTPRequest_wrapper_set_download_file(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_HTTPRequest_wrapper_set_max_redirects(WasGoId wasgo_id, int p_amount);
void _wasgo_HTTPRequest_wrapper_set_timeout(WasGoId wasgo_id, int p_timeout);
void _wasgo_HTTPRequest_wrapper_set_use_threads(WasGoId wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoId _wasgo_HTTPRequest_constructor();
            
}
#endif