/* THIS FILE IS GENERATED */
#ifndef ANIMATIONNODEONESHOT_H
#define ANIMATIONNODEONESHOT_H

#include "wasgo\wasgo.h"

#include "AnimationNode.h"
class AnimationNodeOneShot : public AnimationNode{
public:
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

protected:
public:
explicit AnimationNodeOneShot(WasGoID p_wasgo_id);
explicit AnimationNodeOneShot(AnimationNode other);
AnimationNodeOneShot new_instance();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_AnimationNodeOneShot_wrapper_get_autorestart_delay(WasGoID wasgo_id);
float _wasgo_AnimationNodeOneShot_wrapper_get_autorestart_random_delay(WasGoID wasgo_id);
float _wasgo_AnimationNodeOneShot_wrapper_get_fadein_time(WasGoID wasgo_id);
float _wasgo_AnimationNodeOneShot_wrapper_get_fadeout_time(WasGoID wasgo_id);
WasGoID _wasgo_AnimationNodeOneShot_wrapper_get_mix_mode(WasGoID wasgo_id);
int _wasgo_AnimationNodeOneShot_wrapper_has_autorestart(WasGoID wasgo_id);
int _wasgo_AnimationNodeOneShot_wrapper_is_using_sync(WasGoID wasgo_id);
void _wasgo_AnimationNodeOneShot_wrapper_set_autorestart(WasGoID wasgo_id, bool p_enable);
void _wasgo_AnimationNodeOneShot_wrapper_set_autorestart_delay(WasGoID wasgo_id, float p_enable);
void _wasgo_AnimationNodeOneShot_wrapper_set_autorestart_random_delay(WasGoID wasgo_id, float p_enable);
void _wasgo_AnimationNodeOneShot_wrapper_set_fadein_time(WasGoID wasgo_id, float p_time);
void _wasgo_AnimationNodeOneShot_wrapper_set_fadeout_time(WasGoID wasgo_id, float p_time);
void _wasgo_AnimationNodeOneShot_wrapper_set_mix_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_AnimationNodeOneShot_wrapper_set_use_sync(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_AnimationNodeOneShot_constructor();
            
}
#endif