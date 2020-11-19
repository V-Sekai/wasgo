/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Object.h"
#include "Variant.h"
#include "Vector3.h"
#include "Dictionary.h"
#include "PhysicsShapeQueryParameters.h"
class PhysicsDirectSpaceState : public Object{
public: PhysicsDirectSpaceState();
Array  cast_motion(PhysicsShapeQueryParameters shape, Vector3 motion);
Array  collide_shape(PhysicsShapeQueryParameters shape, int max_results = 32);
Dictionary  get_rest_info(PhysicsShapeQueryParameters shape);
Dictionary  intersect_ray(Vector3 from, Vector3 to, Array exclude = [], int collision_mask = 2147483647, bool collide_with_bodies = true, bool collide_with_areas = false);
Array  intersect_shape(PhysicsShapeQueryParameters shape, int max_results = 32);
};