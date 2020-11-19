/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "AudioEffectInstance.h"
#include "AudioEffect.h"
#include "Variant.h"
#include "Object.h"
#include "AudioBusLayout.h"
class AudioServer : public Object{
public: AudioServer();
enum SpeakerMode{
SPEAKER_MODE_STEREO: 0,
SPEAKER_SURROUND_31: 1,
SPEAKER_SURROUND_51: 2,
};
void  add_bus(int at_position = -1);
void  add_bus_effect(int bus_idx, AudioEffect effect, int at_position = -1);
String  capture_get_device();
String  capture_get_device();
Array  capture_get_device_list();
Array  capture_get_device_list();
void  capture_set_device(String name);
AudioBusLayout  generate_bus_layout();
AudioBusLayout  generate_bus_layout();
int  get_bus_channels(int bus_idx);
int  get_bus_count();
int  get_bus_count();
AudioEffect  get_bus_effect(int bus_idx, int effect_idx);
int  get_bus_effect_count(int bus_idx);
AudioEffectInstance  get_bus_effect_instance(int bus_idx, int effect_idx, int channel = 0);
int  get_bus_index(String bus_name);
String  get_bus_name(int bus_idx);
float  get_bus_peak_volume_left_db(int bus_idx, int channel);
float  get_bus_peak_volume_right_db(int bus_idx, int channel);
String  get_bus_send(int bus_idx);
float  get_bus_volume_db(int bus_idx);
String  get_device();
String  get_device();
Array  get_device_list();
Array  get_device_list();
float  get_global_rate_scale();
float  get_global_rate_scale();
float  get_mix_rate();
float  get_mix_rate();
float  get_output_latency();
float  get_output_latency();
enum.AudioServer::SpeakerMode  get_speaker_mode();
enum.AudioServer::SpeakerMode  get_speaker_mode();
float  get_time_since_last_mix();
float  get_time_since_last_mix();
float  get_time_to_next_mix();
float  get_time_to_next_mix();
bool  is_bus_bypassing_effects(int bus_idx);
bool  is_bus_effect_enabled(int bus_idx, int effect_idx);
bool  is_bus_mute(int bus_idx);
bool  is_bus_solo(int bus_idx);
void  lock();
void  lock();
void  move_bus(int index, int to_index);
void  remove_bus(int index);
void  remove_bus_effect(int bus_idx, int effect_idx);
void  set_bus_bypass_effects(int bus_idx, bool enable);
void  set_bus_count(int amount);
void  set_bus_effect_enabled(int bus_idx, int effect_idx, bool enabled);
void  set_bus_layout(AudioBusLayout bus_layout);
void  set_bus_mute(int bus_idx, bool enable);
void  set_bus_name(int bus_idx, String name);
void  set_bus_send(int bus_idx, String send);
void  set_bus_solo(int bus_idx, bool enable);
void  set_bus_volume_db(int bus_idx, float volume_db);
void  set_device(String device);
void  set_global_rate_scale(float scale);
void  swap_bus_effects(int bus_idx, int effect_idx, int by_effect_idx);
void  unlock();
void  unlock();
};