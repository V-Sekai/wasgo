/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "RID.h"
#include "Object.h"
#include "Reference.h"
class Physics2DShapeQueryResult : public Reference{
public: Physics2DShapeQueryResult();
int  get_result_count();
int  get_result_count();
Object  get_result_object(int idx);
int  get_result_object_id(int idx);
int  get_result_object_shape(int idx);
RID  get_result_rid(int idx);
};