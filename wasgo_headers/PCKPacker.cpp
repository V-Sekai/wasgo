/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PCKPacker.h"
Error PCKPacker::add_file(String p_pck_path, String p_source_path){

    Variant wasgo_var_pck_path = p_pck_path;
    int wasgo_size_pck_path = String(p_pck_path).size();
    uint8_t wasgo_buffer_pck_path[wasgo_size_pck_path];
    encode_variant(wasgo_var_pck_path, wasgo_buffer_pck_path, wasgo_size_pck_path);
    

    Variant wasgo_var_source_path = p_source_path;
    int wasgo_size_source_path = String(p_source_path).size();
    uint8_t wasgo_buffer_source_path[wasgo_size_source_path];
    encode_variant(wasgo_var_source_path, wasgo_buffer_source_path, wasgo_size_source_path);
    
	return Error(_wasgo_PCKPacker_wrapper_add_file(wasgo_id, wasgo_buffer_pck_path, wasgo_size_pck_path, wasgo_buffer_source_path, wasgo_size_source_path));
}
Error PCKPacker::flush(bool p_verbose){
	return Error(_wasgo_PCKPacker_wrapper_flush(wasgo_id, p_verbose));
}
Error PCKPacker::pck_start(String p_pck_name, int p_alignment){

    Variant wasgo_var_pck_name = p_pck_name;
    int wasgo_size_pck_name = String(p_pck_name).size();
    uint8_t wasgo_buffer_pck_name[wasgo_size_pck_name];
    encode_variant(wasgo_var_pck_name, wasgo_buffer_pck_name, wasgo_size_pck_name);
    
	return Error(_wasgo_PCKPacker_wrapper_pck_start(wasgo_id, wasgo_buffer_pck_name, wasgo_size_pck_name, p_alignment));
}

PCKPacker::PCKPacker(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
PCKPacker::PCKPacker(Reference other) : Reference(other._get_wasgo_id()){
}
PCKPacker::PCKPacker():Reference(){
}
PCKPacker PCKPacker::new_instance(){
    return PCKPacker(_wasgo_PCKPacker_constructor());
}
WasGoID PCKPacker::_get_wasgo_id(){
    return wasgo_id;
}
PCKPacker::operator bool(){
    return (bool) wasgo_id;
}
