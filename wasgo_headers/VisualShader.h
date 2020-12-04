/* THIS FILE IS GENERATED */
#ifndef VISUALSHADER_H
#define VISUALSHADER_H

#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "VisualShaderNode.h"
#include "Variant.h"
#include "error_list.h"
#include "Shader.h"
class VisualShader : public Shader{
public:
enum Type{
TYPE_VERTEX,
TYPE_FRAGMENT,
TYPE_LIGHT,
TYPE_MAX
};
void add_node(VisualShader::Type p_type, VisualShaderNode p_node, Vector2 p_position, int p_id);
bool can_connect_nodes(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port);
Error connect_nodes(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port);
void connect_nodes_forced(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port);
void disconnect_nodes(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port);
Vector2 get_graph_offset();
VisualShaderNode get_node(VisualShader::Type p_type, int p_id);
Array get_node_connections(VisualShader::Type p_type);
PoolIntArray get_node_list(VisualShader::Type p_type);
Vector2 get_node_position(VisualShader::Type p_type, int p_id);
int get_valid_node_id(VisualShader::Type p_type);
bool is_node_connection(VisualShader::Type p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port);
void remove_node(VisualShader::Type p_type, int p_id);
void set_graph_offset(Vector2 p_offset);
void set_mode(Shader::Mode p_mode);
void set_node_position(VisualShader::Type p_type, int p_id, Vector2 p_position);

protected:
public:
explicit VisualShader(WasGoID p_wasgo_id);
explicit VisualShader(Shader other);
VisualShader new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualShader_wrapper_add_node(WasGoID wasgo_id, WasGoID p_type, WasGoID p_node, const uint8_t * p_position, int p_position_wasgo_buffer_size, int p_id);
int _wasgo_VisualShader_wrapper_can_connect_nodes(WasGoID wasgo_id, WasGoID p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port);
WasGoID _wasgo_VisualShader_wrapper_connect_nodes(WasGoID wasgo_id, WasGoID p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port);
void _wasgo_VisualShader_wrapper_connect_nodes_forced(WasGoID wasgo_id, WasGoID p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port);
void _wasgo_VisualShader_wrapper_disconnect_nodes(WasGoID wasgo_id, WasGoID p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port);
void _wasgo_VisualShader_wrapper_get_graph_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_VisualShader_wrapper_get_node(WasGoID wasgo_id, WasGoID p_type, int p_id);
WasGoID _wasgo_VisualShader_wrapper_get_node_connections(WasGoID wasgo_id, WasGoID p_type);
WasGoID _wasgo_VisualShader_wrapper_get_node_list(WasGoID wasgo_id, WasGoID p_type);
void _wasgo_VisualShader_wrapper_get_node_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, WasGoID p_type, int p_id);
int _wasgo_VisualShader_wrapper_get_valid_node_id(WasGoID wasgo_id, WasGoID p_type);
int _wasgo_VisualShader_wrapper_is_node_connection(WasGoID wasgo_id, WasGoID p_type, int p_from_node, int p_from_port, int p_to_node, int p_to_port);
void _wasgo_VisualShader_wrapper_remove_node(WasGoID wasgo_id, WasGoID p_type, int p_id);
void _wasgo_VisualShader_wrapper_set_graph_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_VisualShader_wrapper_set_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_VisualShader_wrapper_set_node_position(WasGoID wasgo_id, WasGoID p_type, int p_id, const uint8_t * p_position, int p_position_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_VisualShader_constructor();
            
}
#endif