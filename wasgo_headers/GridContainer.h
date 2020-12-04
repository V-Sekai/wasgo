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
public:
explicit GridContainer(WasGoId p_wasgo_id);
explicit GridContainer(Container other);
GridContainer new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_GridContainer_wrapper_get_columns(WasGoId wasgo_id);
void _wasgo_GridContainer_wrapper_set_columns(WasGoId wasgo_id, int p_columns);

    //constructor wrappers
    WasGoId _wasgo_GridContainer_constructor();
            
}
#endif