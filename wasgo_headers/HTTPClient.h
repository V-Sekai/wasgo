/* THIS FILE IS GENERATED */
#ifndef HTTPCLIENT_H
#define HTTPCLIENT_H

#include <stdint.h>

#include "String.h"
#include "PoolByteArray.h"
#include "Reference.h"
#include "PoolStringArray.h"
#include "Erro.h"
#include "Dictionary.h"
#include "StreamPeer.h"
class HTTPClient : public Reference{
public: HTTPClient();
enum Status{
STATUS_DISCONNECTED: 0,
STATUS_RESOLVING: 1,
STATUS_CANT_RESOLVE: 2,
STATUS_CONNECTING: 3,
STATUS_CANT_CONNECT: 4,
STATUS_CONNECTED: 5,
STATUS_REQUESTING: 6,
STATUS_BODY: 7,
STATUS_CONNECTION_ERROR: 8,
};
enum Method{
METHOD_GET: 0,
METHOD_HEAD: 1,
METHOD_POST: 2,
METHOD_PUT: 3,
METHOD_DELETE: 4,
METHOD_OPTIONS: 5,
METHOD_TRACE: 6,
METHOD_CONNECT: 7,
METHOD_PATCH: 8,
};
enum ResponseCode{
RESPONSE_CONTINUE: 100,
RESPONSE_SWITCHING_PROTOCOLS: 101,
RESPONSE_PROCESSING: 102,
RESPONSE_OK: 200,
RESPONSE_CREATED: 201,
RESPONSE_ACCEPTED: 202,
RESPONSE_NON_AUTHORITATIVE_INFORMATION: 203,
RESPONSE_NO_CONTENT: 204,
RESPONSE_RESET_CONTENT: 205,
RESPONSE_PARTIAL_CONTENT: 206,
RESPONSE_MULTI_STATUS: 207,
RESPONSE_ALREADY_REPORTED: 208,
RESPONSE_IM_USED: 226,
RESPONSE_MULTIPLE_CHOICES: 300,
RESPONSE_MOVED_PERMANENTLY: 301,
RESPONSE_FOUND: 302,
RESPONSE_SEE_OTHER: 303,
RESPONSE_NOT_MODIFIED: 304,
RESPONSE_USE_PROXY: 305,
RESPONSE_SWITCH_PROXY: 306,
RESPONSE_TEMPORARY_REDIRECT: 307,
RESPONSE_PERMANENT_REDIRECT: 308,
RESPONSE_BAD_REQUEST: 400,
RESPONSE_UNAUTHORIZED: 401,
RESPONSE_PAYMENT_REQUIRED: 402,
RESPONSE_FORBIDDEN: 403,
RESPONSE_NOT_FOUND: 404,
RESPONSE_METHOD_NOT_ALLOWED: 405,
RESPONSE_NOT_ACCEPTABLE: 406,
RESPONSE_PROXY_AUTHENTICATION_REQUIRED: 407,
RESPONSE_REQUEST_TIMEOUT: 408,
RESPONSE_CONFLICT: 409,
RESPONSE_GONE: 410,
RESPONSE_LENGTH_REQUIRED: 411,
RESPONSE_PRECONDITION_FAILED: 412,
RESPONSE_REQUEST_ENTITY_TOO_LARGE: 413,
RESPONSE_REQUEST_URI_TOO_LONG: 414,
RESPONSE_UNSUPPORTED_MEDIA_TYPE: 415,
RESPONSE_REQUESTED_RANGE_NOT_SATISFIABLE: 416,
RESPONSE_EXPECTATION_FAILED: 417,
RESPONSE_IM_A_TEAPOT: 418,
RESPONSE_MISDIRECTED_REQUEST: 421,
RESPONSE_UNPROCESSABLE_ENTITY: 422,
RESPONSE_LOCKED: 423,
RESPONSE_FAILED_DEPENDENCY: 424,
RESPONSE_UPGRADE_REQUIRED: 426,
RESPONSE_PRECONDITION_REQUIRED: 428,
RESPONSE_TOO_MANY_REQUESTS: 429,
RESPONSE_REQUEST_HEADER_FIELDS_TOO_LARGE: 431,
RESPONSE_UNAVAILABLE_FOR_LEGAL_REASONS: 451,
RESPONSE_INTERNAL_SERVER_ERROR: 500,
RESPONSE_NOT_IMPLEMENTED: 501,
RESPONSE_BAD_GATEWAY: 502,
RESPONSE_SERVICE_UNAVAILABLE: 503,
RESPONSE_GATEWAY_TIMEOUT: 504,
RESPONSE_HTTP_VERSION_NOT_SUPPORTED: 505,
RESPONSE_VARIANT_ALSO_NEGOTIATES: 506,
RESPONSE_INSUFFICIENT_STORAGE: 507,
RESPONSE_LOOP_DETECTED: 508,
RESPONSE_NOT_EXTENDED: 510,
};
void  close();
void  close();
enum.Error  connect_to_host(String host, int port = -1, bool use_ssl = false, bool verify_host = true);
StreamPeer  get_connection();
StreamPeer  get_connection();
int  get_read_chunk_size();
int  get_read_chunk_size();
int  get_response_body_length();
int  get_response_body_length();
int  get_response_code();
int  get_response_code();
PoolStringArray  get_response_headers();
PoolStringArray  get_response_headers();
Dictionary  get_response_headers_as_dictionary();
Dictionary  get_response_headers_as_dictionary();
enum.HTTPClient::Status  get_status();
enum.HTTPClient::Status  get_status();
bool  has_response();
bool  has_response();
bool  is_blocking_mode_enabled();
bool  is_blocking_mode_enabled();
bool  is_response_chunked();
bool  is_response_chunked();
enum.Error  poll();
enum.Error  poll();
String  query_string_from_dict(Dictionary fields);
PoolByteArray  read_response_body_chunk();
PoolByteArray  read_response_body_chunk();
enum.Error  request(int method, String url, PoolStringArray headers, String body = "");
enum.Error  request_raw(int method, String url, PoolStringArray headers, PoolByteArray body);
void  set_blocking_mode(bool enabled);
void  set_connection(StreamPeer connection);
void  set_read_chunk_size(int bytes);
};
#endif