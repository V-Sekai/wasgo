/* THIS FILE IS GENERATED */
#ifndef VISUALSHADER_H
#define VISUALSHADER_H

#include "stdint.h"

#include "Shader.h"
#include "Variant.h"
#include "VisualShaderNode.h"
#include "Error.h"
class VisualShader : public Shader{
public: VisualShader();
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
};
#endif