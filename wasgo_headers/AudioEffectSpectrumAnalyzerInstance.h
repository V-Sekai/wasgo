/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H
#define AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Vector2.h"
#include "AudioEffectInstance.h"
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
WasGoId _wasgo_AudioEffectSpectrumAnalyzerInstance_wrapper_get_magnitude_for_frequency_range(WasGoId wasgo_id, float p_from_hz, float p_to_hz, WasGoId p_mode);
}
#endif