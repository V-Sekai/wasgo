/* THIS FILE IS GENERATED */
#ifndef HEIGHTMAPSHAPE_H
#define HEIGHTMAPSHAPE_H

#include "wasgo\wasgoid.h"

#include "Shape.h"
#include "Variant.h"
class HeightMapShape : public Shape{
public:
PoolRealArray get_map_data();
int get_map_depth();
int get_map_width();
void set_map_data(PoolRealArray p_data);
void set_map_depth(int p_height);
void set_map_width(int p_width);

protected:
public:
explicit HeightMapShape(WasGoID p_wasgo_id);
explicit HeightMapShape(Shape other);
HeightMapShape();
HeightMapShape new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_HeightMapShape_wrapper_get_map_data(WasGoID wasgo_id);
int _wasgo_HeightMapShape_wrapper_get_map_depth(WasGoID wasgo_id);
int _wasgo_HeightMapShape_wrapper_get_map_width(WasGoID wasgo_id);
void _wasgo_HeightMapShape_wrapper_set_map_data(WasGoID wasgo_id, WasGoID p_data);
void _wasgo_HeightMapShape_wrapper_set_map_depth(WasGoID wasgo_id, int p_height);
void _wasgo_HeightMapShape_wrapper_set_map_width(WasGoID wasgo_id, int p_width);

    //constructor wrappers
    WasGoID _wasgo_HeightMapShape_constructor();
            
}
#endif