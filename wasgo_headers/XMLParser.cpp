/* THIS FILE IS GENERATED */
#include "XMLParser.h"
int XMLParser::get_attribute_count(){
	return (int) _wasgo_XMLParser_wrapper_get_attribute_count(wasgo_id));
}
String XMLParser::get_attribute_name(int p_idx){
	return String::from_wasgo_id(_wasgo_XMLParser_wrapper_get_attribute_name(wasgo_id, idx));
}
String XMLParser::get_attribute_value(int p_idx){
	return String::from_wasgo_id(_wasgo_XMLParser_wrapper_get_attribute_value(wasgo_id, idx));
}
int XMLParser::get_current_line(){
	return (int) _wasgo_XMLParser_wrapper_get_current_line(wasgo_id));
}
String XMLParser::get_named_attribute_value(String p_name){
	return String::from_wasgo_id(_wasgo_XMLParser_wrapper_get_named_attribute_value(wasgo_id, ((Variant) name).get_wasgo_id()));
}
String XMLParser::get_named_attribute_value_safe(String p_name){
	return String::from_wasgo_id(_wasgo_XMLParser_wrapper_get_named_attribute_value_safe(wasgo_id, ((Variant) name).get_wasgo_id()));
}
String XMLParser::get_node_data(){
	return String::from_wasgo_id(_wasgo_XMLParser_wrapper_get_node_data(wasgo_id));
}
String XMLParser::get_node_name(){
	return String::from_wasgo_id(_wasgo_XMLParser_wrapper_get_node_name(wasgo_id));
}
int XMLParser::get_node_offset(){
	return (int) _wasgo_XMLParser_wrapper_get_node_offset(wasgo_id));
}
XMLParser::NodeType XMLParser::get_node_type(){
	return XMLParser::NodeType::from_wasgo_id(_wasgo_XMLParser_wrapper_get_node_type(wasgo_id));
}
bool XMLParser::has_attribute(String p_name){
	return (bool) _wasgo_XMLParser_wrapper_has_attribute(wasgo_id, ((Variant) name).get_wasgo_id()));
}
bool XMLParser::is_empty(){
	return (bool) _wasgo_XMLParser_wrapper_is_empty(wasgo_id));
}
Error XMLParser::open(String p_file){
	return Error::from_wasgo_id(_wasgo_XMLParser_wrapper_open(wasgo_id, ((Variant) file).get_wasgo_id()));
}
Error XMLParser::open_buffer(PoolByteArray p_buffer){
	return Error::from_wasgo_id(_wasgo_XMLParser_wrapper_open_buffer(wasgo_id, ((Variant) buffer).get_wasgo_id()));
}
Error XMLParser::read(){
	return Error::from_wasgo_id(_wasgo_XMLParser_wrapper_read(wasgo_id));
}
Error XMLParser::seek(int p_position){
	return Error::from_wasgo_id(_wasgo_XMLParser_wrapper_seek(wasgo_id, position));
}
void XMLParser::skip_section(){
	_wasgo_XMLParser_wrapper_skip_section(wasgo_id);
}

XMLParser::XMLParser(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
XMLParser::~XMLParser(){
}