/* THIS FILE IS GENERATED */
#include "AudioEffectRecord.h"
AudioStreamSample::Format AudioEffectRecord::get_format(){
	return AudioStreamSample::Format::from_wasgo_id(_wasgo_AudioEffectRecord_wrapper_get_format(wasgo_id));
}
AudioStreamSample AudioEffectRecord::get_recording(){
	return AudioStreamSample::from_wasgo_id(_wasgo_AudioEffectRecord_wrapper_get_recording(wasgo_id));
}
bool AudioEffectRecord::is_recording_active(){
	return (bool) _wasgo_AudioEffectRecord_wrapper_is_recording_active(wasgo_id);
}
void AudioEffectRecord::set_format(AudioStreamSample::Format p_format){
	_wasgo_AudioEffectRecord_wrapper_set_format(wasgo_id, ((Variant) p_format).get_wasgo_id());
}
void AudioEffectRecord::set_recording_active(bool p_record){
	_wasgo_AudioEffectRecord_wrapper_set_recording_active(wasgo_id, p_record);
}