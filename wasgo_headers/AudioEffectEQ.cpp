/* THIS FILE IS GENERATED */
#include "AudioEffectEQ.h"
int AudioEffectEQ::get_band_count(){
	return (int) _wasgo_AudioEffectEQ_wrapper_get_band_count(wasgo_id));
}
float AudioEffectEQ::get_band_gain_db(int p_band_idx){
	return (float) _wasgo_AudioEffectEQ_wrapper_get_band_gain_db(wasgo_id, band_idx));
}
void AudioEffectEQ::set_band_gain_db(int p_band_idx, float p_volume_db){
	_wasgo_AudioEffectEQ_wrapper_set_band_gain_db(wasgo_id, band_idx, volume_db);
}

AudioEffectEQ::AudioEffectEQ(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioEffectEQ::~AudioEffectEQ(){
}