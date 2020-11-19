/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Object.h"
#include "Variant.h"
#include "Reference.h"
class VisualScriptFunctionState : public Reference{
public: VisualScriptFunctionState();
Variant  _signal_callback();
Variant  _signal_callback();
void  connect_to_signal(Object obj, String signals, Array args);
bool  is_valid();
bool  is_valid();
Variant  resume(Array args = null);
};