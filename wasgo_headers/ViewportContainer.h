/* THIS FILE IS GENERATED */
#ifndef VIEWPORTCONTAINER_H
#define VIEWPORTCONTAINER_H

#include "wasgo\wasgo.h"

#include "Container.h"
class ViewportContainer : public Container{
public:
int get_stretch_shrink();
bool is_stretch_enabled();
void set_stretch(bool p_enable);
void set_stretch_shrink(int p_amount);

protected:
ViewportContainer(WasGoId p_wasgo_id);
public:
ViewportContainer();
~ViewportContainer();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ViewportContainer_wrapper_get_stretch_shrink(WasGoId wasgo_id);
int _wasgo_ViewportContainer_wrapper_is_stretch_enabled(WasGoId wasgo_id);
void _wasgo_ViewportContainer_wrapper_set_stretch(WasGoId wasgo_id, bool p_enable);
void _wasgo_ViewportContainer_wrapper_set_stretch_shrink(WasGoId wasgo_id, int p_amount);

    //constructor and destructor wrappers
    WasGoId _wasgo_ViewportContainer_constructor();
    void _wasgo_ViewportContainer_destructor(WasGoId p_wasgo_id);
            
}
#endif