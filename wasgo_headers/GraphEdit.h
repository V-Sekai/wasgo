/* THIS FILE IS GENERATED */
#ifndef GRAPHEDIT_H
#define GRAPHEDIT_H

#include "wasgo\wasgo.h"

#include "Control.h"
#include "ustring.h"
#include "Vector2.h"
#include "HBoxContainer.h"
#include "error_list.h"
#include "Variant.h"
#include "Node.h"
class GraphEdit : public Control{
public:
void add_valid_connection_type(int p_from_type, int p_to_type);
void add_valid_left_disconnect_type(int p_type);
void add_valid_right_disconnect_type(int p_type);
void clear_connections();
Error connect_node(String p_from, int p_from_port, String p_to, int p_to_port);
void disconnect_node(String p_from, int p_from_port, String p_to, int p_to_port);
Array get_connection_list();
Vector2 get_scroll_ofs();
int get_snap();
float get_zoom();
HBoxContainer get_zoom_hbox();
bool is_node_connected(String p_from, int p_from_port, String p_to, int p_to_port);
bool is_right_disconnects_enabled();
bool is_using_snap();
bool is_valid_connection_type(int p_from_type, int p_to_type);
void remove_valid_connection_type(int p_from_type, int p_to_type);
void remove_valid_left_disconnect_type(int p_type);
void remove_valid_right_disconnect_type(int p_type);
void set_connection_activity(String p_from, int p_from_port, String p_to, int p_to_port, float p_amount);
void set_right_disconnects(bool p_enable);
void set_scroll_ofs(Vector2 p_ofs);
void set_selected(Node p_node);
void set_snap(int p_pixels);
void set_use_snap(bool p_enable);
void set_zoom(float p_p_zoom);

protected:
GraphEdit(WasGoId p_wasgo_id);
public:
GraphEdit();
~GraphEdit();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_GraphEdit_wrapper_add_valid_connection_type(WasGoId wasgo_id, int p_from_type, int p_to_type);
void _wasgo_GraphEdit_wrapper_add_valid_left_disconnect_type(WasGoId wasgo_id, int p_type);
void _wasgo_GraphEdit_wrapper_add_valid_right_disconnect_type(WasGoId wasgo_id, int p_type);
void _wasgo_GraphEdit_wrapper_clear_connections(WasGoId wasgo_id);
WasGoId _wasgo_GraphEdit_wrapper_connect_node(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, int p_from_port, const uint8_t * p_to, int p_to_wasgo_buffer_size, int p_to_port);
void _wasgo_GraphEdit_wrapper_disconnect_node(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, int p_from_port, const uint8_t * p_to, int p_to_wasgo_buffer_size, int p_to_port);
WasGoId _wasgo_GraphEdit_wrapper_get_connection_list(WasGoId wasgo_id);
void _wasgo_GraphEdit_wrapper_get_scroll_ofs(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_GraphEdit_wrapper_get_snap(WasGoId wasgo_id);
float _wasgo_GraphEdit_wrapper_get_zoom(WasGoId wasgo_id);
WasGoId _wasgo_GraphEdit_wrapper_get_zoom_hbox(WasGoId wasgo_id);
int _wasgo_GraphEdit_wrapper_is_node_connected(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, int p_from_port, const uint8_t * p_to, int p_to_wasgo_buffer_size, int p_to_port);
int _wasgo_GraphEdit_wrapper_is_right_disconnects_enabled(WasGoId wasgo_id);
int _wasgo_GraphEdit_wrapper_is_using_snap(WasGoId wasgo_id);
int _wasgo_GraphEdit_wrapper_is_valid_connection_type(WasGoId wasgo_id, int p_from_type, int p_to_type);
void _wasgo_GraphEdit_wrapper_remove_valid_connection_type(WasGoId wasgo_id, int p_from_type, int p_to_type);
void _wasgo_GraphEdit_wrapper_remove_valid_left_disconnect_type(WasGoId wasgo_id, int p_type);
void _wasgo_GraphEdit_wrapper_remove_valid_right_disconnect_type(WasGoId wasgo_id, int p_type);
void _wasgo_GraphEdit_wrapper_set_connection_activity(WasGoId wasgo_id, const uint8_t * p_from, int p_from_wasgo_buffer_size, int p_from_port, const uint8_t * p_to, int p_to_wasgo_buffer_size, int p_to_port, float p_amount);
void _wasgo_GraphEdit_wrapper_set_right_disconnects(WasGoId wasgo_id, bool p_enable);
void _wasgo_GraphEdit_wrapper_set_scroll_ofs(WasGoId wasgo_id, const uint8_t * p_ofs, int p_ofs_wasgo_buffer_size);
void _wasgo_GraphEdit_wrapper_set_selected(WasGoId wasgo_id, WasGoId p_node);
void _wasgo_GraphEdit_wrapper_set_snap(WasGoId wasgo_id, int p_pixels);
void _wasgo_GraphEdit_wrapper_set_use_snap(WasGoId wasgo_id, bool p_enable);
void _wasgo_GraphEdit_wrapper_set_zoom(WasGoId wasgo_id, float p_p_zoom);

    //constructor and destructor wrappers
    WasGoId _wasgo_GraphEdit_constructor();
    void _wasgo_GraphEdit_destructor(WasGoId p_wasgo_id);
            
}
#endif