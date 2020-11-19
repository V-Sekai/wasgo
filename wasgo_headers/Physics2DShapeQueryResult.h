/* THIS FILE IS GENERATED */
#ifndef PHYSICS2DSHAPEQUERYRESULT_H
#define PHYSICS2DSHAPEQUERYRESULT_H

#include <stdint.h>

#include "Reference.h"
#include "Object.h"
#include "RID.h"
class Physics2DShapeQueryResult : public Reference{
public: Physics2DShapeQueryResult();
int  get_result_count();
int  get_result_count();
Object  get_result_object(int idx);
int  get_result_object_id(int idx);
int  get_result_object_shape(int idx);
RID  get_result_rid(int idx);
};
#endif