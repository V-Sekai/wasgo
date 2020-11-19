/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Transform.h"
#include "String.h"
#include "ARVRServer.h"
#include "Object.h"
#include "Basis.h"
#include "Vector3.h"
#include "Mesh.h"
class ARVRPositionalTracker : public Object{
public: ARVRPositionalTracker();
enum TrackerHand{
TRACKER_HAND_UNKNOWN: 0,
TRACKER_LEFT_HAND: 1,
};
void  _set_joy_id(int joy_id);
void  _set_mesh(Mesh mesh);
void  _set_name(String name);
void  _set_orientation(Basis orientation);
void  _set_rw_position(Vector3 rw_position);
void  _set_type(int type);
enum.ARVRPositionalTracker::TrackerHand  get_hand();
enum.ARVRPositionalTracker::TrackerHand  get_hand();
int  get_joy_id();
int  get_joy_id();
Mesh  get_mesh();
Mesh  get_mesh();
String  get_name();
String  get_name();
Basis  get_orientation();
Basis  get_orientation();
Vector3  get_position();
Vector3  get_position();
float  get_rumble();
float  get_rumble();
bool  get_tracks_orientation();
bool  get_tracks_orientation();
bool  get_tracks_position();
bool  get_tracks_position();
Transform  get_transform(bool adjust_by_reference_frame);
enum.ARVRServer::TrackerType  get_type();
enum.ARVRServer::TrackerType  get_type();
void  set_rumble(float rumble);
};