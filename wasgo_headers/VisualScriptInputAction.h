/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTINPUTACTION_H
#define VISUALSCRIPTINPUTACTION_H

#include <stdint.h>

#include "String.h"
#include "VisualScriptNode.h"
class VisualScriptInputAction : public VisualScriptNode{
public: VisualScriptInputAction();
enum Mode{
MODE_PRESSED: 0,
MODE_RELEASED: 1,
MODE_JUST_PRESSED: 2,
};
enum.VisualScriptInputAction::Mode  get_action_mode();
enum.VisualScriptInputAction::Mode  get_action_mode();
String  get_action_name();
String  get_action_name();
void  set_action_mode(int mode);
void  set_action_name(String name);
};
#endif