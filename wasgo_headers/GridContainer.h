/* THIS FILE IS GENERATED */
#ifndef GRIDCONTAINER_H
#define GRIDCONTAINER_H

#include "wasgo\wasgo.h"

#include "Container.h"
class GridContainer : public Container{
public:
int get_columns();
void set_columns(int p_columns);

protected:
GridContainer(WasGoId p_wasgo_id);
public:
GridContainer();
~GridContainer();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_GridContainer_wrapper_get_columns(WasGoId wasgo_id);
void _wasgo_GridContainer_wrapper_set_columns(WasGoId wasgo_id, int p_columns);

    //constructor and destructor wrappers
    WasGoId _wasgo_GridContainer_constructor();
    void _wasgo_GridContainer_destructor(WasGoId p_wasgo_id);
            
}
#endif