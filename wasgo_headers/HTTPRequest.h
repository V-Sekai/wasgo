/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PoolByteArray.h"
#include "String.h"
#include "HTTPClient.h"
#include "Erro.h"
#include "Node.h"
#include "PoolStringArray.h"
class HTTPRequest : public Node{
public: HTTPRequest();
enum Result{
RESULT_SUCCESS: 0,
RESULT_CHUNKED_BODY_SIZE_MISMATCH: 1,
RESULT_CANT_CONNECT: 2,
RESULT_CANT_RESOLVE: 3,
RESULT_CONNECTION_ERROR: 4,
RESULT_SSL_HANDSHAKE_ERROR: 5,
RESULT_NO_RESPONSE: 6,
RESULT_BODY_SIZE_LIMIT_EXCEEDED: 7,
RESULT_REQUEST_FAILED: 8,
RESULT_DOWNLOAD_FILE_CANT_OPEN: 9,
RESULT_DOWNLOAD_FILE_WRITE_ERROR: 10,
RESULT_REDIRECT_LIMIT_REACHED: 11,
};
void  _redirect_request(String arg0);
void  _request_done(int arg0, int arg1, PoolStringArray arg2, PoolByteArray arg3);
void  _timeout();
void  _timeout();
void  cancel_request();
void  cancel_request();
int  get_body_size();
int  get_body_size();
int  get_body_size_limit();
int  get_body_size_limit();
int  get_download_chunk_size();
int  get_download_chunk_size();
String  get_download_file();
String  get_download_file();
int  get_downloaded_bytes();
int  get_downloaded_bytes();
enum.HTTPClient::Status  get_http_client_status();
enum.HTTPClient::Status  get_http_client_status();
int  get_max_redirects();
int  get_max_redirects();
int  get_timeout();
int  get_timeout();
bool  is_using_threads();
bool  is_using_threads();
enum.Error  request(String url, PoolStringArray custom_headers = [], bool ssl_validate_domain = true, int method = 0, String request_data = "");
void  set_body_size_limit(int bytes);
void  set_download_chunk_size(int arg0);
void  set_download_file(String path);
void  set_max_redirects(int amount);
void  set_timeout(int timeout);
void  set_use_threads(bool enable);
};