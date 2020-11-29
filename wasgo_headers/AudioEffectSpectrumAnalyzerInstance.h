/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H
#define AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H

#include "stdint.h"

#include "Variant.h"
#include "AudioEffectInstance.h"
class AudioEffectSpectrumAnalyzerInstance : public AudioEffectInstance{
public: AudioEffectSpectrumAnalyzerInstance();
enum MagnitudeMode{
MAGNITUDE_AVERAGE,
MAGNITUDE_MAX
};
Vector2 get_magnitude_for_frequency_range(float p_from_hz, float p_to_hz, AudioEffectSpectrumAnalyzerInstance::MagnitudeMode p_mode = (AudioEffectSpectrumAnalyzerInstance::MagnitudeMode) 1);
};
#endif