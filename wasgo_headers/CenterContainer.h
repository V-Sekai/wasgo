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
CenterContainer(WasGoId p_wasgo_id);
public:
CenterContainer();
~CenterContainer();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CenterContainer_wrapper_is_using_top_left(WasGoId wasgo_id);
void _wasgo_CenterContainer_wrapper_set_use_top_left(WasGoId wasgo_id, bool p_enable);

    //constructor and destructor wrappers
    WasGoId _wasgo_CenterContainer_constructor();
    void _wasgo_CenterContainer_destructor(WasGoId p_wasgo_id);
            
}
#endif