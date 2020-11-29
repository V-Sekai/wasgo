/* THIS FILE IS GENERATED */
#ifndef ARVRPOSITIONALTRACKER_H
#define ARVRPOSITIONALTRACKER_H

#include "stdint.h"

#include "Variant.h"
#include "ARVRServer.h"
#include "Mesh.h"
#include "Object.h"
class ARVRPositionalTracker : public Object{
public: ARVRPositionalTracker();
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
};
#endif