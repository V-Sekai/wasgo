/* THIS FILE IS GENERATED */
#ifndef RESOURCE_H
#define RESOURCE_H

#include <stdint.h>

#include "String.h"
#include "Node.h"
#include "Reference.h"
#include "RID.h"
class Resource : public Reference{
public: Resource();
void  _setup_local_to_scene();
void  _setup_local_to_scene();
Resource  duplicate(bool subresources = false);
Node  get_local_scene();
Node  get_local_scene();
String  get_name();
String  get_name();
String  get_path();
String  get_path();
RID  get_rid();
RID  get_rid();
bool  is_local_to_scene();
bool  is_local_to_scene();
void  set_local_to_scene(bool enable);
void  set_name(String name);
void  set_path(String path);
void  setup_local_to_scene();
void  setup_local_to_scene();
void  take_over_path(String path);
};
#endif