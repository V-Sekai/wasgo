/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H
#define AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioEffectInstance.h"
#include "Variant.h"
class AudioEffectSpectrumAnalyzerInstance : public AudioEffectInstance{
enum MagnitudeMode{
MAGNITUDE_AVERAGE,
MAGNITUDE_MAX
};
Vector2 get_magnitude_for_frequency_range(float p_from_hz, float p_to_hz, AudioEffectSpectrumAnalyzerInstance::MagnitudeMode p_mode = (AudioEffectSpectrumAnalyzerInstance::MagnitudeMode) 1);
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_AudioEffectSpectrumAnalyzerInstance_wrapper_get_magnitude_for_frequency_range(WasGoId wasgo_id, float p_from_hz, float p_to_hz, WasGo::WasGoId p_mode);
}
#endif