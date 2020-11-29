/* THIS FILE IS GENERATED */
#ifndef PCKPACKER_H
#define PCKPACKER_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Error.h"
class PCKPacker : public Reference{
public: PCKPacker();
Error add_file(String p_pck_path, String p_source_path);
Error flush(bool p_verbose = (bool) False);
Error pck_start(String p_pck_name, int p_alignment = (int) 0);
};
#endif