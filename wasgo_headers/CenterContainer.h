/* THIS FILE IS GENERATED */
#ifndef CENTERCONTAINER_H
#define CENTERCONTAINER_H

#include "wasgo\wasgo.h"

#include "Container.h"
class CenterContainer : public Container{
public:
bool is_using_top_left();
void set_use_top_left(bool p_enable);

protected:
public:
explicit CenterContainer(WasGoId p_wasgo_id);
explicit CenterContainer(Container other);
CenterContainer new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CenterContainer_wrapper_is_using_top_left(WasGoId wasgo_id);
void _wasgo_CenterContainer_wrapper_set_use_top_left(WasGoId wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoId _wasgo_CenterContainer_constructor();
            
}
#endif