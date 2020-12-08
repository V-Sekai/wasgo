/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "AudioStream.h"
float AudioStream::get_length(){
	return (float) _wasgo_AudioStream_wrapper_get_length(wasgo_id);
}

AudioStream::AudioStream(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
AudioStream::AudioStream(Resource other) : Resource(other._get_wasgo_id()){
}
AudioStream::AudioStream():Resource(){
}
AudioStream AudioStream::new_instance(){
    return AudioStream(_wasgo_AudioStream_constructor());
}
WasGoID AudioStream::_get_wasgo_id(){
    return wasgo_id;
}
AudioStream::operator bool(){
    return (bool) wasgo_id;
}
