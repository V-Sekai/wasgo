/* THIS FILE IS GENERATED */
#ifndef PHYSICSSHAPEQUERYRESULT_H
#define PHYSICSSHAPEQUERYRESULT_H

#include <stdint.h>

#include "RID.h"
#include "Reference.h"
#include "Object.h"
class PhysicsShapeQueryResult : public Reference{
public: PhysicsShapeQueryResult();
int  get_result_count();
int  get_result_count();
Object  get_result_object(int idx);
int  get_result_object_id(int idx);
int  get_result_object_shape(int idx);
RID  get_result_rid(int idx);
};
#endif