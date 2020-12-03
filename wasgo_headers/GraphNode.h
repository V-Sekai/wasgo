/* THIS FILE IS GENERATED */
#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include "wasgo\wasgo.h"

#include "Color.h"
#include "Vector2.h"
#include "Texture.h"
#include "ustring.h"
#include "Container.h"
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
void set_slot(int p_idx, bool p_enable_left, int p_type_left, Color p_color_left, bool p_enable_right, int p_type_right, Color p_color_right, Texture p_custom_left = (Texture) [object:null], Texture p_custom_right = (Texture) [object:null]);
void set_title(String p_title);

protected:
GraphNode(WasGoId p_wasgo_id);
public:
GraphNode();
~GraphNode();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_GraphNode_wrapper_clear_all_slots(WasGoId wasgo_id);
void _wasgo_GraphNode_wrapper_clear_slot(WasGoId wasgo_id, int p_idx);
void _wasgo_GraphNode_wrapper_get_connection_input_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_GraphNode_wrapper_get_connection_input_count(WasGoId wasgo_id);
void _wasgo_GraphNode_wrapper_get_connection_input_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_GraphNode_wrapper_get_connection_input_type(WasGoId wasgo_id, int p_idx);
void _wasgo_GraphNode_wrapper_get_connection_output_color(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_GraphNode_wrapper_get_connection_output_count(WasGoId wasgo_id);
void _wasgo_GraphNode_wrapper_get_connection_output_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_GraphNode_wrapper_get_connection_output_type(WasGoId wasgo_id, int p_idx);
void _wasgo_GraphNode_wrapper_get_offset(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_GraphNode_wrapper_get_overlay(WasGoId wasgo_id);
void _wasgo_GraphNode_wrapper_get_slot_color_left(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_GraphNode_wrapper_get_slot_color_right(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_GraphNode_wrapper_get_slot_type_left(WasGoId wasgo_id, int p_idx);
int _wasgo_GraphNode_wrapper_get_slot_type_right(WasGoId wasgo_id, int p_idx);
void _wasgo_GraphNode_wrapper_get_title(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_GraphNode_wrapper_is_close_button_visible(WasGoId wasgo_id);
int _wasgo_GraphNode_wrapper_is_comment(WasGoId wasgo_id);
int _wasgo_GraphNode_wrapper_is_resizable(WasGoId wasgo_id);
int _wasgo_GraphNode_wrapper_is_selected(WasGoId wasgo_id);
int _wasgo_GraphNode_wrapper_is_slot_enabled_left(WasGoId wasgo_id, int p_idx);
int _wasgo_GraphNode_wrapper_is_slot_enabled_right(WasGoId wasgo_id, int p_idx);
void _wasgo_GraphNode_wrapper_set_comment(WasGoId wasgo_id, bool p_comment);
void _wasgo_GraphNode_wrapper_set_offset(WasGoId wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_GraphNode_wrapper_set_overlay(WasGoId wasgo_id, WasGoId p_overlay);
void _wasgo_GraphNode_wrapper_set_resizable(WasGoId wasgo_id, bool p_resizable);
void _wasgo_GraphNode_wrapper_set_selected(WasGoId wasgo_id, bool p_selected);
void _wasgo_GraphNode_wrapper_set_show_close_button(WasGoId wasgo_id, bool p_show);
void _wasgo_GraphNode_wrapper_set_slot(WasGoId wasgo_id, int p_idx, bool p_enable_left, int p_type_left, const uint8_t * p_color_left, int p_color_left_wasgo_buffer_size, bool p_enable_right, int p_type_right, const uint8_t * p_color_right, int p_color_right_wasgo_buffer_size, WasGoId p_custom_left, WasGoId p_custom_right);
void _wasgo_GraphNode_wrapper_set_title(WasGoId wasgo_id, const uint8_t * p_title, int p_title_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_GraphNode_constructor();
    void _wasgo_GraphNode_destructor(WasGoId p_wasgo_id);
            
}
#endif