/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "VisualScript.h"
#include "Resource.h"
#include "Variant.h"
class VisualScriptNode : public Resource{
public: VisualScriptNode();
Array  _get_default_input_values();
Array  _get_default_input_values();
void  _set_default_input_values(Array values);
Variant  get_default_input_value(int port_idx);
VisualScript  get_visual_script();
VisualScript  get_visual_script();
void  ports_changed_notify();
void  ports_changed_notify();
void  set_default_input_value(int port_idx, Variant value);
};