/* THIS FILE IS GENERATED */
#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include "wasgo\wasgoid.h"

#include "Color.h"
#include "Vector2.h"
#include "Container.h"
#include "Ustring.h"
#include "Texture.h"
class GraphNode : public Container{
public:
enum Overlay{
OVERLAY_DISABLED,
OVERLAY_BREAKPOINT,
OVERLAY_POSITION
};
void clear_all_slots();
void clear_slot(int p_idx);
Color get_connection_input_color(int p_idx);
int get_connection_input_count();
Vector2 get_connection_input_position(int p_idx);
int get_connection_input_type(int p_idx);
Color get_connection_output_color(int p_idx);
int get_connection_output_count();
Vector2 get_connection_output_position(int p_idx);
int get_connection_output_type(int p_idx);
Vector2 get_offset();
GraphNode::Overlay get_overlay();
Color get_slot_color_left(int p_idx);
Color get_slot_color_right(int p_idx);
int get_slot_type_left(int p_idx);
int get_slot_type_right(int p_idx);
String get_title();
bool is_close_button_visible();
bool is_comment();
bool is_resizable();
bool is_selected();
bool is_slot_enabled_left(int p_idx);
bool is_slot_enabled_right(int p_idx);
void set_comment(bool p_comment);
void set_offset(Vector2 p_offset);
void set_overlay(GraphNode::Overlay p_overlay);
void set_resizable(bool p_resizable);
void set_selected(bool p_selected);
void set_show_close_button(bool p_show);
void set_slot(int p_idx, bool p_enable_left, int p_type_left, Color p_color_left, bool p_enable_right, int p_type_right, Color p_color_right, Texture p_custom_left = Texture(), Texture p_custom_right = Texture());
void set_title(String p_title);

protected:
public:
explicit GraphNode(WasGoID p_wasgo_id);
explicit GraphNode(Container other);
GraphNode();
GraphNode new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_GraphNode_wrapper_clear_all_slots(WasGoID wasgo_id);
void _wasgo_GraphNode_wrapper_clear_slot(WasGoID wasgo_id, int p_idx);
void _wasgo_GraphNode_wrapper_get_connection_input_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_GraphNode_wrapper_get_connection_input_count(WasGoID wasgo_id);
void _wasgo_GraphNode_wrapper_get_connection_input_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_GraphNode_wrapper_get_connection_input_type(WasGoID wasgo_id, int p_idx);
void _wasgo_GraphNode_wrapper_get_connection_output_color(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_GraphNode_wrapper_get_connection_output_count(WasGoID wasgo_id);
void _wasgo_GraphNode_wrapper_get_connection_output_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_GraphNode_wrapper_get_connection_output_type(WasGoID wasgo_id, int p_idx);
void _wasgo_GraphNode_wrapper_get_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_GraphNode_wrapper_get_overlay(WasGoID wasgo_id);
void _wasgo_GraphNode_wrapper_get_slot_color_left(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_GraphNode_wrapper_get_slot_color_right(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_GraphNode_wrapper_get_slot_type_left(WasGoID wasgo_id, int p_idx);
int _wasgo_GraphNode_wrapper_get_slot_type_right(WasGoID wasgo_id, int p_idx);
void _wasgo_GraphNode_wrapper_get_title(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_GraphNode_wrapper_is_close_button_visible(WasGoID wasgo_id);
int _wasgo_GraphNode_wrapper_is_comment(WasGoID wasgo_id);
int _wasgo_GraphNode_wrapper_is_resizable(WasGoID wasgo_id);
int _wasgo_GraphNode_wrapper_is_selected(WasGoID wasgo_id);
int _wasgo_GraphNode_wrapper_is_slot_enabled_left(WasGoID wasgo_id, int p_idx);
int _wasgo_GraphNode_wrapper_is_slot_enabled_right(WasGoID wasgo_id, int p_idx);
void _wasgo_GraphNode_wrapper_set_comment(WasGoID wasgo_id, bool p_comment);
void _wasgo_GraphNode_wrapper_set_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_GraphNode_wrapper_set_overlay(WasGoID wasgo_id, WasGoID p_overlay);
void _wasgo_GraphNode_wrapper_set_resizable(WasGoID wasgo_id, bool p_resizable);
void _wasgo_GraphNode_wrapper_set_selected(WasGoID wasgo_id, bool p_selected);
void _wasgo_GraphNode_wrapper_set_show_close_button(WasGoID wasgo_id, bool p_show);
void _wasgo_GraphNode_wrapper_set_slot(WasGoID wasgo_id, int p_idx, bool p_enable_left, int p_type_left, const uint8_t * p_color_left, int p_color_left_wasgo_buffer_size, bool p_enable_right, int p_type_right, const uint8_t * p_color_right, int p_color_right_wasgo_buffer_size, WasGoID p_custom_left, WasGoID p_custom_right);
void _wasgo_GraphNode_wrapper_set_title(WasGoID wasgo_id, const uint8_t * p_title, int p_title_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_GraphNode_constructor();
            
}
#endif