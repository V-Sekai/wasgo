/* THIS FILE IS GENERATED */
#ifndef XMLPARSER_H
#define XMLPARSER_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Variant.h"
#include "error_list.h"
#include "ustring.h"
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
explicit XMLParser(WasGoId p_wasgo_id);
explicit XMLParser(Reference other);
XMLParser new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_XMLParser_wrapper_get_attribute_count(WasGoId wasgo_id);
void _wasgo_XMLParser_wrapper_get_attribute_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
void _wasgo_XMLParser_wrapper_get_attribute_value(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);
int _wasgo_XMLParser_wrapper_get_current_line(WasGoId wasgo_id);
void _wasgo_XMLParser_wrapper_get_named_attribute_value(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_XMLParser_wrapper_get_named_attribute_value_safe(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_XMLParser_wrapper_get_node_data(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_XMLParser_wrapper_get_node_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_XMLParser_wrapper_get_node_offset(WasGoId wasgo_id);
WasGoId _wasgo_XMLParser_wrapper_get_node_type(WasGoId wasgo_id);
int _wasgo_XMLParser_wrapper_has_attribute(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_XMLParser_wrapper_is_empty(WasGoId wasgo_id);
WasGoId _wasgo_XMLParser_wrapper_open(WasGoId wasgo_id, const uint8_t * p_file, int p_file_wasgo_buffer_size);
WasGoId _wasgo_XMLParser_wrapper_open_buffer(WasGoId wasgo_id, WasGoId p_buffer);
WasGoId _wasgo_XMLParser_wrapper_read(WasGoId wasgo_id);
WasGoId _wasgo_XMLParser_wrapper_seek(WasGoId wasgo_id, int p_position);
void _wasgo_XMLParser_wrapper_skip_section(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_XMLParser_constructor();
            
}
#endif