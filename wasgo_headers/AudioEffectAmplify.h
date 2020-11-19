/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTAMPLIFY_H
#define AUDIOEFFECTAMPLIFY_H

#include <stdint.h>

#include "AudioEffect.h"
class AudioEffectAmplify : public AudioEffect{
public: AudioEffectAmplify();
float  get_volume_db();
float  get_volume_db();
void  set_volume_db(float volume);
};
#endif