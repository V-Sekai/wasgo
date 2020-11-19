/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "AudioEffect.h"
class AudioEffectChorus : public AudioEffect{
public: AudioEffectChorus();
float  get_dry();
float  get_dry();
int  get_voice_count();
int  get_voice_count();
float  get_voice_cutoff_hz(int voice_idx);
float  get_voice_delay_ms(int voice_idx);
float  get_voice_depth_ms(int voice_idx);
float  get_voice_level_db(int voice_idx);
float  get_voice_pan(int voice_idx);
float  get_voice_rate_hz(int voice_idx);
float  get_wet();
float  get_wet();
void  set_dry(float amount);
void  set_voice_count(int voices);
void  set_voice_cutoff_hz(int voice_idx, float cutoff_hz);
void  set_voice_delay_ms(int voice_idx, float delay_ms);
void  set_voice_depth_ms(int voice_idx, float depth_ms);
void  set_voice_level_db(int voice_idx, float level_db);
void  set_voice_pan(int voice_idx, float pan);
void  set_voice_rate_hz(int voice_idx, float rate_hz);
void  set_wet(float amount);
};