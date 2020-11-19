/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "GeometryInstance.h"
#include "Variant.h"
class CSGShape : public GeometryInstance{
public: CSGShape();
enum Operation{
OPERATION_UNION: 0,
OPERATION_INTERSECTION: 1,
};
void  _update_shape();
void  _update_shape();
int  get_collision_layer();
int  get_collision_layer();
bool  get_collision_layer_bit(int bit);
int  get_collision_mask();
int  get_collision_mask();
bool  get_collision_mask_bit(int bit);
Array  get_meshes();
Array  get_meshes();
enum.CSGShape::Operation  get_operation();
enum.CSGShape::Operation  get_operation();
float  get_snap();
float  get_snap();
bool  is_calculating_tangents();
bool  is_calculating_tangents();
bool  is_root_shape();
bool  is_root_shape();
bool  is_using_collision();
bool  is_using_collision();
void  set_calculate_tangents(bool enabled);
void  set_collision_layer(int layer);
void  set_collision_layer_bit(int bit, bool value);
void  set_collision_mask(int mask);
void  set_collision_mask_bit(int bit, bool value);
void  set_operation(int operation);
void  set_snap(float snap);
void  set_use_collision(bool operation);
};