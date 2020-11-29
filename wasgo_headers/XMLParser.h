/* THIS FILE IS GENERATED */
#ifndef XMLPARSER_H
#define XMLPARSER_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Error.h"
class XMLParser : public Reference{
public: XMLParser();
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
};
#endif