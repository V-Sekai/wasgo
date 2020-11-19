/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "CSGPrimitive.h"
#include "PoolVector2Array.h"
#include "NodePath.h"
#include "Material.h"
class CSGPolygon : public CSGPrimitive{
public: CSGPolygon();
enum PathRotation{
PATH_ROTATION_POLYGON: 0,
PATH_ROTATION_PATH: 1,
};
enum Mode{
MODE_DEPTH: 0,
MODE_SPIN: 1,
};
bool  _has_editable_3d_polygon_no_depth();
bool  _has_editable_3d_polygon_no_depth();
bool  _is_editable_3d_polygon();
bool  _is_editable_3d_polygon();
void  _path_changed();
void  _path_changed();
void  _path_exited();
void  _path_exited();
float  get_depth();
float  get_depth();
Material  get_material();
Material  get_material();
enum.CSGPolygon::Mode  get_mode();
enum.CSGPolygon::Mode  get_mode();
float  get_path_interval();
float  get_path_interval();
NodePath  get_path_node();
NodePath  get_path_node();
enum.CSGPolygon::PathRotation  get_path_rotation();
enum.CSGPolygon::PathRotation  get_path_rotation();
PoolVector2Array  get_polygon();
PoolVector2Array  get_polygon();
bool  get_smooth_faces();
bool  get_smooth_faces();
float  get_spin_degrees();
float  get_spin_degrees();
int  get_spin_sides();
int  get_spin_sides();
bool  is_path_continuous_u();
bool  is_path_continuous_u();
bool  is_path_joined();
bool  is_path_joined();
bool  is_path_local();
bool  is_path_local();
void  set_depth(float depth);
void  set_material(Material material);
void  set_mode(int mode);
void  set_path_continuous_u(bool enable);
void  set_path_interval(float distance);
void  set_path_joined(bool enable);
void  set_path_local(bool enable);
void  set_path_node(NodePath path);
void  set_path_rotation(int mode);
void  set_polygon(PoolVector2Array polygon);
void  set_smooth_faces(bool smooth_faces);
void  set_spin_degrees(float degrees);
void  set_spin_sides(int spin_sides);
};