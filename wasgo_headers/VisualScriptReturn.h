/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTRETURN_H
#define VISUALSCRIPTRETURN_H

#include <stdint.h>

#include "VisualScriptNode.h"
#include "Variant.h"
class VisualScriptReturn : public VisualScriptNode{
public: VisualScriptReturn();
enum.Variant::Type  get_return_type();
enum.Variant::Type  get_return_type();
bool  is_return_value_enabled();
bool  is_return_value_enabled();
void  set_enable_return_value(bool enable);
void  set_return_type(int type);
};
#endif