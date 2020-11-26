/* THIS FILE IS GENERATED */
#ifndef _ENGINE_H
#define _ENGINE_H

#include <stdint.h>

#include "MainLoop.h"
#include "Dictionary.h"
#include "String.h"
#include "Variant.h"
#include "Object.h"
class _Engine : public Object{
public: _Engine();
Dictionary  get_author_info();
Dictionary  get_author_info();
Array  get_copyright_info();
Array  get_copyright_info();
Dictionary  get_donor_info();
Dictionary  get_donor_info();
int  get_frames_drawn();
int  get_frames_drawn();
float  get_frames_per_second();
float  get_frames_per_second();
int  get_idle_frames();
int  get_idle_frames();
int  get_iterations_per_second();
int  get_iterations_per_second();
Dictionary  get_license_info();
Dictionary  get_license_info();
String  get_license_text();
String  get_license_text();
MainLoop  get_main_loop();
MainLoop  get_main_loop();
int  get_physics_frames();
int  get_physics_frames();
float  get_physics_interpolation_fraction();
float  get_physics_interpolation_fraction();
float  get_physics_jitter_fix();
float  get_physics_jitter_fix();
Object  get_singleton(String name);
int  get_target_fps();
int  get_target_fps();
float  get_time_scale();
float  get_time_scale();
Dictionary  get_version_info();
Dictionary  get_version_info();
bool  has_singleton(String name);
bool  is_editor_hint();
bool  is_editor_hint();
bool  is_in_physics_frame();
bool  is_in_physics_frame();
void  set_editor_hint(bool enabled);
void  set_iterations_per_second(int iterations_per_second);
void  set_physics_jitter_fix(float physics_jitter_fix);
void  set_target_fps(int target_fps);
void  set_time_scale(float time_scale);
};
#endif