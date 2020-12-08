/* THIS FILE IS GENERATED */
#ifndef XMLPARSER_H
#define XMLPARSER_H

#include "wasgo\wasgoid.h"

#include "Variant.h"
#include "Reference.h"
#include "Ustring.h"
#include "error_list.h"
class XMLParser : public Reference{
public:
enum NodeType{
NODE_NONE,
NODE_ELEMENT,
NODE_ELEMENT_END,
NODE_TEXT,
NODE_COMMENT,
NODE_CDATA,
NODE_UNKNOWN
};
int get_attribute_count();
String get_attribute_name(int p_idx);
String get_attribute_value(int p_idx);
int get_current_line();
String get_named_attribute_value(String p_name);
String get_named_attribute_value_safe(String p_name);
String get_node_data();
String get_node_name();
int get_node_offset();
XMLParser::NodeType get_node_type();
bool has_attribute(String p_name);
bool is_empty();
Error open(String p_file);
Error open_buffer(PoolByteArray p_buffer);
Error read();
Error seek(int p_position);
void skip_section();

protected:
public:
explicit XMLParser(WasGoID p_wasgo_id);
explicit XMLParser(Reference other);
XMLParser();
XMLParser new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_XMLParser_wrapper_get_attribute_count(WasGoID wasgo_id);
void _wasgo_XMLParser_wrapper_get_attribute_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_XMLParser_wrapper_get_attribute_value(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_XMLParser_wrapper_get_current_line(WasGoID wasgo_id);
void _wasgo_XMLParser_wrapper_get_named_attribute_value(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_XMLParser_wrapper_get_named_attribute_value_safe(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_XMLParser_wrapper_get_node_data(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_XMLParser_wrapper_get_node_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_XMLParser_wrapper_get_node_offset(WasGoID wasgo_id);
WasGoID _wasgo_XMLParser_wrapper_get_node_type(WasGoID wasgo_id);
int _wasgo_XMLParser_wrapper_has_attribute(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_XMLParser_wrapper_is_empty(WasGoID wasgo_id);
WasGoID _wasgo_XMLParser_wrapper_open(WasGoID wasgo_id, const uint8_t * p_file, int p_file_wasgo_buffer_size);
WasGoID _wasgo_XMLParser_wrapper_open_buffer(WasGoID wasgo_id, WasGoID p_buffer);
WasGoID _wasgo_XMLParser_wrapper_read(WasGoID wasgo_id);
WasGoID _wasgo_XMLParser_wrapper_seek(WasGoID wasgo_id, int p_position);
void _wasgo_XMLParser_wrapper_skip_section(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_XMLParser_constructor();
            
}
#endif