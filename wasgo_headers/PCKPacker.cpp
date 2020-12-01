/* THIS FILE IS GENERATED */
#include "PCKPacker.h"
Error PCKPacker::add_file(String p_pck_path, String p_source_path){
	return Error::from_wasgo_id(_wasgo_PCKPacker_wrapper_add_file(wasgo_id, ((Variant) p_pck_path).get_wasgo_id(), ((Variant) p_source_path).get_wasgo_id()));
}
Error PCKPacker::flush(bool p_verbose = (bool) false){
	return Error::from_wasgo_id(_wasgo_PCKPacker_wrapper_flush(wasgo_id, p_verbose));
}
Error PCKPacker::pck_start(String p_pck_name, int p_alignment = (int) 0){
	return Error::from_wasgo_id(_wasgo_PCKPacker_wrapper_pck_start(wasgo_id, ((Variant) p_pck_name).get_wasgo_id(), p_alignment));
}