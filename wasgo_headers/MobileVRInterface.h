/* THIS FILE IS GENERATED */
#ifndef MOBILEVRINTERFACE_H
#define MOBILEVRINTERFACE_H

#include <stdint.h>

#include "ARVRInterface.h"
class MobileVRInterface : public ARVRInterface{
public: MobileVRInterface();
float  get_display_to_lens();
float  get_display_to_lens();
float  get_display_width();
float  get_display_width();
float  get_eye_height();
float  get_eye_height();
float  get_iod();
float  get_iod();
float  get_k1();
float  get_k1();
float  get_k2();
float  get_k2();
float  get_oversample();
float  get_oversample();
void  set_display_to_lens(float display_to_lens);
void  set_display_width(float display_width);
void  set_eye_height(float eye_height);
void  set_iod(float iod);
void  set_k1(float k);
void  set_k2(float k);
void  set_oversample(float oversample);
};
#endif