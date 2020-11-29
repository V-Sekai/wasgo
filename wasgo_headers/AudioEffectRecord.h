/* THIS FILE IS GENERATED */
#ifndef AUDIOEFFECTRECORD_H
#define AUDIOEFFECTRECORD_H

#include "stdint.h"

#include "AudioStreamSample.h"
#include "AudioEffect.h"
class AudioEffectRecord : public AudioEffect{
public: AudioEffectRecord();
AudioStreamSample::Format get_format();
AudioStreamSample get_recording();
bool is_recording_active();
void set_format(AudioStreamSample::Format p_format);
void set_recording_active(bool p_record);
};
#endif