/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Reference.h"
#include "Control.h"
#include "Object.h"
#include "PoolStringArray.h"
class EditorInspectorPlugin : public Reference{
public: EditorInspectorPlugin();
void  add_custom_control(Control control);
void  add_property_editor(String property, Control editor);
void  add_property_editor_for_multiple_properties(String label, PoolStringArray properties, Control editor);
bool  can_handle(Object object);
void  parse_begin(Object object);
void  parse_category(Object object, String category);
void  parse_end();
void  parse_end();
bool  parse_property(Object object, int type, String path, int hint, String hint_text, int usage);
};