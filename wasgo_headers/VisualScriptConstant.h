/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTCONSTANT_H
#define VISUALSCRIPTCONSTANT_H

#include <stdint.h>

#include "VisualScriptNode.h"
#include "Variant.h"
class VisualScriptConstant : public VisualScriptNode{
public: VisualScriptConstant();
enum.Variant::Type  get_constant_type();
enum.Variant::Type  get_constant_type();
Variant  get_constant_value();
Variant  get_constant_value();
void  set_constant_type(int type);
void  set_constant_value(Variant value);
};
#endif