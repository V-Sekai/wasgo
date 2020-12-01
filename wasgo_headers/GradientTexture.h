/* THIS FILE IS GENERATED */
#ifndef GRADIENTTEXTURE_H
#define GRADIENTTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Gradient.h"
#include "Texture.h"
class GradientTexture : public Texture{
public:
Gradient get_gradient();
void set_gradient(Gradient p_gradient);
void set_width(int p_width);

GradientTexture(WasGoId p_wasgo_id);
~GradientTexture();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_GradientTexture_wrapper_get_gradient(WasGoId wasgo_id);
void _wasgo_GradientTexture_wrapper_set_gradient(WasGoId wasgo_id, WasGoId p_gradient);
void _wasgo_GradientTexture_wrapper_set_width(WasGoId wasgo_id, int p_width);
}
#endif