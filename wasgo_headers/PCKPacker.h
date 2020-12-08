/* THIS FILE IS GENERATED */
#ifndef PCKPACKER_H
#define PCKPACKER_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
#include "Ustring.h"
#include "error_list.h"
class PCKPacker : public Reference{
public:
Error add_file(String p_pck_path, String p_source_path);
Error flush(bool p_verbose = (bool) false);
Error pck_start(String p_pck_name, int p_alignment = (int) 0);

protected:
public:
explicit PCKPacker(WasGoID p_wasgo_id);
explicit PCKPacker(Reference other);
PCKPacker();
PCKPacker new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_PCKPacker_wrapper_add_file(WasGoID wasgo_id, const uint8_t * p_pck_path, int p_pck_path_wasgo_buffer_size, const uint8_t * p_source_path, int p_source_path_wasgo_buffer_size);
WasGoID _wasgo_PCKPacker_wrapper_flush(WasGoID wasgo_id, bool p_verbose);
WasGoID _wasgo_PCKPacker_wrapper_pck_start(WasGoID wasgo_id, const uint8_t * p_pck_name, int p_pck_name_wasgo_buffer_size, int p_alignment);

    //constructor wrappers
    WasGoID _wasgo_PCKPacker_constructor();
            
}
#endif