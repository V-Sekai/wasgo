/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTRECORD_H
#define AUDIOEFFECTRECORD_H

#include "wasgo\wasgoid.h"

#include "AudioStreamSample.h"
#include "AudioEffect.h"
class AudioEffectRecord : public AudioEffect{
public:
AudioStreamSample::Format get_format();
AudioStreamSample get_recording();
bool is_recording_active();
void set_format(AudioStreamSample::Format p_format);
void set_recording_active(bool p_record);

protected:
public:
explicit AudioEffectRecord(WasGoID p_wasgo_id);
explicit AudioEffectRecord(AudioEffect other);
AudioEffectRecord();
AudioEffectRecord new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_AudioEffectRecord_wrapper_get_format(WasGoID wasgo_id);
WasGoID _wasgo_AudioEffectRecord_wrapper_get_recording(WasGoID wasgo_id);
int _wasgo_AudioEffectRecord_wrapper_is_recording_active(WasGoID wasgo_id);
void _wasgo_AudioEffectRecord_wrapper_set_format(WasGoID wasgo_id, WasGoID p_format);
void _wasgo_AudioEffectRecord_wrapper_set_recording_active(WasGoID wasgo_id, bool p_record);

    //constructor wrappers
    WasGoID _wasgo_AudioEffectRecord_constructor();
            
}
#endif