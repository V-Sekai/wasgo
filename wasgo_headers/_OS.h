/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Vector2.h"
#include "Variant.h"
#include "Object.h"
#include "Erro.h"
#include "Dictionary.h"
#include "Rect2.h"
#include "PoolStringArray.h"
#include "Image.h"
class _OS : public Object{
public: _OS();
enum VideoDriver{
VIDEO_DRIVER_GLES3: 0,
};
enum SystemDir{
SYSTEM_DIR_DESKTOP: 0,
SYSTEM_DIR_DCIM: 1,
SYSTEM_DIR_DOCUMENTS: 2,
SYSTEM_DIR_DOWNLOADS: 3,
SYSTEM_DIR_MOVIES: 4,
SYSTEM_DIR_MUSIC: 5,
SYSTEM_DIR_PICTURES: 6,
};
enum ScreenOrientation{
SCREEN_ORIENTATION_LANDSCAPE: 0,
SCREEN_ORIENTATION_PORTRAIT: 1,
SCREEN_ORIENTATION_REVERSE_LANDSCAPE: 2,
SCREEN_ORIENTATION_REVERSE_PORTRAIT: 3,
SCREEN_ORIENTATION_SENSOR_LANDSCAPE: 4,
SCREEN_ORIENTATION_SENSOR_PORTRAIT: 5,
};
enum PowerState{
POWERSTATE_UNKNOWN: 0,
POWERSTATE_ON_BATTERY: 1,
POWERSTATE_NO_BATTERY: 2,
POWERSTATE_CHARGING: 3,
};
enum Month{
MONTH_JANUARY: 1,
MONTH_FEBRUARY: 2,
MONTH_MARCH: 3,
MONTH_APRIL: 4,
MONTH_MAY: 5,
MONTH_JUNE: 6,
MONTH_JULY: 7,
MONTH_AUGUST: 8,
MONTH_SEPTEMBER: 9,
MONTH_OCTOBER: 10,
MONTH_NOVEMBER: 11,
};
enum Weekday{
DAY_SUNDAY: 0,
DAY_MONDAY: 1,
DAY_TUESDAY: 2,
DAY_WEDNESDAY: 3,
DAY_THURSDAY: 4,
DAY_FRIDAY: 5,
};
void  alert(String text, String title = alert!);
bool  can_draw();
bool  can_draw();
bool  can_use_threads();
bool  can_use_threads();
void  center_window();
void  center_window();
void  close_midi_inputs();
void  close_midi_inputs();
void  delay_msec(int msec);
void  delay_usec(int usec);
void  dump_memory_to_file(String file);
void  dump_resources_to_file(String file);
int  execute(String path, PoolStringArray arguments, bool blocking = true, Array output = [], bool read_stderr = false);
int  find_scancode_from_string(String string);
int  get_audio_driver_count();
int  get_audio_driver_count();
String  get_audio_driver_name(int driver);
bool  get_borderless_window();
bool  get_borderless_window();
String  get_clipboard();
String  get_clipboard();
PoolStringArray  get_cmdline_args();
PoolStringArray  get_cmdline_args();
PoolStringArray  get_connected_midi_inputs();
PoolStringArray  get_connected_midi_inputs();
int  get_current_screen();
int  get_current_screen();
enum._OS::VideoDriver  get_current_video_driver();
enum._OS::VideoDriver  get_current_video_driver();
Dictionary  get_date(bool utc = false);
Dictionary  get_datetime(bool utc = false);
Dictionary  get_datetime_from_unix_time(int unix_time_val);
int  get_dynamic_memory_usage();
int  get_dynamic_memory_usage();
String  get_environment(String environment);
String  get_executable_path();
String  get_executable_path();
int  get_exit_code();
int  get_exit_code();
PoolStringArray  get_granted_permissions();
PoolStringArray  get_granted_permissions();
Vector2  get_ime_selection();
Vector2  get_ime_selection();
String  get_ime_text();
String  get_ime_text();
String  get_latin_keyboard_variant();
String  get_latin_keyboard_variant();
String  get_locale();
String  get_locale();
int  get_low_processor_usage_mode_sleep_usec();
int  get_low_processor_usage_mode_sleep_usec();
Vector2  get_max_window_size();
Vector2  get_max_window_size();
Vector2  get_min_window_size();
Vector2  get_min_window_size();
String  get_model_name();
String  get_model_name();
String  get_name();
String  get_name();
int  get_power_percent_left();
int  get_power_percent_left();
int  get_power_seconds_left();
int  get_power_seconds_left();
enum._OS::PowerState  get_power_state();
enum._OS::PowerState  get_power_state();
int  get_process_id();
int  get_process_id();
int  get_processor_count();
int  get_processor_count();
Vector2  get_real_window_size();
Vector2  get_real_window_size();
String  get_scancode_string(int code);
int  get_screen_count();
int  get_screen_count();
int  get_screen_dpi(int screen = -1);
enum._OS::ScreenOrientation  get_screen_orientation();
enum._OS::ScreenOrientation  get_screen_orientation();
Vector2  get_screen_position(int screen = -1);
Vector2  get_screen_size(int screen = -1);
int  get_splash_tick_msec();
int  get_splash_tick_msec();
int  get_static_memory_peak_usage();
int  get_static_memory_peak_usage();
int  get_static_memory_usage();
int  get_static_memory_usage();
String  get_system_dir(int dir);
int  get_system_time_msecs();
int  get_system_time_msecs();
int  get_system_time_secs();
int  get_system_time_secs();
int  get_ticks_msec();
int  get_ticks_msec();
int  get_ticks_usec();
int  get_ticks_usec();
Dictionary  get_time(bool utc = false);
Dictionary  get_time_zone_info();
Dictionary  get_time_zone_info();
String  get_unique_id();
String  get_unique_id();
int  get_unix_time();
int  get_unix_time();
int  get_unix_time_from_datetime(Dictionary datetime);
String  get_user_data_dir();
String  get_user_data_dir();
int  get_video_driver_count();
int  get_video_driver_count();
String  get_video_driver_name(int driver);
int  get_virtual_keyboard_height();
int  get_virtual_keyboard_height();
bool  get_window_per_pixel_transparency_enabled();
bool  get_window_per_pixel_transparency_enabled();
Vector2  get_window_position();
Vector2  get_window_position();
Rect2  get_window_safe_area();
Rect2  get_window_safe_area();
Vector2  get_window_size();
Vector2  get_window_size();
void  global_menu_add_item(String menu, String label, Variant id, Variant meta);
void  global_menu_add_separator(String menu);
void  global_menu_clear(String menu);
void  global_menu_remove_item(String menu, int idx);
bool  has_environment(String environment);
bool  has_feature(String tag_name);
bool  has_touchscreen_ui_hint();
bool  has_touchscreen_ui_hint();
bool  has_virtual_keyboard();
bool  has_virtual_keyboard();
void  hide_virtual_keyboard();
void  hide_virtual_keyboard();
bool  is_debug_build();
bool  is_debug_build();
bool  is_in_low_processor_usage_mode();
bool  is_in_low_processor_usage_mode();
bool  is_keep_screen_on();
bool  is_keep_screen_on();
bool  is_ok_left_and_cancel_right();
bool  is_ok_left_and_cancel_right();
bool  is_scancode_unicode(int code);
bool  is_stdout_verbose();
bool  is_stdout_verbose();
bool  is_userfs_persistent();
bool  is_userfs_persistent();
bool  is_vsync_enabled();
bool  is_vsync_enabled();
bool  is_vsync_via_compositor_enabled();
bool  is_vsync_via_compositor_enabled();
bool  is_window_always_on_top();
bool  is_window_always_on_top();
bool  is_window_focused();
bool  is_window_focused();
bool  is_window_fullscreen();
bool  is_window_fullscreen();
bool  is_window_maximized();
bool  is_window_maximized();
bool  is_window_minimized();
bool  is_window_minimized();
bool  is_window_resizable();
bool  is_window_resizable();
enum.Error  kill(int pid);
void  move_window_to_foreground();
void  move_window_to_foreground();
bool  native_video_is_playing();
bool  native_video_is_playing();
void  native_video_pause();
void  native_video_pause();
enum.Error  native_video_play(String path, float volume, String audio_track, String subtitle_track);
void  native_video_stop();
void  native_video_stop();
void  native_video_unpause();
void  native_video_unpause();
void  open_midi_inputs();
void  open_midi_inputs();
void  print_all_resources(String tofile = "");
void  print_all_textures_by_size();
void  print_all_textures_by_size();
void  print_resources_by_type(PoolStringArray types);
void  print_resources_in_use(bool short = false);
void  request_attention();
void  request_attention();
bool  request_permission(String name);
bool  request_permissions();
bool  request_permissions();
void  set_borderless_window(bool borderless);
void  set_clipboard(String clipboard);
void  set_current_screen(int screen);
void  set_exit_code(int code);
void  set_icon(Image icon);
void  set_ime_active(bool active);
void  set_ime_position(Vector2 position);
void  set_keep_screen_on(bool enabled);
void  set_low_processor_usage_mode(bool enable);
void  set_low_processor_usage_mode_sleep_usec(int usec);
void  set_max_window_size(Vector2 size);
void  set_min_window_size(Vector2 size);
void  set_native_icon(String filename);
void  set_screen_orientation(int orientation);
enum.Error  set_thread_name(String name);
void  set_use_file_access_save_and_swap(bool enabled);
void  set_use_vsync(bool enable);
void  set_vsync_via_compositor(bool enable);
void  set_window_always_on_top(bool enabled);
void  set_window_fullscreen(bool enabled);
void  set_window_maximized(bool enabled);
void  set_window_minimized(bool enabled);
void  set_window_per_pixel_transparency_enabled(bool enabled);
void  set_window_position(Vector2 position);
void  set_window_resizable(bool enabled);
void  set_window_size(Vector2 size);
void  set_window_title(String title);
enum.Error  shell_open(String uri);
void  show_virtual_keyboard(String existing_text = "");
};