/* THIS FILE IS GENERATED */
#ifndef PHYSICSSHAPEQUERYRESULT_H
#define PHYSICSSHAPEQUERYRESULT_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Object.h"
#include "RID.h"
class PhysicsShapeQueryResult : public Reference{
public:
int get_result_count();
Object get_result_object(int p_idx);
int get_result_object_id(int p_idx);
int get_result_object_shape(int p_idx);
RID get_result_rid(int p_idx);
};


//Wrapper Functions
extern "C"{
int _wasgo_PhysicsShapeQueryResult_wrapper_get_result_count(WasGoID wasgo_id);
WasGoID _wasgo_PhysicsShapeQueryResult_wrapper_get_result_object(WasGoID wasgo_id, int p_idx);
int _wasgo_PhysicsShapeQueryResult_wrapper_get_result_object_id(WasGoID wasgo_id, int p_idx);
int _wasgo_PhysicsShapeQueryResult_wrapper_get_result_object_shape(WasGoID wasgo_id, int p_idx);
void _wasgo_PhysicsShapeQueryResult_wrapper_get_result_rid(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_idx);

    //constructor wrappers
    WasGoID _wasgo_PhysicsShapeQueryResult_constructor();
            
}
#endif