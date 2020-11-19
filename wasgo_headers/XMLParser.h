/* THIS FILE IS GENERATED */
#ifndef XMLPARSER_H
#define XMLPARSER_H

#include <stdint.h>

#include "String.h"
#include "Erro.h"
#include "Reference.h"
#include "PoolByteArray.h"
class XMLParser : public Reference{
public: XMLParser();
enum NodeType{
NODE_NONE: 0,
NODE_ELEMENT: 1,
NODE_ELEMENT_END: 2,
NODE_TEXT: 3,
NODE_COMMENT: 4,
NODE_CDATA: 5,
};
int  get_attribute_count();
int  get_attribute_count();
String  get_attribute_name(int idx);
String  get_attribute_value(int idx);
int  get_current_line();
int  get_current_line();
String  get_named_attribute_value(String name);
String  get_named_attribute_value_safe(String name);
String  get_node_data();
String  get_node_data();
String  get_node_name();
String  get_node_name();
int  get_node_offset();
int  get_node_offset();
enum.XMLParser::NodeType  get_node_type();
enum.XMLParser::NodeType  get_node_type();
bool  has_attribute(String name);
bool  is_empty();
bool  is_empty();
enum.Error  open(String file);
enum.Error  open_buffer(PoolByteArray buffer);
enum.Error  read();
enum.Error  read();
enum.Error  seek(int position);
void  skip_section();
void  skip_section();
};
#endif