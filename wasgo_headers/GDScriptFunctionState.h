/* THIS FILE IS GENERATED */
#ifndef GDSCRIPTFUNCTIONSTATE_H
#define GDSCRIPTFUNCTIONSTATE_H

#include <stdint.h>

#include "Reference.h"
#include "Variant.h"
class GDScriptFunctionState : public Reference{
public: GDScriptFunctionState();
Variant  _signal_callback();
Variant  _signal_callback();
bool  is_valid(bool extended_check = false);
Variant  resume(Variant arg = null);
};
#endif