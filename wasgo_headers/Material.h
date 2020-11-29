/* THIS FILE IS GENERATED */
#ifndef MATERIAL_H
#define MATERIAL_H

#include "stdint.h"

#include "Resource.h"
class Material : public Resource{
public: Material();
Material get_next_pass();
int get_render_priority();
void set_next_pass(Material p_next_pass);
void set_render_priority(int p_priority);
};
#endif