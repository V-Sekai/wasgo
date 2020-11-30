/* THIS FILE IS GENERATED */
#include "AudioStreamGeneratorPlayback.h"
bool AudioStreamGeneratorPlayback::can_push_buffer(int p_amount){
	return (bool) _wasgo_AudioStreamGeneratorPlayback_wrapper_can_push_buffer(wasgo_id, amount));
}
void AudioStreamGeneratorPlayback::clear_buffer(){
	_wasgo_AudioStreamGeneratorPlayback_wrapper_clear_buffer(wasgo_id);
}
int AudioStreamGeneratorPlayback::get_frames_available(){
	return (int) _wasgo_AudioStreamGeneratorPlayback_wrapper_get_frames_available(wasgo_id));
}
int AudioStreamGeneratorPlayback::get_skips(){
	return (int) _wasgo_AudioStreamGeneratorPlayback_wrapper_get_skips(wasgo_id));
}
bool AudioStreamGeneratorPlayback::push_buffer(PoolVector2Array p_frames){
	return (bool) _wasgo_AudioStreamGeneratorPlayback_wrapper_push_buffer(wasgo_id, ((Variant) frames).get_wasgo_id()));
}
bool AudioStreamGeneratorPlayback::push_frame(Vector2 p_frame){
	return (bool) _wasgo_AudioStreamGeneratorPlayback_wrapper_push_frame(wasgo_id, ((Variant) frame).get_wasgo_id()));
}