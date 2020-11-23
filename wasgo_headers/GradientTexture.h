/* THIS FILE IS GENERATED */
#ifndef GRADIENTTEXTURE_H
#define GRADIENTTEXTURE_H

#include <stdint.h>

#include "Gradient.h"
#include "Texture.h"
class GradientTexture : public Texture{
public: GradientTexture();
void  _update();
void  _update();
Gradient  get_gradient();
Gradient  get_gradient();
void  set_gradient(Gradient gradient);
void  set_width(int width);
};
#endif