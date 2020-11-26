/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODESTATEMACHINEPLAYBACK_H
#define ANIMATIONNODESTATEMACHINEPLAYBACK_H

#include <stdint.h>

#include "PoolStringArray.h"
#include "String.h"
#include "Resource.h"
class AnimationNodeStateMachinePlayback : public Resource{
public: AnimationNodeStateMachinePlayback();
String  get_current_node();
String  get_current_node();
PoolStringArray  get_travel_path();
PoolStringArray  get_travel_path();
bool  is_playing();
bool  is_playing();
void  start(String node);
void  stop();
void  stop();
void  travel(String to_node);
};
#endif