/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "AudioEffect.h"
class AudioEffectLimiter : public AudioEffect{
public: AudioEffectLimiter();
float  get_ceiling_db();
float  get_ceiling_db();
float  get_soft_clip_db();
float  get_soft_clip_db();
float  get_soft_clip_ratio();
float  get_soft_clip_ratio();
float  get_threshold_db();
float  get_threshold_db();
void  set_ceiling_db(float ceiling);
void  set_soft_clip_db(float soft_clip);
void  set_soft_clip_ratio(float soft_clip);
void  set_threshold_db(float threshold);
};