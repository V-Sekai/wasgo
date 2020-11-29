/* THIS FILE IS GENERATED */
#ifndef PHYSICSSHAPEQUERYRESULT_H
#define PHYSICSSHAPEQUERYRESULT_H

#include "stdint.h"

#include "Reference.h"
#include "Object.h"
#include "Variant.h"
class PhysicsShapeQueryResult : public Reference{
public: PhysicsShapeQueryResult();
int get_result_count();
Object get_result_object(int p_idx);
int get_result_object_id(int p_idx);
int get_result_object_shape(int p_idx);
RID get_result_rid(int p_idx);
};
#endif