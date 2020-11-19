/* THIS FILE IS GENERATED */
#ifndef PCKPACKER_H
#define PCKPACKER_H

#include <stdint.h>

#include "String.h"
#include "Erro.h"
#include "Reference.h"
class PCKPacker : public Reference{
public: PCKPacker();
enum.Error  add_file(String pck_path, String source_path);
enum.Error  flush(bool verbose = false);
enum.Error  pck_start(String pck_name, int alignment = 0);
};
#endif