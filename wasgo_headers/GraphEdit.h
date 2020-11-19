/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "HBoxContainer.h"
#include "Control.h"
#include "InputEvent.h"
#include "Variant.h"
#include "Vector2.h"
#include "Erro.h"
#include "Node.h"
class GraphEdit : public Control{
public: GraphEdit();
void  _connections_layer_draw();
void  _connections_layer_draw();
void  _graph_node_moved(Node arg0);
void  _graph_node_raised(Node arg0);
void  _gui_input(InputEvent arg0);
void  _scroll_moved(float arg0);
void  _snap_toggled();
void  _snap_toggled();
void  _snap_value_changed(float arg0);
void  _top_layer_draw();
void  _top_layer_draw();
void  _top_layer_input(InputEvent arg0);
void  _update_scroll_offset();
void  _update_scroll_offset();
void  _zoom_minus();
void  _zoom_minus();
void  _zoom_plus();
void  _zoom_plus();
void  _zoom_reset();
void  _zoom_reset();
void  add_valid_connection_type(int from_type, int to_type);
void  add_valid_left_disconnect_type(int type);
void  add_valid_right_disconnect_type(int type);
void  clear_connections();
void  clear_connections();
enum.Error  connect_node(String from, int from_port, String to, int to_port);
void  disconnect_node(String from, int from_port, String to, int to_port);
Array  get_connection_list();
Array  get_connection_list();
Vector2  get_scroll_ofs();
Vector2  get_scroll_ofs();
int  get_snap();
int  get_snap();
float  get_zoom();
float  get_zoom();
HBoxContainer  get_zoom_hbox();
HBoxContainer  get_zoom_hbox();
bool  is_node_connected(String from, int from_port, String to, int to_port);
bool  is_right_disconnects_enabled();
bool  is_right_disconnects_enabled();
bool  is_using_snap();
bool  is_using_snap();
bool  is_valid_connection_type(int from_type, int to_type);
void  remove_valid_connection_type(int from_type, int to_type);
void  remove_valid_left_disconnect_type(int type);
void  remove_valid_right_disconnect_type(int type);
void  set_connection_activity(String from, int from_port, String to, int to_port, float amount);
void  set_right_disconnects(bool enable);
void  set_scroll_ofs(Vector2 ofs);
void  set_selected(Node node);
void  set_snap(int pixels);
void  set_use_snap(bool enable);
void  set_zoom(float p_zoom);
};