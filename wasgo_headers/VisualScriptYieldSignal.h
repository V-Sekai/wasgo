/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTYIELDSIGNAL_H
#define VISUALSCRIPTYIELDSIGNAL_H

#include <stdint.h>

#include "String.h"
#include "NodePath.h"
#include "VisualScriptNode.h"
class VisualScriptYieldSignal : public VisualScriptNode{
public: VisualScriptYieldSignal();
enum CallMode{
CALL_MODE_SELF: 0,
CALL_MODE_NODE_PATH: 1,
};
NodePath  get_base_path();
NodePath  get_base_path();
String  get_base_type();
String  get_base_type();
enum.VisualScriptYieldSignal::CallMode  get_call_mode();
enum.VisualScriptYieldSignal::CallMode  get_call_mode();
String  get_signal();
String  get_signal();
void  set_base_path(NodePath base_path);
void  set_base_type(String base_type);
void  set_call_mode(int mode);
void  set_signal(String signal);
};
#endif