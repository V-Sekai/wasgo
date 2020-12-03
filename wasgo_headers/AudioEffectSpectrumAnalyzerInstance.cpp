/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectSpectrumAnalyzerInstance.h"
Vector2 AudioEffectSpectrumAnalyzerInstance::get_magnitude_for_frequency_range(float p_from_hz, float p_to_hz, AudioEffectSpectrumAnalyzerInstance::MagnitudeMode p_mode = (AudioEffectSpectrumAnalyzerInstance::MagnitudeMode) 1){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 12;
    uint8_t wasgo_ret_buffer[12];
    _wasgo_AudioEffectSpectrumAnalyzerInstance_wrapper_get_magnitude_for_frequency_range(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, p_from_hz, p_to_hz, p_mode._get_wasgo_id());
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return (Vector2) wasgo_ret;
    
}