/* THIS FILE IS GENERATED */
#ifndef CURVETEXTURE_H
#define CURVETEXTURE_H

#include "stdint.h"

#include "Texture.h"
#include "Curve.h"
class CurveTexture : public Texture{
public: CurveTexture();
Curve get_curve();
void set_curve(Curve p_curve);
void set_width(int p_width);
};
#endif