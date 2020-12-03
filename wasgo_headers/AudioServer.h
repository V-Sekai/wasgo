/* THIS FILE IS GENERATED */
#ifndef AUDIOSERVER_H
#define AUDIOSERVER_H

#include "wasgo\wasgo.h"

#include "AudioEffectInstance.h"
#include "ustring.h"
#include "AudioEffect.h"
#include "Object.h"
#include "Variant.h"
#include "AudioBusLayout.h"
class AudioServer : public Object{
public:
enum SpeakerMode{
SPEAKER_MODE_STEREO,
SPEAKER_SURROUND_31,
SPEAKER_SURROUND_51,
SPEAKER_SURROUND_71
};
void add_bus(int p_at_position = (int) -1);
void add_bus_effect(int p_bus_idx, AudioEffect p_effect, int p_at_position = (int) -1);
String capture_get_device();
Array capture_get_device_list();
void capture_set_device(String p_name);
AudioBusLayout generate_bus_layout();
int get_bus_channels(int p_bus_idx);
int get_bus_count();
AudioEffect get_bus_effect(int p_bus_idx, int p_effect_idx);
int get_bus_effect_count(int p_bus_idx);
AudioEffectInstance get_bus_effect_instance(int p_bus_idx, int p_effect_idx, int p_channel = (int) 0);
int get_bus_index(String p_bus_name);
String get_bus_name(int p_bus_idx);
float get_bus_peak_volume_left_db(int p_bus_idx, int p_channel);
float get_bus_peak_volume_right_db(int p_bus_idx, int p_channel);
String get_bus_send(int p_bus_idx);
float get_bus_volume_db(int p_bus_idx);
String get_device();
Array get_device_list();
float get_global_rate_scale();
float get_mix_rate();
float get_output_latency();
AudioServer::SpeakerMode get_speaker_mode();
float get_time_since_last_mix();
float get_time_to_next_mix();
bool is_bus_bypassing_effects(int p_bus_idx);
bool is_bus_effect_enabled(int p_bus_idx, int p_effect_idx);
bool is_bus_mute(int p_bus_idx);
bool is_bus_solo(int p_bus_idx);
void lock();
void move_bus(int p_index, int p_to_index);
void remove_bus(int p_index);
void remove_bus_effect(int p_bus_idx, int p_effect_idx);
void set_bus_bypass_effects(int p_bus_idx, bool p_enable);
void set_bus_count(int p_amount);
void set_bus_effect_enabled(int p_bus_idx, int p_effect_idx, bool p_enabled);
void set_bus_layout(AudioBusLayout p_bus_layout);
void set_bus_mute(int p_bus_idx, bool p_enable);
void set_bus_name(int p_bus_idx, String p_name);
void set_bus_send(int p_bus_idx, String p_send);
void set_bus_solo(int p_bus_idx, bool p_enable);
void set_bus_volume_db(int p_bus_idx, float p_volume_db);
void set_device(String p_device);
void set_global_rate_scale(float p_scale);
void swap_bus_effects(int p_bus_idx, int p_effect_idx, int p_by_effect_idx);
void unlock();

protected:
AudioServer(WasGoId p_wasgo_id);
public:
AudioServer();
~AudioServer();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_AudioServer_wrapper_add_bus(WasGoId wasgo_id, int p_at_position);
void _wasgo_AudioServer_wrapper_add_bus_effect(WasGoId wasgo_id, int p_bus_idx, WasGoId p_effect, int p_at_position);
void _wasgo_AudioServer_wrapper_capture_get_device(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_AudioServer_wrapper_capture_get_device_list(WasGoId wasgo_id);
void _wasgo_AudioServer_wrapper_capture_set_device(WasGoId wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoId _wasgo_AudioServer_wrapper_generate_bus_layout(WasGoId wasgo_id);
int _wasgo_AudioServer_wrapper_get_bus_channels(WasGoId wasgo_id, int p_bus_idx);
int _wasgo_AudioServer_wrapper_get_bus_count(WasGoId wasgo_id);
WasGoId _wasgo_AudioServer_wrapper_get_bus_effect(WasGoId wasgo_id, int p_bus_idx, int p_effect_idx);
int _wasgo_AudioServer_wrapper_get_bus_effect_count(WasGoId wasgo_id, int p_bus_idx);
WasGoId _wasgo_AudioServer_wrapper_get_bus_effect_instance(WasGoId wasgo_id, int p_bus_idx, int p_effect_idx, int p_channel);
int _wasgo_AudioServer_wrapper_get_bus_index(WasGoId wasgo_id, const uint8_t * p_bus_name, int p_bus_name_wasgo_buffer_size);
void _wasgo_AudioServer_wrapper_get_bus_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_bus_idx);
float _wasgo_AudioServer_wrapper_get_bus_peak_volume_left_db(WasGoId wasgo_id, int p_bus_idx, int p_channel);
float _wasgo_AudioServer_wrapper_get_bus_peak_volume_right_db(WasGoId wasgo_id, int p_bus_idx, int p_channel);
void _wasgo_AudioServer_wrapper_get_bus_send(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int p_bus_idx);
float _wasgo_AudioServer_wrapper_get_bus_volume_db(WasGoId wasgo_id, int p_bus_idx);
void _wasgo_AudioServer_wrapper_get_device(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_AudioServer_wrapper_get_device_list(WasGoId wasgo_id);
float _wasgo_AudioServer_wrapper_get_global_rate_scale(WasGoId wasgo_id);
float _wasgo_AudioServer_wrapper_get_mix_rate(WasGoId wasgo_id);
float _wasgo_AudioServer_wrapper_get_output_latency(WasGoId wasgo_id);
WasGoId _wasgo_AudioServer_wrapper_get_speaker_mode(WasGoId wasgo_id);
float _wasgo_AudioServer_wrapper_get_time_since_last_mix(WasGoId wasgo_id);
float _wasgo_AudioServer_wrapper_get_time_to_next_mix(WasGoId wasgo_id);
int _wasgo_AudioServer_wrapper_is_bus_bypassing_effects(WasGoId wasgo_id, int p_bus_idx);
int _wasgo_AudioServer_wrapper_is_bus_effect_enabled(WasGoId wasgo_id, int p_bus_idx, int p_effect_idx);
int _wasgo_AudioServer_wrapper_is_bus_mute(WasGoId wasgo_id, int p_bus_idx);
int _wasgo_AudioServer_wrapper_is_bus_solo(WasGoId wasgo_id, int p_bus_idx);
void _wasgo_AudioServer_wrapper_lock(WasGoId wasgo_id);
void _wasgo_AudioServer_wrapper_move_bus(WasGoId wasgo_id, int p_index, int p_to_index);
void _wasgo_AudioServer_wrapper_remove_bus(WasGoId wasgo_id, int p_index);
void _wasgo_AudioServer_wrapper_remove_bus_effect(WasGoId wasgo_id, int p_bus_idx, int p_effect_idx);
void _wasgo_AudioServer_wrapper_set_bus_bypass_effects(WasGoId wasgo_id, int p_bus_idx, bool p_enable);
void _wasgo_AudioServer_wrapper_set_bus_count(WasGoId wasgo_id, int p_amount);
void _wasgo_AudioServer_wrapper_set_bus_effect_enabled(WasGoId wasgo_id, int p_bus_idx, int p_effect_idx, bool p_enabled);
void _wasgo_AudioServer_wrapper_set_bus_layout(WasGoId wasgo_id, WasGoId p_bus_layout);
void _wasgo_AudioServer_wrapper_set_bus_mute(WasGoId wasgo_id, int p_bus_idx, bool p_enable);
void _wasgo_AudioServer_wrapper_set_bus_name(WasGoId wasgo_id, int p_bus_idx, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AudioServer_wrapper_set_bus_send(WasGoId wasgo_id, int p_bus_idx, const uint8_t * p_send, int p_send_wasgo_buffer_size);
void _wasgo_AudioServer_wrapper_set_bus_solo(WasGoId wasgo_id, int p_bus_idx, bool p_enable);
void _wasgo_AudioServer_wrapper_set_bus_volume_db(WasGoId wasgo_id, int p_bus_idx, float p_volume_db);
void _wasgo_AudioServer_wrapper_set_device(WasGoId wasgo_id, const uint8_t * p_device, int p_device_wasgo_buffer_size);
void _wasgo_AudioServer_wrapper_set_global_rate_scale(WasGoId wasgo_id, float p_scale);
void _wasgo_AudioServer_wrapper_swap_bus_effects(WasGoId wasgo_id, int p_bus_idx, int p_effect_idx, int p_by_effect_idx);
void _wasgo_AudioServer_wrapper_unlock(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_AudioServer_constructor();
    void _wasgo_AudioServer_destructor(WasGoId p_wasgo_id);
            
}
#endif