/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "AudioEffect.h"
#include "AudioStreamSample.h"
class AudioEffectRecord : public AudioEffect{
public: AudioEffectRecord();
enum.AudioStreamSample::Format  get_format();
enum.AudioStreamSample::Format  get_format();
AudioStreamSample  get_recording();
AudioStreamSample  get_recording();
bool  is_recording_active();
bool  is_recording_active();
void  set_format(int format);
void  set_recording_active(bool record);
};