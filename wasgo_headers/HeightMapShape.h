/* THIS FILE IS GENERATED */
#ifndef HEIGHTMAPSHAPE_H
#define HEIGHTMAPSHAPE_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Shape.h"
class HeightMapShape : public Shape{
public:
PoolRealArray get_map_data();
int get_map_depth();
int get_map_width();
void set_map_data(PoolRealArray p_data);
void set_map_depth(int p_height);
void set_map_width(int p_width);

protected:
HeightMapShape(WasGoId p_wasgo_id);
public:
HeightMapShape();
~HeightMapShape();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_HeightMapShape_wrapper_get_map_data(WasGoId wasgo_id);
int _wasgo_HeightMapShape_wrapper_get_map_depth(WasGoId wasgo_id);
int _wasgo_HeightMapShape_wrapper_get_map_width(WasGoId wasgo_id);
void _wasgo_HeightMapShape_wrapper_set_map_data(WasGoId wasgo_id, WasGoId p_data);
void _wasgo_HeightMapShape_wrapper_set_map_depth(WasGoId wasgo_id, int p_height);
void _wasgo_HeightMapShape_wrapper_set_map_width(WasGoId wasgo_id, int p_width);

    //constructor and destructor wrappers
    WasGoId _wasgo_HeightMapShape_constructor();
    void _wasgo_HeightMapShape_destructor(WasGoId p_wasgo_id);
            
}
#endif