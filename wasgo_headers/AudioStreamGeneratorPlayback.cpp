/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStreamGeneratorPlayback.h"
bool AudioStreamGeneratorPlayback::can_push_buffer(int p_amount){
	return (bool) _wasgo_AudioStreamGeneratorPlayback_wrapper_can_push_buffer(wasgo_id, p_amount);
}
void AudioStreamGeneratorPlayback::clear_buffer(){
	_wasgo_AudioStreamGeneratorPlayback_wrapper_clear_buffer(wasgo_id);
}
int AudioStreamGeneratorPlayback::get_frames_available(){
	return (int) _wasgo_AudioStreamGeneratorPlayback_wrapper_get_frames_available(wasgo_id);
}
int AudioStreamGeneratorPlayback::get_skips(){
	return (int) _wasgo_AudioStreamGeneratorPlayback_wrapper_get_skips(wasgo_id);
}
bool AudioStreamGeneratorPlayback::push_buffer(PoolVector2Array p_frames){
	return (bool) _wasgo_AudioStreamGeneratorPlayback_wrapper_push_buffer(wasgo_id, p_frames._get_wasgo_id());
}
bool AudioStreamGeneratorPlayback::push_frame(Vector2 p_frame){

    Variant wasgo_var_frame = p_frame;
    uint8_t wasgo_buffer_frame[12];
    int wasgo_size_frame = 12;
    encode_variant(wasgo_var_frame, wasgo_buffer_frame, wasgo_size_frame);
    
	return (bool) _wasgo_AudioStreamGeneratorPlayback_wrapper_push_frame(wasgo_id, wasgo_buffer_frame, wasgo_size_frame);
}