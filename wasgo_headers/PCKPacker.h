/* THIS FILE IS GENERATED */
#ifndef PCKPACKER_H
#define PCKPACKER_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Reference.h"
#include "error_list.h"
class PCKPacker : public Reference{
public:
Error add_file(String p_pck_path, String p_source_path);
Error flush(bool p_verbose = (bool) false);
Error pck_start(String p_pck_name, int p_alignment = (int) 0);

protected:
PCKPacker(WasGoId p_wasgo_id);
public:
PCKPacker();
~PCKPacker();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PCKPacker_wrapper_add_file(WasGoId wasgo_id, const uint8_t * p_pck_path, int p_pck_path_wasgo_buffer_size, const uint8_t * p_source_path, int p_source_path_wasgo_buffer_size);
WasGoId _wasgo_PCKPacker_wrapper_flush(WasGoId wasgo_id, bool p_verbose);
WasGoId _wasgo_PCKPacker_wrapper_pck_start(WasGoId wasgo_id, const uint8_t * p_pck_name, int p_pck_name_wasgo_buffer_size, int p_alignment);

    //constructor and destructor wrappers
    WasGoId _wasgo_PCKPacker_constructor();
    void _wasgo_PCKPacker_destructor(WasGoId p_wasgo_id);
            
}
#endif