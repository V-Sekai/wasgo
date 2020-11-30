/* THIS FILE IS GENERATED */
#ifndef GRIDCONTAINER_H
#define GRIDCONTAINER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Container.h"
class GridContainer : public Container{
int get_columns();
void set_columns(int p_columns);

GridContainer(WasGoId p_wasgo_id);
~GridContainer();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_GridContainer_wrapper_get_columns(WasGoId wasgo_id);
void _wasgo_GridContainer_wrapper_set_columns(WasGoId wasgo_id, int p_columns);
}
#endif