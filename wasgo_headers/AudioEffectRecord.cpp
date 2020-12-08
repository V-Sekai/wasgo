/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioEffectRecord.h"
AudioStreamSample::Format AudioEffectRecord::get_format(){
	return AudioStreamSample::Format(_wasgo_AudioEffectRecord_wrapper_get_format(wasgo_id));
}
AudioStreamSample AudioEffectRecord::get_recording(){
	return AudioStreamSample(_wasgo_AudioEffectRecord_wrapper_get_recording(wasgo_id));
}
bool AudioEffectRecord::is_recording_active(){
	return (bool) _wasgo_AudioEffectRecord_wrapper_is_recording_active(wasgo_id);
}
void AudioEffectRecord::set_format(AudioStreamSample::Format p_format){
	_wasgo_AudioEffectRecord_wrapper_set_format(wasgo_id, p_format._get_wasgo_id());
}
void AudioEffectRecord::set_recording_active(bool p_record){
	_wasgo_AudioEffectRecord_wrapper_set_recording_active(wasgo_id, p_record);
}

AudioEffectRecord::AudioEffectRecord(WasGoID p_wasgo_id) : AudioEffect(p_wasgo_id){
}
AudioEffectRecord::AudioEffectRecord(AudioEffect other) : AudioEffect(other._get_wasgo_id()){
}
AudioEffectRecord::AudioEffectRecord():AudioEffect(){
}
AudioEffectRecord AudioEffectRecord::new_instance(){
    return AudioEffectRecord(_wasgo_AudioEffectRecord_constructor());
}
WasGoID AudioEffectRecord::_get_wasgo_id(){
    return wasgo_id;
}
AudioEffectRecord::operator bool(){
    return (bool) wasgo_id;
}
