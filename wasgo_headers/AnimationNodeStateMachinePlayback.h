/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINEPLAYBACK_H
#define ANIMATIONNODESTATEMACHINEPLAYBACK_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class AnimationNodeStateMachinePlayback : public Resource{
public: AnimationNodeStateMachinePlayback();
String get_current_node();
PoolStringArray get_travel_path();
bool is_playing();
void start(String p_node);
void stop();
void travel(String p_to_node);
};
#endif