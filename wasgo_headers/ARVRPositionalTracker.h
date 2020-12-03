/* THIS FILE IS GENERATED */
#ifndef ARVRPOSITIONALTRACKER_H
#define ARVRPOSITIONALTRACKER_H

#include "wasgo\wasgo.h"

#include "Vector3.h"
#include "Mesh.h"
#include "ustring.h"
#include "Object.h"
#include "Transform.h"
#include "Basis.h"
#include "ARVRServer.h"
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
ARVRPositionalTracker(WasGoId p_wasgo_id);
public:
ARVRPositionalTracker();
~ARVRPositionalTracker();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_ARVRPositionalTracker_wrapper_get_hand(WasGoId wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_joy_id(WasGoId wasgo_id);
WasGoId _wasgo_ARVRPositionalTracker_wrapper_get_mesh(WasGoId wasgo_id);
void _wasgo_ARVRPositionalTracker_wrapper_get_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ARVRPositionalTracker_wrapper_get_orientation(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_ARVRPositionalTracker_wrapper_get_position(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_ARVRPositionalTracker_wrapper_get_rumble(WasGoId wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_tracker_id(WasGoId wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_tracks_orientation(WasGoId wasgo_id);
int _wasgo_ARVRPositionalTracker_wrapper_get_tracks_position(WasGoId wasgo_id);
void _wasgo_ARVRPositionalTracker_wrapper_get_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, bool p_adjust_by_reference_frame);
WasGoId _wasgo_ARVRPositionalTracker_wrapper_get_type(WasGoId wasgo_id);
void _wasgo_ARVRPositionalTracker_wrapper_set_rumble(WasGoId wasgo_id, float p_rumble);

    //constructor and destructor wrappers
    WasGoId _wasgo_ARVRPositionalTracker_constructor();
    void _wasgo_ARVRPositionalTracker_destructor(WasGoId p_wasgo_id);
            
}
#endif