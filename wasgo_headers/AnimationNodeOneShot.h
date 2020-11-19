/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEONESHOT_H
#define ANIMATIONNODEONESHOT_H

#include <stdint.h>

#include "AnimationNode.h"
class AnimationNodeOneShot : public AnimationNode{
public: AnimationNodeOneShot();
enum MixMode{
MIX_MODE_BLEND: 0,
};
float  get_autorestart_delay();
float  get_autorestart_delay();
float  get_autorestart_random_delay();
float  get_autorestart_random_delay();
float  get_fadein_time();
float  get_fadein_time();
float  get_fadeout_time();
float  get_fadeout_time();
enum.AnimationNodeOneShot::MixMode  get_mix_mode();
enum.AnimationNodeOneShot::MixMode  get_mix_mode();
bool  has_autorestart();
bool  has_autorestart();
bool  is_using_sync();
bool  is_using_sync();
void  set_autorestart(bool enable);
void  set_autorestart_delay(float enable);
void  set_autorestart_random_delay(float enable);
void  set_fadein_time(float time);
void  set_fadeout_time(float time);
void  set_mix_mode(int mode);
void  set_use_sync(bool enable);
};
#endif