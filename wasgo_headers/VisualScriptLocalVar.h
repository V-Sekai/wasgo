/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTLOCALVAR_H
#define VISUALSCRIPTLOCALVAR_H

#include <stdint.h>

#include "String.h"
#include "VisualScriptNode.h"
#include "Variant.h"
class VisualScriptLocalVar : public VisualScriptNode{
public: VisualScriptLocalVar();
String  get_var_name();
String  get_var_name();
enum.Variant::Type  get_var_type();
enum.Variant::Type  get_var_type();
void  set_var_name(String name);
void  set_var_type(int type);
};
#endif