/* THIS FILE IS GENERATED */
#ifndef GRADIENTTEXTURE_H
#define GRADIENTTEXTURE_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "Gradient.h"
class GradientTexture : public Texture{
public:
Gradient get_gradient();
void set_gradient(Gradient p_gradient);
void set_width(int p_width);

protected:
public:
explicit GradientTexture(WasGoID p_wasgo_id);
explicit GradientTexture(Texture other);
GradientTexture new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_GradientTexture_wrapper_get_gradient(WasGoID wasgo_id);
void _wasgo_GradientTexture_wrapper_set_gradient(WasGoID wasgo_id, WasGoID p_gradient);
void _wasgo_GradientTexture_wrapper_set_width(WasGoID wasgo_id, int p_width);

    //constructor wrappers
    WasGoID _wasgo_GradientTexture_constructor();
            
}
#endif