/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "XMLParser.h"
int XMLParser::get_attribute_count(){
	return (int) _wasgo_XMLParser_wrapper_get_attribute_count(wasgo_id);
}
String XMLParser::get_attribute_name(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_XMLParser_wrapper_get_attribute_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String XMLParser::get_attribute_value(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_XMLParser_wrapper_get_attribute_value(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int XMLParser::get_current_line(){
	return (int) _wasgo_XMLParser_wrapper_get_current_line(wasgo_id);
}
String XMLParser::get_named_attribute_value(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_XMLParser_wrapper_get_named_attribute_value(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_name, wasgo_size_name);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String XMLParser::get_named_attribute_value_safe(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_XMLParser_wrapper_get_named_attribute_value_safe(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, wasgo_buffer_name, wasgo_size_name);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String XMLParser::get_node_data(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_XMLParser_wrapper_get_node_data(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
String XMLParser::get_node_name(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_XMLParser_wrapper_get_node_name(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (String) wasgo_ret;
    
}
int XMLParser::get_node_offset(){
	return (int) _wasgo_XMLParser_wrapper_get_node_offset(wasgo_id);
}
XMLParser::NodeType XMLParser::get_node_type(){
	return XMLParser::NodeType(_wasgo_XMLParser_wrapper_get_node_type(wasgo_id));
}
bool XMLParser::has_attribute(String p_name){

    Variant wasgo_var_name = p_name;
    int wasgo_size_name = String(p_name).size();
    uint8_t wasgo_buffer_name[wasgo_size_name];
    encode_variant(wasgo_var_name, wasgo_buffer_name, wasgo_size_name);
    
	return (bool) _wasgo_XMLParser_wrapper_has_attribute(wasgo_id, wasgo_buffer_name, wasgo_size_name);
}
bool XMLParser::is_empty(){
	return (bool) _wasgo_XMLParser_wrapper_is_empty(wasgo_id);
}
Error XMLParser::open(String p_file){

    Variant wasgo_var_file = p_file;
    int wasgo_size_file = String(p_file).size();
    uint8_t wasgo_buffer_file[wasgo_size_file];
    encode_variant(wasgo_var_file, wasgo_buffer_file, wasgo_size_file);
    
	return Error(_wasgo_XMLParser_wrapper_open(wasgo_id, wasgo_buffer_file, wasgo_size_file));
}
Error XMLParser::open_buffer(PoolByteArray p_buffer){
	return Error(_wasgo_XMLParser_wrapper_open_buffer(wasgo_id, p_buffer._get_wasgo_id()));
}
Error XMLParser::read(){
	return Error(_wasgo_XMLParser_wrapper_read(wasgo_id));
}
Error XMLParser::seek(int p_position){
	return Error(_wasgo_XMLParser_wrapper_seek(wasgo_id, p_position));
}
void XMLParser::skip_section(){
	_wasgo_XMLParser_wrapper_skip_section(wasgo_id);
}

XMLParser::XMLParser(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
XMLParser::XMLParser(Reference other) : Reference(other._get_wasgo_id()){
    wasgo_id = _wasgo_XMLParser_constructor();
}
XMLParser::new_instance(){
    return XMLParser(_wasgo_XMLParser_constructor());
}