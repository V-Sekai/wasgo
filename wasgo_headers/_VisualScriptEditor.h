/* THIS FILE IS GENERATED */
#ifndef _VISUALSCRIPTEDITOR_H
#define _VISUALSCRIPTEDITOR_H

#include <stdint.h>

#include "Script.h"
#include "String.h"
#include "Object.h"
class _VisualScriptEditor : public Object{
public: _VisualScriptEditor();
void  add_custom_node(String name, String category, Script script);
void  remove_custom_node(String name, String category);
};
#endif