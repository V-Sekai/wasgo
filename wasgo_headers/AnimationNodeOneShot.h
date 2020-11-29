/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEONESHOT_H
#define ANIMATIONNODEONESHOT_H

#include "stdint.h"

#include "AnimationNode.h"
class AnimationNodeOneShot : public AnimationNode{
public: AnimationNodeOneShot();
enum MixMode{
MIX_MODE_BLEND,
MIX_MODE_ADD
};
float get_autorestart_delay();
float get_autorestart_random_delay();
float get_fadein_time();
float get_fadeout_time();
AnimationNodeOneShot::MixMode get_mix_mode();
bool has_autorestart();
bool is_using_sync();
void set_autorestart(bool p_enable);
void set_autorestart_delay(float p_enable);
void set_autorestart_random_delay(float p_enable);
void set_fadein_time(float p_time);
void set_fadeout_time(float p_time);
void set_mix_mode(AnimationNodeOneShot::MixMode p_mode);
void set_use_sync(bool p_enable);
};
#endif