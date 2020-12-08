/* THIS FILE IS GENERATED */
#ifndef VIEWPORTCONTAINER_H
#define VIEWPORTCONTAINER_H

#include "wasgo\wasgoid.h"

#include "Container.h"
class ViewportContainer : public Container{
public:
int get_stretch_shrink();
bool is_stretch_enabled();
void set_stretch(bool p_enable);
void set_stretch_shrink(int p_amount);

protected:
public:
explicit ViewportContainer(WasGoID p_wasgo_id);
explicit ViewportContainer(Container other);
ViewportContainer();
ViewportContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ViewportContainer_wrapper_get_stretch_shrink(WasGoID wasgo_id);
int _wasgo_ViewportContainer_wrapper_is_stretch_enabled(WasGoID wasgo_id);
void _wasgo_ViewportContainer_wrapper_set_stretch(WasGoID wasgo_id, bool p_enable);
void _wasgo_ViewportContainer_wrapper_set_stretch_shrink(WasGoID wasgo_id, int p_amount);

    //constructor wrappers
    WasGoID _wasgo_ViewportContainer_constructor();
            
}
#endif