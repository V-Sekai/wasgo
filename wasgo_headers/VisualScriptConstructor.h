/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTCONSTRUCTOR_H
#define VISUALSCRIPTCONSTRUCTOR_H

#include <stdint.h>

#include "VisualScriptNode.h"
#include "Dictionary.h"
#include "Variant.h"
class VisualScriptConstructor : public VisualScriptNode{
public: VisualScriptConstructor();
Dictionary  get_constructor();
Dictionary  get_constructor();
enum.Variant::Type  get_constructor_type();
enum.Variant::Type  get_constructor_type();
void  set_constructor(Dictionary constructor);
void  set_constructor_type(int type);
};
#endif