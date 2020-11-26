/* THIS FILE IS GENERATED */
#ifndef PROJECTSETTINGS_H
#define PROJECTSETTINGS_H

#include <stdint.h>

#include "Dictionary.h"
#include "String.h"
#include "Erro.h"
#include "Variant.h"
#include "Object.h"
class ProjectSettings : public Object{
public: ProjectSettings();
void  add_property_info(Dictionary hint);
void  clear(String name);
int  get_order(String name);
Variant  get_setting(String name);
String  globalize_path(String path);
bool  has_setting(String name);
bool  load_resource_pack(String pack, bool replace_files = true);
String  localize_path(String path);
bool  property_can_revert(String name);
Variant  property_get_revert(String name);
enum.Error  save();
enum.Error  save();
enum.Error  save_custom(String file);
void  set_initial_value(String name, Variant value);
void  set_order(String name, int position);
void  set_setting(String name, Variant value);
};
#endif