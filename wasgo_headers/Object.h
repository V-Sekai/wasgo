/* THIS FILE IS GENERATED */
#ifndef OBJECT_H
#define OBJECT_H

#include <stdint.h>

#include "NodePath.h"
#include "PoolStringArray.h"
#include "Reference.h"
#include "String.h"
#include "Erro.h"
#include "Variant.h"
class Object{
public: Object();
enum ConnectFlags{
CONNECT_DEFERRED: 1,
CONNECT_PERSIST: 2,
CONNECT_ONESHOT: 4,
};
Variant  _get(String property);
Array  _get_property_list();
Array  _get_property_list();
void  _init();
void  _init();
void  _notification(int what);
bool  _set(String property, Variant value);
String  _to_string();
String  _to_string();
void  add_user_signal(String signal, Array arguments = []);
Variant  call(String method);
void  call_deferred(String method);
Variant  callv(String method, Array arg_array);
bool  can_translate_messages();
bool  can_translate_messages();
enum.Error  connect(String signal, Object target, String method, Array binds = [], int flags = 0);
void  disconnect(String signal, Object target, String method);
void  emit_signal(String signal);
void  free();
void  free();
Variant  get(String property);
String  get_class();
String  get_class();
Array  get_incoming_connections();
Array  get_incoming_connections();
Variant  get_indexed(NodePath property);
int  get_instance_id();
int  get_instance_id();
Variant  get_meta(String name);
PoolStringArray  get_meta_list();
PoolStringArray  get_meta_list();
Array  get_method_list();
Array  get_method_list();
Array  get_property_list();
Array  get_property_list();
Reference  get_script();
Reference  get_script();
Array  get_signal_connection_list(String signal);
Array  get_signal_list();
Array  get_signal_list();
bool  has_meta(String name);
bool  has_method(String method);
bool  has_user_signal(String signal);
bool  is_blocking_signals();
bool  is_blocking_signals();
bool  is_class(String class);
bool  is_connected(String signal, Object target, String method);
bool  is_queued_for_deletion();
bool  is_queued_for_deletion();
void  notification(int what, bool reversed = false);
void  property_list_changed_notify();
void  property_list_changed_notify();
void  remove_meta(String name);
void  set(String property, Variant value);
void  set_block_signals(bool enable);
void  set_deferred(String property, Variant value);
void  set_indexed(NodePath property, Variant value);
void  set_message_translation(bool enable);
void  set_meta(String name, Variant value);
void  set_script(Reference script);
String  to_string();
String  to_string();
String  tr(String message);
};
#endif