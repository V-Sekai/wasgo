/* THIS FILE IS GENERATED */
#ifndef OBJECT_H
#define OBJECT_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Variant.h"
#include "NodePath.h"
#include "error_list.h"
#include "ustring.h"
class Object : public Variant{
public:
enum ConnectFlags{
CONNECT_DEFERRED,
CONNECT_PERSIST,
CONNECT_ONESHOT,
CONNECT_REFERENCE_COUNTED
};
void add_user_signal(String p_signal, Array p_arguments = (Array) []);
Variant call(String p_method);
void call_deferred(String p_method);
Variant callv(String p_method, Array p_arg_array);
bool can_translate_messages();
Error connect(String p_signal, Object p_target, String p_method, Array p_binds = (Array) [], int p_flags = (int) 0);
void disconnect(String p_signal, Object p_target, String p_method);
void emit_signal(String p_signal);
void free();
Variant get(String p_property);
String get_class();
Array get_incoming_connections();
Variant get_indexed(NodePath p_property);
int get_instance_id();
Variant get_meta(String p_name);
PoolStringArray get_meta_list();
Array get_method_list();
Array get_property_list();
Reference get_script();
Array get_signal_connection_list(String p_signal);
Array get_signal_list();
bool has_meta(String p_name);
bool has_method(String p_method);
bool has_signal(String p_signal);
bool has_user_signal(String p_signal);
bool is_blocking_signals();
bool is_class(String p_class);
bool is_connected(String p_signal, Object p_target, String p_method);
bool is_queued_for_deletion();
void notification(int p_what, bool p_reversed = (bool) false);
void property_list_changed_notify();
void remove_meta(String p_name);
void set(String p_property, Variant p_value);
void set_block_signals(bool p_enable);
void set_deferred(String p_property, Variant p_value);
void set_indexed(NodePath p_property, Variant p_value);
void set_message_translation(bool p_enable);
void set_meta(String p_name, Variant p_value);
void set_script(Reference p_script);
String to_string();
String tr(String p_message);

protected:
public:
explicit Object(WasGoID p_wasgo_id);
explicit Object( other);
Object new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Object_wrapper_add_user_signal(WasGoID wasgo_id, const uint8_t * p_signal, int p_signal_wasgo_buffer_size, WasGoID p_arguments);
WasGoID _wasgo_Object_wrapper_call(WasGoID wasgo_id, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_Object_wrapper_call_deferred(WasGoID wasgo_id, const uint8_t * p_method, int p_method_wasgo_buffer_size);
WasGoID _wasgo_Object_wrapper_callv(WasGoID wasgo_id, const uint8_t * p_method, int p_method_wasgo_buffer_size, WasGoID p_arg_array);
int _wasgo_Object_wrapper_can_translate_messages(WasGoID wasgo_id);
WasGoID _wasgo_Object_wrapper_connect(WasGoID wasgo_id, const uint8_t * p_signal, int p_signal_wasgo_buffer_size, WasGoID p_target, const uint8_t * p_method, int p_method_wasgo_buffer_size, WasGoID p_binds, int p_flags);
void _wasgo_Object_wrapper_disconnect(WasGoID wasgo_id, const uint8_t * p_signal, int p_signal_wasgo_buffer_size, WasGoID p_target, const uint8_t * p_method, int p_method_wasgo_buffer_size);
void _wasgo_Object_wrapper_emit_signal(WasGoID wasgo_id, const uint8_t * p_signal, int p_signal_wasgo_buffer_size);
void _wasgo_Object_wrapper_free(WasGoID wasgo_id);
WasGoID _wasgo_Object_wrapper_get(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size);
void _wasgo_Object_wrapper_get_class(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Object_wrapper_get_incoming_connections(WasGoID wasgo_id);
WasGoID _wasgo_Object_wrapper_get_indexed(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size);
int _wasgo_Object_wrapper_get_instance_id(WasGoID wasgo_id);
WasGoID _wasgo_Object_wrapper_get_meta(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoID _wasgo_Object_wrapper_get_meta_list(WasGoID wasgo_id);
WasGoID _wasgo_Object_wrapper_get_method_list(WasGoID wasgo_id);
WasGoID _wasgo_Object_wrapper_get_property_list(WasGoID wasgo_id);
WasGoID _wasgo_Object_wrapper_get_script(WasGoID wasgo_id);
WasGoID _wasgo_Object_wrapper_get_signal_connection_list(WasGoID wasgo_id, const uint8_t * p_signal, int p_signal_wasgo_buffer_size);
WasGoID _wasgo_Object_wrapper_get_signal_list(WasGoID wasgo_id);
int _wasgo_Object_wrapper_has_meta(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_Object_wrapper_has_method(WasGoID wasgo_id, const uint8_t * p_method, int p_method_wasgo_buffer_size);
int _wasgo_Object_wrapper_has_signal(WasGoID wasgo_id, const uint8_t * p_signal, int p_signal_wasgo_buffer_size);
int _wasgo_Object_wrapper_has_user_signal(WasGoID wasgo_id, const uint8_t * p_signal, int p_signal_wasgo_buffer_size);
int _wasgo_Object_wrapper_is_blocking_signals(WasGoID wasgo_id);
int _wasgo_Object_wrapper_is_class(WasGoID wasgo_id, const uint8_t * p_class, int p_class_wasgo_buffer_size);
int _wasgo_Object_wrapper_is_connected(WasGoID wasgo_id, const uint8_t * p_signal, int p_signal_wasgo_buffer_size, WasGoID p_target, const uint8_t * p_method, int p_method_wasgo_buffer_size);
int _wasgo_Object_wrapper_is_queued_for_deletion(WasGoID wasgo_id);
void _wasgo_Object_wrapper_notification(WasGoID wasgo_id, int p_what, bool p_reversed);
void _wasgo_Object_wrapper_property_list_changed_notify(WasGoID wasgo_id);
void _wasgo_Object_wrapper_remove_meta(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_Object_wrapper_set(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, WasGoID p_value);
void _wasgo_Object_wrapper_set_block_signals(WasGoID wasgo_id, bool p_enable);
void _wasgo_Object_wrapper_set_deferred(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, WasGoID p_value);
void _wasgo_Object_wrapper_set_indexed(WasGoID wasgo_id, const uint8_t * p_property, int p_property_wasgo_buffer_size, WasGoID p_value);
void _wasgo_Object_wrapper_set_message_translation(WasGoID wasgo_id, bool p_enable);
void _wasgo_Object_wrapper_set_meta(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, WasGoID p_value);
void _wasgo_Object_wrapper_set_script(WasGoID wasgo_id, WasGoID p_script);
void _wasgo_Object_wrapper_to_string(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Object_wrapper_tr(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_message, int p_message_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Object_constructor();
            
}
#endif