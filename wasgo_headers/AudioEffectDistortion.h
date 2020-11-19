/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "AudioEffect.h"
class AudioEffectDistortion : public AudioEffect{
public: AudioEffectDistortion();
enum Mode{
MODE_CLIP: 0,
MODE_ATAN: 1,
MODE_LOFI: 2,
MODE_OVERDRIVE: 3,
};
float  get_drive();
float  get_drive();
float  get_keep_hf_hz();
float  get_keep_hf_hz();
enum.AudioEffectDistortion::Mode  get_mode();
enum.AudioEffectDistortion::Mode  get_mode();
float  get_post_gain();
float  get_post_gain();
float  get_pre_gain();
float  get_pre_gain();
void  set_drive(float drive);
void  set_keep_hf_hz(float keep_hf_hz);
void  set_mode(int mode);
void  set_post_gain(float post_gain);
void  set_pre_gain(float pre_gain);
};