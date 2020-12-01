/* THIS FILE IS GENERATED */
#ifndef PCKPACKER_H
#define PCKPACKER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
#include "ustring.h"
#include "error_list.h"
class PCKPacker : public Reference{
public:
Error add_file(String p_pck_path, String p_source_path);
Error flush(bool p_verbose = (bool) false);
Error pck_start(String p_pck_name, int p_alignment = (int) 0);

PCKPacker(WasGoId p_wasgo_id);
~PCKPacker();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PCKPacker_wrapper_add_file(WasGoId wasgo_id, WasGoId p_pck_path, WasGoId p_source_path);
WasGoId _wasgo_PCKPacker_wrapper_flush(WasGoId wasgo_id, bool p_verbose);
WasGoId _wasgo_PCKPacker_wrapper_pck_start(WasGoId wasgo_id, WasGoId p_pck_name, int p_alignment);
}
#endif