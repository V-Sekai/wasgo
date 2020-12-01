/* THIS FILE IS GENERATED */
#ifndef ARVRPOSITIONALTRACKER_H
#define ARVRPOSITIONALTRACKER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Transform.h"
#include "ARVRServer.h"
#include "Vector3.h"
#include "Basis.h"
#include "Object.h"
#include "ustring.h"
#include "Mesh.h"
class ARVRPositionalTracker : public Object{
public:
enum TrackerHand{
TRACKER_HAND_UNKNOWN,
TRACKER_LEFT_HAND,
TRACKER_RIGHT_HAND
};
ARVRPositionalTracker::TrackerHand get_hand();
int get_joy_id();
Mesh get_mesh();
String get_name();
Basis get_orientation();
Vector3 get_position();
int get_tracker_id();
bool get_tracks_orientation();
bool get_tracks_position();
Transform get_transform(bool p_adjust_by_reference_frame);
ARVRServer::TrackerType get_type();

ARVRPositionalTracker(WasGoId p_wasgo_id);
~ARVRPositionalTracker();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ARVRPositionalTracker_wrapper_get_hand(WasGoId wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_joy_id(WasGoId wasgo_id);
WasGoId _wasgo_ARVRPositionalTracker_wrapper_get_mesh(WasGoId wasgo_id);
WasGoId _wasgo_ARVRPositionalTracker_wrapper_get_name(WasGoId wasgo_id);
WasGoId _wasgo_ARVRPositionalTracker_wrapper_get_orientation(WasGoId wasgo_id);
WasGoId _wasgo_ARVRPositionalTracker_wrapper_get_position(WasGoId wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_tracker_id(WasGoId wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_tracks_orientation(WasGoId wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_tracks_position(WasGoId wasgo_id);
WasGoId _wasgo_ARVRPositionalTracker_wrapper_get_transform(WasGoId wasgo_id, bool p_adjust_by_reference_frame);
WasGoId _wasgo_ARVRPositionalTracker_wrapper_get_type(WasGoId wasgo_id);
}
#endif