/* THIS FILE IS GENERATED */
#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "StreamPeer.h"
#include "Reference.h"
#include "error_list.h"
#include "Variant.h"
class HTTPClient : public Reference{
public:
enum Method{
METHOD_GET,
METHOD_HEAD,
METHOD_POST,
METHOD_PUT,
METHOD_DELETE,
METHOD_OPTIONS,
METHOD_TRACE,
METHOD_CONNECT,
METHOD_PATCH,
METHOD_MAX
};
enum ResponseCode{
RESPONSE_CONTINUE,
RESPONSE_SWITCHING_PROTOCOLS,
RESPONSE_PROCESSING,
RESPONSE_OK,
RESPONSE_CREATED,
RESPONSE_ACCEPTED,
RESPONSE_NON_AUTHORITATIVE_INFORMATION,
RESPONSE_NO_CONTENT,
RESPONSE_RESET_CONTENT,
RESPONSE_PARTIAL_CONTENT,
RESPONSE_MULTI_STATUS,
RESPONSE_ALREADY_REPORTED,
RESPONSE_IM_USED,
RESPONSE_MULTIPLE_CHOICES,
RESPONSE_MOVED_PERMANENTLY,
RESPONSE_FOUND,
RESPONSE_SEE_OTHER,
RESPONSE_NOT_MODIFIED,
RESPONSE_USE_PROXY,
RESPONSE_SWITCH_PROXY,
RESPONSE_TEMPORARY_REDIRECT,
RESPONSE_PERMANENT_REDIRECT,
RESPONSE_BAD_REQUEST,
RESPONSE_UNAUTHORIZED,
RESPONSE_PAYMENT_REQUIRED,
RESPONSE_FORBIDDEN,
RESPONSE_NOT_FOUND,
RESPONSE_METHOD_NOT_ALLOWED,
RESPONSE_NOT_ACCEPTABLE,
RESPONSE_PROXY_AUTHENTICATION_REQUIRED,
RESPONSE_REQUEST_TIMEOUT,
RESPONSE_CONFLICT,
RESPONSE_GONE,
RESPONSE_LENGTH_REQUIRED,
RESPONSE_PRECONDITION_FAILED,
RESPONSE_REQUEST_ENTITY_TOO_LARGE,
RESPONSE_REQUEST_URI_TOO_LONG,
RESPONSE_UNSUPPORTED_MEDIA_TYPE,
RESPONSE_REQUESTED_RANGE_NOT_SATISFIABLE,
RESPONSE_EXPECTATION_FAILED,
RESPONSE_IM_A_TEAPOT,
RESPONSE_MISDIRECTED_REQUEST,
RESPONSE_UNPROCESSABLE_ENTITY,
RESPONSE_LOCKED,
RESPONSE_FAILED_DEPENDENCY,
RESPONSE_UPGRADE_REQUIRED,
RESPONSE_PRECONDITION_REQUIRED,
RESPONSE_TOO_MANY_REQUESTS,
RESPONSE_REQUEST_HEADER_FIELDS_TOO_LARGE,
RESPONSE_UNAVAILABLE_FOR_LEGAL_REASONS,
RESPONSE_INTERNAL_SERVER_ERROR,
RESPONSE_NOT_IMPLEMENTED,
RESPONSE_BAD_GATEWAY,
RESPONSE_SERVICE_UNAVAILABLE,
RESPONSE_GATEWAY_TIMEOUT,
RESPONSE_HTTP_VERSION_NOT_SUPPORTED,
RESPONSE_VARIANT_ALSO_NEGOTIATES,
RESPONSE_INSUFFICIENT_STORAGE,
RESPONSE_LOOP_DETECTED,
RESPONSE_NOT_EXTENDED,
RESPONSE_NETWORK_AUTH_REQUIRED
};
enum Status{
STATUS_DISCONNECTED,
STATUS_RESOLVING,
STATUS_CANT_RESOLVE,
STATUS_CONNECTING,
STATUS_CANT_CONNECT,
STATUS_CONNECTED,
STATUS_REQUESTING,
STATUS_BODY,
STATUS_CONNECTION_ERROR,
STATUS_SSL_HANDSHAKE_ERROR
};
void close();
Error connect_to_host(String p_host, int p_port = (int) -1, bool p_use_ssl = (bool) false, bool p_verify_host = (bool) true);
StreamPeer get_connection();
int get_read_chunk_size();
int get_response_body_length();
int get_response_code();
PoolStringArray get_response_headers();
Dictionary get_response_headers_as_dictionary();
HTTPClient::Status get_status();
bool has_response();
bool is_blocking_mode_enabled();
bool is_response_chunked();
Error poll();
String query_string_from_dict(Dictionary p_fields);
PoolByteArray read_response_body_chunk();
Error request(HTTPClient::Method p_method, String p_url, PoolStringArray p_headers, String p_body = (String) );
Error request_raw(HTTPClient::Method p_method, String p_url, PoolStringArray p_headers, PoolByteArray p_body);
void set_blocking_mode(bool p_enabled);
void set_connection(StreamPeer p_connection);
void set_read_chunk_size(int p_bytes);

protected:
HTTPClient(WasGoId p_wasgo_id);
public:
HTTPClient();
~HTTPClient();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_HTTPClient_wrapper_close(WasGoId wasgo_id);
WasGoId _wasgo_HTTPClient_wrapper_connect_to_host(WasGoId wasgo_id, const uint8_t * p_host, int p_host_wasgo_buffer_size, int p_port, bool p_use_ssl, bool p_verify_host);
WasGoId _wasgo_HTTPClient_wrapper_get_connection(WasGoId wasgo_id);
int _wasgo_HTTPClient_wrapper_get_read_chunk_size(WasGoId wasgo_id);
int _wasgo_HTTPClient_wrapper_get_response_body_length(WasGoId wasgo_id);
int _wasgo_HTTPClient_wrapper_get_response_code(WasGoId wasgo_id);
WasGoId _wasgo_HTTPClient_wrapper_get_response_headers(WasGoId wasgo_id);
WasGoId _wasgo_HTTPClient_wrapper_get_response_headers_as_dictionary(WasGoId wasgo_id);
WasGoId _wasgo_HTTPClient_wrapper_get_status(WasGoId wasgo_id);
int _wasgo_HTTPClient_wrapper_has_response(WasGoId wasgo_id);
int _wasgo_HTTPClient_wrapper_is_blocking_mode_enabled(WasGoId wasgo_id);
int _wasgo_HTTPClient_wrapper_is_response_chunked(WasGoId wasgo_id);
WasGoId _wasgo_HTTPClient_wrapper_poll(WasGoId wasgo_id);
void _wasgo_HTTPClient_wrapper_query_string_from_dict(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, WasGoId p_fields);
WasGoId _wasgo_HTTPClient_wrapper_read_response_body_chunk(WasGoId wasgo_id);
WasGoId _wasgo_HTTPClient_wrapper_request(WasGoId wasgo_id, WasGoId p_method, const uint8_t * p_url, int p_url_wasgo_buffer_size, WasGoId p_headers, const uint8_t * p_body, int p_body_wasgo_buffer_size);
WasGoId _wasgo_HTTPClient_wrapper_request_raw(WasGoId wasgo_id, WasGoId p_method, const uint8_t * p_url, int p_url_wasgo_buffer_size, WasGoId p_headers, WasGoId p_body);
void _wasgo_HTTPClient_wrapper_set_blocking_mode(WasGoId wasgo_id, bool p_enabled);
void _wasgo_HTTPClient_wrapper_set_connection(WasGoId wasgo_id, WasGoId p_connection);
void _wasgo_HTTPClient_wrapper_set_read_chunk_size(WasGoId wasgo_id, int p_bytes);

    //constructor and destructor wrappers
    WasGoId _wasgo_HTTPClient_constructor();
    void _wasgo_HTTPClient_destructor(WasGoId p_wasgo_id);
            
}
#endif