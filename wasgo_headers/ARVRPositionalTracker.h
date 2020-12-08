/* THIS FILE IS GENERATED */
#ifndef ARVRPOSITIONALTRACKER_H
#define ARVRPOSITIONALTRACKER_H

#include "wasgo\wasgoid.h"

#include "Vector3.h"
#include "Mesh.h"
#include "Object.h"
#include "Transform.h"
#include "ARVRServer.h"
#include "Ustring.h"
#include "Basis.h"
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
float get_rumble();
int get_tracker_id();
bool get_tracks_orientation();
bool get_tracks_position();
Transform get_transform(bool p_adjust_by_reference_frame);
ARVRServer::TrackerType get_type();
void set_rumble(float p_rumble);

protected:
public:
explicit ARVRPositionalTracker(WasGoID p_wasgo_id);
explicit ARVRPositionalTracker(Object other);
ARVRPositionalTracker();
ARVRPositionalTracker new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_ARVRPositionalTracker_wrapper_get_hand(WasGoID wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_joy_id(WasGoID wasgo_id);
WasGoID _wasgo_ARVRPositionalTracker_wrapper_get_mesh(WasGoID wasgo_id);
void _wasgo_ARVRPositionalTracker_wrapper_get_name(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ARVRPositionalTracker_wrapper_get_orientation(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ARVRPositionalTracker_wrapper_get_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ARVRPositionalTracker_wrapper_get_rumble(WasGoID wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_tracker_id(WasGoID wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_tracks_orientation(WasGoID wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_tracks_position(WasGoID wasgo_id);
void _wasgo_ARVRPositionalTracker_wrapper_get_transform(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, bool p_adjust_by_reference_frame);
WasGoID _wasgo_ARVRPositionalTracker_wrapper_get_type(WasGoID wasgo_id);
void _wasgo_ARVRPositionalTracker_wrapper_set_rumble(WasGoID wasgo_id, float p_rumble);

    //constructor wrappers
    WasGoID _wasgo_ARVRPositionalTracker_constructor();
            
}
#endif