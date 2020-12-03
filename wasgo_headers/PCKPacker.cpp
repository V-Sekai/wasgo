/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PCKPacker.h"
Error PCKPacker::add_file(String p_pck_path, String p_source_path){

    Variant wasgo_var_pck_path = p_pck_path;
    uint8_t wasgo_buffer_pck_path[256];
    int wasgo_size_pck_path = 256;
    encode_variant(wasgo_var_pck_path, wasgo_buffer_pck_path, wasgo_size_pck_path);
    

    Variant wasgo_var_source_path = p_source_path;
    uint8_t wasgo_buffer_source_path[256];
    int wasgo_size_source_path = 256;
    encode_variant(wasgo_var_source_path, wasgo_buffer_source_path, wasgo_size_source_path);
    
	return Error(_wasgo_PCKPacker_wrapper_add_file(wasgo_id, wasgo_buffer_pck_path, wasgo_size_pck_path, wasgo_buffer_source_path, wasgo_size_source_path));
}
Error PCKPacker::flush(bool p_verbose = (bool) false){
	return Error(_wasgo_PCKPacker_wrapper_flush(wasgo_id, p_verbose));
}
Error PCKPacker::pck_start(String p_pck_name, int p_alignment = (int) 0){

    Variant wasgo_var_pck_name = p_pck_name;
    uint8_t wasgo_buffer_pck_name[256];
    int wasgo_size_pck_name = 256;
    encode_variant(wasgo_var_pck_name, wasgo_buffer_pck_name, wasgo_size_pck_name);
    
	return Error(_wasgo_PCKPacker_wrapper_pck_start(wasgo_id, wasgo_buffer_pck_name, wasgo_size_pck_name, p_alignment));
}

PCKPacker::PCKPacker(WasGoId p_wasgo_id) : Reference(p_wasgo_id){
}
PCKPacker::PCKPacker(){
    wasgo_id = _wasgo_PCKPacker_constructor();
}
PCKPacker::~PCKPacker(){
    _wasgo_PCKPacker_destructor(wasgo_id);
}