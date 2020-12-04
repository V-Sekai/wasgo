/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H
#define AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H

#include "wasgo\wasgo.h"

#include "AudioEffectInstance.h"
#include "Vector2.h"
class AudioEffectSpectrumAnalyzerInstance : public AudioEffectInstance{
public:
enum MagnitudeMode{
MAGNITUDE_AVERAGE,
MAGNITUDE_MAX
};
Vector2 get_magnitude_for_frequency_range(float p_from_hz, float p_to_hz, AudioEffectSpectrumAnalyzerInstance::MagnitudeMode p_mode = (AudioEffectSpectrumAnalyzerInstance::MagnitudeMode) 1);
};


//Wrapper Functions
extern "C"{
void _wasgo_AudioEffectSpectrumAnalyzerInstance_wrapper_get_magnitude_for_frequency_range(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, float p_from_hz, float p_to_hz, WasGoId p_mode);

    //constructor wrappers
    WasGoId _wasgo_AudioEffectSpectrumAnalyzerInstance_constructor();
            
}
#endif