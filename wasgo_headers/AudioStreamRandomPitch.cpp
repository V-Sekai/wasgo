/* THIS FILE IS GENERATED */
#include "AudioStreamRandomPitch.h"
AudioStream AudioStreamRandomPitch::get_audio_stream(){
	return AudioStream::from_wasgo_id(_wasgo_AudioStreamRandomPitch_wrapper_get_audio_stream(wasgo_id));
}
float AudioStreamRandomPitch::get_random_pitch(){
	return (float) _wasgo_AudioStreamRandomPitch_wrapper_get_random_pitch(wasgo_id);
}
void AudioStreamRandomPitch::set_audio_stream(AudioStream p_stream){
	_wasgo_AudioStreamRandomPitch_wrapper_set_audio_stream(wasgo_id, ((Variant) p_stream).get_wasgo_id());
}
void AudioStreamRandomPitch::set_random_pitch(float p_scale){
	_wasgo_AudioStreamRandomPitch_wrapper_set_random_pitch(wasgo_id, p_scale);
}