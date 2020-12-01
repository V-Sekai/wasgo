/* THIS FILE IS GENERATED */
#include "AudioEffectSpectrumAnalyzerInstance.h"
Vector2 AudioEffectSpectrumAnalyzerInstance::get_magnitude_for_frequency_range(float p_from_hz, float p_to_hz, AudioEffectSpectrumAnalyzerInstance::MagnitudeMode p_mode = (AudioEffectSpectrumAnalyzerInstance::MagnitudeMode) 1){
	return Vector2::from_wasgo_id(_wasgo_AudioEffectSpectrumAnalyzerInstance_wrapper_get_magnitude_for_frequency_range(wasgo_id, p_from_hz, p_to_hz, ((Variant) p_mode).get_wasgo_id()));
}