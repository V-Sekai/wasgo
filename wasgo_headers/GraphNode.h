/* THIS FILE IS GENERATED */
#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include <stdint.h>

#include "String.h"
#include "InputEvent.h"
#include "Container.h"
#include "Vector2.h"
#include "Variant.h"
#include "Texture.h"
class GraphNode : public Container{
public: GraphNode();
enum Overlay{
OVERLAY_DISABLED: 0,
OVERLAY_BREAKPOINT: 1,
};
void  _gui_input(InputEvent arg0);
void  clear_all_slots();
void  clear_all_slots();
void  clear_slot(int idx);
Color  get_connection_input_color(int idx);
int  get_connection_input_count();
int  get_connection_input_count();
Vector2  get_connection_input_position(int idx);
int  get_connection_input_type(int idx);
Color  get_connection_output_color(int idx);
int  get_connection_output_count();
int  get_connection_output_count();
Vector2  get_connection_output_position(int idx);
int  get_connection_output_type(int idx);
Vector2  get_offset();
Vector2  get_offset();
enum.GraphNode::Overlay  get_overlay();
enum.GraphNode::Overlay  get_overlay();
Color  get_slot_color_left(int idx);
Color  get_slot_color_right(int idx);
int  get_slot_type_left(int idx);
int  get_slot_type_right(int idx);
String  get_title();
String  get_title();
bool  is_close_button_visible();
bool  is_close_button_visible();
bool  is_comment();
bool  is_comment();
bool  is_resizable();
bool  is_resizable();
bool  is_selected();
bool  is_selected();
bool  is_slot_enabled_left(int idx);
bool  is_slot_enabled_right(int idx);
void  set_comment(bool comment);
void  set_offset(Vector2 offset);
void  set_overlay(int overlay);
void  set_resizable(bool resizable);
void  set_selected(bool selected);
void  set_show_close_button(bool show);
void  set_slot(int idx, bool enable_left, int type_left, Color color_left, bool enable_right, int type_right, Color color_right, Texture custom_left = [object:null], Texture custom_right = [object:null]);
void  set_title(String title);
};
#endif