/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTRECORD_H
#define AUDIOEFFECTRECORD_H

#include "wasgo\wasgo.h"

#include "AudioEffect.h"
#include "AudioStreamSample.h"
class AudioEffectRecord : public AudioEffect{
public:
AudioStreamSample::Format get_format();
AudioStreamSample get_recording();
bool is_recording_active();
void set_format(AudioStreamSample::Format p_format);
void set_recording_active(bool p_record);

protected:
AudioEffectRecord(WasGoId p_wasgo_id);
public:
AudioEffectRecord();
~AudioEffectRecord();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_AudioEffectRecord_wrapper_get_format(WasGoId wasgo_id);
WasGoId _wasgo_AudioEffectRecord_wrapper_get_recording(WasGoId wasgo_id);
int _wasgo_AudioEffectRecord_wrapper_is_recording_active(WasGoId wasgo_id);
void _wasgo_AudioEffectRecord_wrapper_set_format(WasGoId wasgo_id, WasGoId p_format);
void _wasgo_AudioEffectRecord_wrapper_set_recording_active(WasGoId wasgo_id, bool p_record);

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioEffectRecord_constructor();
    void _wasgo_AudioEffectRecord_destructor(WasGoId p_wasgo_id);
            
}
#endif