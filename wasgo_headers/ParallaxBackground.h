/* THIS FILE IS GENERATED */
#ifndef PARALLAXBACKGROUND_H
#define PARALLAXBACKGROUND_H

#include <stdint.h>

#include "Vector2.h"
#include "CanvasLayer.h"
#include "Transform2D.h"
class ParallaxBackground : public CanvasLayer{
public: ParallaxBackground();
void  _camera_moved(Transform2D arg0, Vector2 arg1);
Vector2  get_limit_begin();
Vector2  get_limit_begin();
Vector2  get_limit_end();
Vector2  get_limit_end();
Vector2  get_scroll_base_offset();
Vector2  get_scroll_base_offset();
Vector2  get_scroll_base_scale();
Vector2  get_scroll_base_scale();
Vector2  get_scroll_offset();
Vector2  get_scroll_offset();
bool  is_ignore_camera_zoom();
bool  is_ignore_camera_zoom();
void  set_ignore_camera_zoom(bool ignore);
void  set_limit_begin(Vector2 ofs);
void  set_limit_end(Vector2 ofs);
void  set_scroll_base_offset(Vector2 ofs);
void  set_scroll_base_scale(Vector2 scale);
void  set_scroll_offset(Vector2 ofs);
};
#endif