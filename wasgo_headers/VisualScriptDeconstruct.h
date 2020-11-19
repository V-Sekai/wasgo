/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTDECONSTRUCT_H
#define VISUALSCRIPTDECONSTRUCT_H

#include <stdint.h>

#include "VisualScriptNode.h"
#include "Variant.h"
class VisualScriptDeconstruct : public VisualScriptNode{
public: VisualScriptDeconstruct();
Array  _get_elem_cache();
Array  _get_elem_cache();
void  _set_elem_cache(Array _cache);
enum.Variant::Type  get_deconstruct_type();
enum.Variant::Type  get_deconstruct_type();
void  set_deconstruct_type(int type);
};
#endif