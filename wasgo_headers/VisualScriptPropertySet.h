/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTPROPERTYSET_H
#define VISUALSCRIPTPROPERTYSET_H

#include <stdint.h>

#include "String.h"
#include "NodePath.h"
#include "Dictionary.h"
#include "VisualScriptNode.h"
#include "Variant.h"
class VisualScriptPropertySet : public VisualScriptNode{
public: VisualScriptPropertySet();
enum AssignOp{
ASSIGN_OP_NONE: 0,
ASSIGN_OP_ADD: 1,
ASSIGN_OP_SUB: 2,
ASSIGN_OP_MUL: 3,
ASSIGN_OP_DIV: 4,
ASSIGN_OP_MOD: 5,
ASSIGN_OP_SHIFT_LEFT: 6,
ASSIGN_OP_SHIFT_RIGHT: 7,
ASSIGN_OP_BIT_AND: 8,
ASSIGN_OP_BIT_OR: 9,
};
enum CallMode{
CALL_MODE_SELF: 0,
CALL_MODE_NODE_PATH: 1,
CALL_MODE_INSTANCE: 2,
};
Dictionary  _get_type_cache();
Dictionary  _get_type_cache();
void  _set_type_cache(Dictionary type_cache);
enum.VisualScriptPropertySet::AssignOp  get_assign_op();
enum.VisualScriptPropertySet::AssignOp  get_assign_op();
NodePath  get_base_path();
NodePath  get_base_path();
String  get_base_script();
String  get_base_script();
String  get_base_type();
String  get_base_type();
enum.Variant::Type  get_basic_type();
enum.Variant::Type  get_basic_type();
enum.VisualScriptPropertySet::CallMode  get_call_mode();
enum.VisualScriptPropertySet::CallMode  get_call_mode();
String  get_index();
String  get_index();
String  get_property();
String  get_property();
void  set_assign_op(int assign_op);
void  set_base_path(NodePath base_path);
void  set_base_script(String base_script);
void  set_base_type(String base_type);
void  set_basic_type(int basic_type);
void  set_call_mode(int mode);
void  set_index(String index);
void  set_property(String property);
};
#endif