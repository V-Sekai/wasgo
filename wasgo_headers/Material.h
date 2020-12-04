/* THIS FILE IS GENERATED */
#ifndef MATERIAL_H
#define MATERIAL_H

#include "wasgo\wasgo.h"

#include "Resource.h"
class Material : public Resource{
public:
Material get_next_pass();
int get_render_priority();
void set_next_pass(Material p_next_pass);
void set_render_priority(int p_priority);
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Material_wrapper_get_next_pass(WasGoID wasgo_id);
int _wasgo_Material_wrapper_get_render_priority(WasGoID wasgo_id);
void _wasgo_Material_wrapper_set_next_pass(WasGoID wasgo_id, WasGoID p_next_pass);
void _wasgo_Material_wrapper_set_render_priority(WasGoID wasgo_id, int p_priority);

    //constructor wrappers
    WasGoID _wasgo_Material_constructor();
            
}
#endif