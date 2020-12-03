/* THIS FILE IS GENERATED */
#ifndef VISUALINSTANCE_H
#define VISUALINSTANCE_H

#include "wasgo\wasgo.h"

#include "AABB.h"
#include "RID.h"
#include "Spatial.h"
class VisualInstance : public Spatial{
public:
AABB get_aabb();
RID get_base();
RID get_instance();
int get_layer_mask();
bool get_layer_mask_bit(int p_layer);
AABB get_transformed_aabb();
void set_base(RID p_base);
void set_layer_mask(int p_mask);
void set_layer_mask_bit(int p_layer, bool p_enabled);
};


//Wrapper Functions
extern "C"{
void _wasgo_VisualInstance_wrapper_get_aabb(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualInstance_wrapper_get_base(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualInstance_wrapper_get_instance(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_VisualInstance_wrapper_get_layer_mask(WasGoId wasgo_id);
int _wasgo_VisualInstance_wrapper_get_layer_mask_bit(WasGoId wasgo_id, int p_layer);
void _wasgo_VisualInstance_wrapper_get_transformed_aabb(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_VisualInstance_wrapper_set_base(WasGoId wasgo_id, const uint8_t * p_base, int p_base_wasgo_buffer_size);
void _wasgo_VisualInstance_wrapper_set_layer_mask(WasGoId wasgo_id, int p_mask);
void _wasgo_VisualInstance_wrapper_set_layer_mask_bit(WasGoId wasgo_id, int p_layer, bool p_enabled);

    //constructor and destructor wrappers
    WasGoId _wasgo_VisualInstance_constructor();
    void _wasgo_VisualInstance_destructor(WasGoId p_wasgo_id);
            
}
#endif