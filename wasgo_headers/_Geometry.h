/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "PoolIntArray.h"
#include "Variant.h"
#include "Vector2.h"
#include "PoolVector3Array.h"
#include "Object.h"
#include "Vector3.h"
#include "PoolVector2Array.h"
#include "Dictionary.h"
#include "Plane.h"
class _Geometry : public Object{
public: _Geometry();
enum PolyEndType{
END_POLYGON: 0,
END_JOINED: 1,
END_BUTT: 2,
END_SQUARE: 3,
};
enum PolyBooleanOperation{
OPERATION_UNION: 0,
OPERATION_DIFFERENCE: 1,
OPERATION_INTERSECTION: 2,
};
enum PolyJoinType{
JOIN_SQUARE: 0,
JOIN_ROUND: 1,
};
Array  build_box_planes(Vector3 extents);
Array  build_capsule_planes(float radius, float height, int sides, int lats, int axis = 2);
Array  build_cylinder_planes(float radius, float height, int sides, int axis = 2);
PoolVector3Array  clip_polygon(PoolVector3Array points, Plane plane);
Array  clip_polygons_2d(PoolVector2Array polygon_a, PoolVector2Array polygon_b);
Array  clip_polyline_with_polygon_2d(PoolVector2Array polyline, PoolVector2Array polygon);
PoolVector2Array  convex_hull_2d(PoolVector2Array points);
Array  exclude_polygons_2d(PoolVector2Array polygon_a, PoolVector2Array polygon_b);
Vector3  get_closest_point_to_segment(Vector3 point, Vector3 s1, Vector3 s2);
Vector2  get_closest_point_to_segment_2d(Vector2 point, Vector2 s1, Vector2 s2);
Vector3  get_closest_point_to_segment_uncapped(Vector3 point, Vector3 s1, Vector3 s2);
Vector2  get_closest_point_to_segment_uncapped_2d(Vector2 point, Vector2 s1, Vector2 s2);
PoolVector3Array  get_closest_points_between_segments(Vector3 p1, Vector3 p2, Vector3 q1, Vector3 q2);
PoolVector2Array  get_closest_points_between_segments_2d(Vector2 p1, Vector2 q1, Vector2 p2, Vector2 q2);
int  get_uv84_normal_bit(Vector3 normal);
Array  intersect_polygons_2d(PoolVector2Array polygon_a, PoolVector2Array polygon_b);
Array  intersect_polyline_with_polygon_2d(PoolVector2Array polyline, PoolVector2Array polygon);
bool  is_point_in_circle(Vector2 point, Vector2 circle_position, float circle_radius);
bool  is_point_in_polygon(Vector2 point, PoolVector2Array polygon);
bool  is_polygon_clockwise(PoolVector2Array polygon);
Variant  line_intersects_line_2d(Vector2 from_a, Vector2 dir_a, Vector2 from_b, Vector2 dir_b);
Dictionary  make_atlas(PoolVector2Array sizes);
Array  merge_polygons_2d(PoolVector2Array polygon_a, PoolVector2Array polygon_b);
Array  offset_polygon_2d(PoolVector2Array polygon, float delta, int join_type = 0);
Array  offset_polyline_2d(PoolVector2Array polyline, float delta, int join_type = 0, int end_type = 3);
bool  point_is_inside_triangle(Vector2 point, Vector2 a, Vector2 b, Vector2 c);
Variant  ray_intersects_triangle(Vector3 from, Vector3 dir, Vector3 a, Vector3 b, Vector3 c);
float  segment_intersects_circle(Vector2 segment_from, Vector2 segment_to, Vector2 circle_position, float circle_radius);
PoolVector3Array  segment_intersects_convex(Vector3 from, Vector3 to, Array planes);
PoolVector3Array  segment_intersects_cylinder(Vector3 from, Vector3 to, float height, float radius);
Variant  segment_intersects_segment_2d(Vector2 from_a, Vector2 to_a, Vector2 from_b, Vector2 to_b);
PoolVector3Array  segment_intersects_sphere(Vector3 from, Vector3 to, Vector3 sphere_position, float sphere_radius);
Variant  segment_intersects_triangle(Vector3 from, Vector3 to, Vector3 a, Vector3 b, Vector3 c);
PoolIntArray  triangulate_delaunay_2d(PoolVector2Array points);
PoolIntArray  triangulate_polygon(PoolVector2Array polygon);
};