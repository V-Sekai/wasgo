/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTRECORD_H
#define AUDIOEFFECTRECORD_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "AudioStreamSample.h"
#include "AudioEffect.h"
class AudioEffectRecord : public AudioEffect{
AudioStreamSample::Format get_format();
AudioStreamSample get_recording();
bool is_recording_active();
void set_format(AudioStreamSample::Format p_format);
void set_recording_active(bool p_record);

AudioEffectRecord(WasGoId p_wasgo_id);
~AudioEffectRecord();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_AudioEffectRecord_wrapper_get_format(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_AudioEffectRecord_wrapper_get_recording(WasGoId wasgo_id);
int _wasgo_AudioEffectRecord_wrapper_is_recording_active(WasGoId wasgo_id);
void _wasgo_AudioEffectRecord_wrapper_set_format(WasGoId wasgo_id, WasGo::WasGoId p_format);
void _wasgo_AudioEffectRecord_wrapper_set_recording_active(WasGoId wasgo_id, bool p_record);
}
#endif