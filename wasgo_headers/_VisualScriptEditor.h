/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Object.h"
#include "Script.h"
class _VisualScriptEditor : public Object{
public: _VisualScriptEditor();
void  add_custom_node(String name, String category, Script script);
void  remove_custom_node(String name, String category);
};