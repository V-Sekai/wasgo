/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTFUNCTIONSTATE_H
#define VISUALSCRIPTFUNCTIONSTATE_H

#include <stdint.h>

#include "Reference.h"
#include "String.h"
#include "Object.h"
#include "Variant.h"
class VisualScriptFunctionState : public Reference{
public: VisualScriptFunctionState();
Variant  _signal_callback();
Variant  _signal_callback();
void  connect_to_signal(Object obj, String signals, Array args);
bool  is_valid();
bool  is_valid();
Variant  resume(Array args = null);
};
#endif