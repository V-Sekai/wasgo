/* THIS FILE IS GENERATED */
#ifndef XMLPARSER_H
#define XMLPARSER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
#include "Error.h"
class XMLParser : public Reference{
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

XMLParser(WasGoId p_wasgo_id);
~XMLParser();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_XMLParser_wrapper_get_attribute_count(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_XMLParser_wrapper_get_attribute_name(WasGoId wasgo_id, int p_idx);
WasGo::WasGoId _wasgo_XMLParser_wrapper_get_attribute_value(WasGoId wasgo_id, int p_idx);
int _wasgo_XMLParser_wrapper_get_current_line(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_XMLParser_wrapper_get_named_attribute_value(WasGoId wasgo_id, WasGo::WasGoId p_name);
WasGo::WasGoId _wasgo_XMLParser_wrapper_get_named_attribute_value_safe(WasGoId wasgo_id, WasGo::WasGoId p_name);
WasGo::WasGoId _wasgo_XMLParser_wrapper_get_node_data(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_XMLParser_wrapper_get_node_name(WasGoId wasgo_id);
int _wasgo_XMLParser_wrapper_get_node_offset(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_XMLParser_wrapper_get_node_type(WasGoId wasgo_id);
int _wasgo_XMLParser_wrapper_has_attribute(WasGoId wasgo_id, WasGo::WasGoId p_name);
int _wasgo_XMLParser_wrapper_is_empty(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_XMLParser_wrapper_open(WasGoId wasgo_id, WasGo::WasGoId p_file);
WasGo::WasGoId _wasgo_XMLParser_wrapper_open_buffer(WasGoId wasgo_id, WasGo::WasGoId p_buffer);
WasGo::WasGoId _wasgo_XMLParser_wrapper_read(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_XMLParser_wrapper_seek(WasGoId wasgo_id, int p_position);
void _wasgo_XMLParser_wrapper_skip_section(WasGoId wasgo_id);
}
#endif