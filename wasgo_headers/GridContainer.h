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
explicit GridContainer(WasGoID p_wasgo_id);
explicit GridContainer(Container other);
GridContainer new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_GridContainer_wrapper_get_columns(WasGoID wasgo_id);
void _wasgo_GridContainer_wrapper_set_columns(WasGoID wasgo_id, int p_columns);

    //constructor wrappers
    WasGoID _wasgo_GridContainer_constructor();
            
}
#endif