/* THIS FILE IS GENERATED */
#ifndef VISUALINSTANCE_H
#define VISUALINSTANCE_H

#include <stdint.h>

#include "Spatial.h"
#include "RID.h"
#include "AABB.h"
class VisualInstance : public Spatial{
public: VisualInstance();
RID  _get_visual_instance_rid();
RID  _get_visual_instance_rid();
AABB  get_aabb();
AABB  get_aabb();
RID  get_base();
RID  get_base();
RID  get_instance();
RID  get_instance();
int  get_layer_mask();
int  get_layer_mask();
bool  get_layer_mask_bit(int layer);
AABB  get_transformed_aabb();
AABB  get_transformed_aabb();
void  set_base(RID base);
void  set_layer_mask(int mask);
void  set_layer_mask_bit(int layer, bool enabled);
};
#endif