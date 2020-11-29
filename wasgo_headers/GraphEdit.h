/* THIS FILE IS GENERATED */
#ifndef GRAPHEDIT_H
#define GRAPHEDIT_H

#include "stdint.h"

#include "Variant.h"
#include "Control.h"
#include "Error.h"
class GraphEdit : public Control{
public: GraphEdit();
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
void set_snap(int p_pixels);
void set_use_snap(bool p_enable);
void set_zoom(float p_p_zoom);
};
#endif