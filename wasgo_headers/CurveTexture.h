/* THIS FILE IS GENERATED */
#ifndef CURVETEXTURE_H
#define CURVETEXTURE_H

#include <stdint.h>

#include "Texture.h"
#include "Curve.h"
class CurveTexture : public Texture{
public: CurveTexture();
void  _update();
void  _update();
Curve  get_curve();
Curve  get_curve();
void  set_curve(Curve curve);
void  set_width(int width);
};
#endif