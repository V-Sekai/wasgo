/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H
#define AUDIOEFFECTSPECTRUMANALYZERINSTANCE_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "AudioEffectInstance.h"
class AudioEffectSpectrumAnalyzerInstance : public AudioEffectInstance{
public:
enum MagnitudeMode{
MAGNITUDE_AVERAGE,
MAGNITUDE_MAX
};
Vector2 get_magnitude_for_frequency_range(float p_from_hz, float p_to_hz, AudioEffectSpectrumAnalyzerInstance::MagnitudeMode p_mode = (AudioEffectSpectrumAnalyzerInstance::MagnitudeMode) 1);

protected:
public:
explicit AudioEffectSpectrumAnalyzerInstance(WasGoID p_wasgo_id);
explicit AudioEffectSpectrumAnalyzerInstance(AudioEffectInstance other);
AudioEffectSpectrumAnalyzerInstance();
AudioEffectSpectrumAnalyzerInstance new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AudioEffectSpectrumAnalyzerInstance_wrapper_get_magnitude_for_frequency_range(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, float p_from_hz, float p_to_hz, WasGoID p_mode);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectSpectrumAnalyzerInstance_constructor();
            
}
#endif