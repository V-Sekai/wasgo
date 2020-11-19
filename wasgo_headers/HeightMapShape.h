/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Shape.h"
#include "PoolRealArray.h"
class HeightMapShape : public Shape{
public: HeightMapShape();
PoolRealArray  get_map_data();
PoolRealArray  get_map_data();
int  get_map_depth();
int  get_map_depth();
int  get_map_width();
int  get_map_width();
void  set_map_data(PoolRealArray data);
void  set_map_depth(int height);
void  set_map_width(int width);
};