/* THIS FILE IS GENERATED */
#ifndef JSONRPC_H
#define JSONRPC_H

#include <stdint.h>

#include "Object.h"
#include "Dictionary.h"
#include "String.h"
#include "Variant.h"
class JSONRPC : public Object{
public: JSONRPC();
enum ErrorCode{
PARSE_ERROR: -32700,
INTERNAL_ERROR: -32603,
INVALID_PARAMS: -32602,
METHOD_NOT_FOUND: -32601,
};
Dictionary  make_notification(String method, Variant params);
Dictionary  make_request(String method, Variant params, Variant id);
Dictionary  make_response(Variant result, Variant id);
Dictionary  make_response_error(int code, String message, Variant id = null);
Variant  process_action(Variant action, bool recurse = false);
String  process_string(String action);
void  set_scope(String scope, Object target);
};
#endif