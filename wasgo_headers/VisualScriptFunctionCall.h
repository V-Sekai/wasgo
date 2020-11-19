/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Variant.h"
#include "NodePath.h"
#include "VisualScriptNode.h"
#include "Dictionary.h"
class VisualScriptFunctionCall : public VisualScriptNode{
public: VisualScriptFunctionCall();
enum RPCCallMode{
RPC_DISABLED: 0,
RPC_RELIABLE: 1,
RPC_UNRELIABLE: 2,
RPC_RELIABLE_TO_ID: 3,
};
enum CallMode{
CALL_MODE_SELF: 0,
CALL_MODE_NODE_PATH: 1,
CALL_MODE_INSTANCE: 2,
CALL_MODE_BASIC_TYPE: 3,
};
Dictionary  _get_argument_cache();
Dictionary  _get_argument_cache();
void  _set_argument_cache(Dictionary argument_cache);
NodePath  get_base_path();
NodePath  get_base_path();
String  get_base_script();
String  get_base_script();
String  get_base_type();
String  get_base_type();
enum.Variant::Type  get_basic_type();
enum.Variant::Type  get_basic_type();
enum.VisualScriptFunctionCall::CallMode  get_call_mode();
enum.VisualScriptFunctionCall::CallMode  get_call_mode();
String  get_function();
String  get_function();
enum.VisualScriptFunctionCall::RPCCallMode  get_rpc_call_mode();
enum.VisualScriptFunctionCall::RPCCallMode  get_rpc_call_mode();
String  get_singleton();
String  get_singleton();
int  get_use_default_args();
int  get_use_default_args();
bool  get_validate();
bool  get_validate();
void  set_base_path(NodePath base_path);
void  set_base_script(String base_script);
void  set_base_type(String base_type);
void  set_basic_type(int basic_type);
void  set_call_mode(int mode);
void  set_function(String function);
void  set_rpc_call_mode(int mode);
void  set_singleton(String singleton);
void  set_use_default_args(int amount);
void  set_validate(bool enable);
};