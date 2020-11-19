/* THIS FILE IS GENERATED */
#ifndef PARALLAXLAYER_H
#define PARALLAXLAYER_H

#include <stdint.h>

#include "Vector2.h"
#include "Node2D.h"
class ParallaxLayer : public Node2D{
public: ParallaxLayer();
Vector2  get_mirroring();
Vector2  get_mirroring();
Vector2  get_motion_offset();
Vector2  get_motion_offset();
Vector2  get_motion_scale();
Vector2  get_motion_scale();
void  set_mirroring(Vector2 mirror);
void  set_motion_offset(Vector2 offset);
void  set_motion_scale(Vector2 scale);
};
#endif