/* THIS FILE IS GENERATED */
#ifndef HEIGHTMAPSHAPE_H
#define HEIGHTMAPSHAPE_H

#include "stdint.h"

#include "Variant.h"
#include "Shape.h"
class HeightMapShape : public Shape{
public: HeightMapShape();
PoolRealArray get_map_data();
int get_map_depth();
int get_map_width();
void set_map_data(PoolRealArray p_data);
void set_map_depth(int p_height);
void set_map_width(int p_width);
};
#endif