/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PoolIntArray.h"
#include "VisualShaderNode.h"
#include "Shader.h"
#include "Vector2.h"
#include "Variant.h"
#include "Erro.h"
class VisualShader : public Shader{
public: VisualShader();
enum Type{
TYPE_VERTEX: 0,
TYPE_FRAGMENT: 1,
TYPE_LIGHT: 2,
};
void  _input_type_changed(int arg0, int arg1);
void  _queue_update();
void  _queue_update();
void  _update_shader();
void  _update_shader();
void  add_node(int type, VisualShaderNode node, Vector2 position, int id);
bool  can_connect_nodes(int type, int from_node, int from_port, int to_node, int to_port);
enum.Error  connect_nodes(int type, int from_node, int from_port, int to_node, int to_port);
void  connect_nodes_forced(int type, int from_node, int from_port, int to_node, int to_port);
void  disconnect_nodes(int type, int from_node, int from_port, int to_node, int to_port);
Vector2  get_graph_offset();
Vector2  get_graph_offset();
VisualShaderNode  get_node(int type, int id);
Array  get_node_connections(int type);
PoolIntArray  get_node_list(int type);
Vector2  get_node_position(int type, int id);
int  get_valid_node_id(int type);
bool  is_node_connection(int type, int from_node, int from_port, int to_node, int to_port);
void  remove_node(int type, int id);
void  set_graph_offset(Vector2 offset);
void  set_mode(int mode);
void  set_node_position(int type, int id, Vector2 position);
};