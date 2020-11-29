/* THIS FILE IS GENERATED */
#ifndef HTTPREQUEST_H
#define HTTPREQUEST_H

#include "stdint.h"

#include "Variant.h"
#include "Node.h"
#include "HTTPClient.h"
#include "Error.h"
class HTTPRequest : public Node{
public: HTTPRequest();
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
Error request(String p_url, PoolStringArray p_custom_headers = (PoolStringArray) [], bool p_ssl_validate_domain = (bool) True, HTTPClient::Method p_method = (HTTPClient::Method) 0, String p_request_data = (String) );
void set_body_size_limit(int p_bytes);
void set_download_file(String p_path);
void set_max_redirects(int p_amount);
void set_use_threads(bool p_enable);
};
#endif