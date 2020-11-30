/* THIS FILE IS GENERATED */
#ifndef PCKPACKER_H
#define PCKPACKER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
#include "Error.h"
class PCKPacker : public Reference{
Error add_file(String p_pck_path, String p_source_path);
Error flush(bool p_verbose = (bool) False);
Error pck_start(String p_pck_name, int p_alignment = (int) 0);

PCKPacker(WasGoId p_wasgo_id);
~PCKPacker();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_PCKPacker_wrapper_add_file(WasGoId wasgo_id, WasGo::WasGoId p_pck_path, WasGo::WasGoId p_source_path);
WasGo::WasGoId _wasgo_PCKPacker_wrapper_flush(WasGoId wasgo_id, bool p_verbose);
WasGo::WasGoId _wasgo_PCKPacker_wrapper_pck_start(WasGoId wasgo_id, WasGo::WasGoId p_pck_name, int p_alignment);
}
#endif