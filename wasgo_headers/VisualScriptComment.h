/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTCOMMENT_H
#define VISUALSCRIPTCOMMENT_H

#include <stdint.h>

#include "String.h"
#include "VisualScriptNode.h"
#include "Vector2.h"
class VisualScriptComment : public VisualScriptNode{
public: VisualScriptComment();
String  get_description();
String  get_description();
Vector2  get_size();
Vector2  get_size();
String  get_title();
String  get_title();
void  set_description(String description);
void  set_size(Vector2 size);
void  set_title(String title);
};
#endif