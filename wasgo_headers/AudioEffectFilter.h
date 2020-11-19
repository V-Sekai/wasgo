/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "AudioEffect.h"
class AudioEffectFilter : public AudioEffect{
public: AudioEffectFilter();
enum FilterDB{
FILTER_6DB: 0,
FILTER_12DB: 1,
FILTER_18DB: 2,
};
float  get_cutoff();
float  get_cutoff();
enum.AudioEffectFilter::FilterDB  get_db();
enum.AudioEffectFilter::FilterDB  get_db();
float  get_gain();
float  get_gain();
float  get_resonance();
float  get_resonance();
void  set_cutoff(float freq);
void  set_db(int amount);
void  set_gain(float amount);
void  set_resonance(float amount);
};