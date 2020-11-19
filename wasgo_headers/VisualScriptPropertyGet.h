/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTPROPERTYGET_H
#define VISUALSCRIPTPROPERTYGET_H

#include <stdint.h>

#include "String.h"
#include "NodePath.h"
#include "VisualScriptNode.h"
#include "Variant.h"
class VisualScriptPropertyGet : public VisualScriptNode{
public: VisualScriptPropertyGet();
enum CallMode{
CALL_MODE_SELF: 0,
CALL_MODE_NODE_PATH: 1,
};
enum.Variant::Type  _get_type_cache();
enum.Variant::Type  _get_type_cache();
void  _set_type_cache(int type_cache);
NodePath  get_base_path();
NodePath  get_base_path();
String  get_base_script();
String  get_base_script();
String  get_base_type();
String  get_base_type();
enum.Variant::Type  get_basic_type();
enum.Variant::Type  get_basic_type();
enum.VisualScriptPropertyGet::CallMode  get_call_mode();
enum.VisualScriptPropertyGet::CallMode  get_call_mode();
String  get_index();
String  get_index();
String  get_property();
String  get_property();
void  set_base_path(NodePath base_path);
void  set_base_script(String base_script);
void  set_base_type(String base_type);
void  set_basic_type(int basic_type);
void  set_call_mode(int mode);
void  set_index(String index);
void  set_property(String property);
};
#endif