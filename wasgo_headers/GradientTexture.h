/* THIS FILE IS GENERATED */
#ifndef GRADIENTTEXTURE_H
#define GRADIENTTEXTURE_H

#include "stdint.h"

#include "Texture.h"
#include "Gradient.h"
class GradientTexture : public Texture{
public: GradientTexture();
Gradient get_gradient();
void set_gradient(Gradient p_gradient);
void set_width(int p_width);
};
#endif