/* THIS FILE IS GENERATED */
#ifndef CURVETEXTURE_H
#define CURVETEXTURE_H

#include "wasgo\wasgo.h"

#include "Curve.h"
#include "Texture.h"
class CurveTexture : public Texture{
public:
Curve get_curve();
void set_curve(Curve p_curve);
void set_width(int p_width);

protected:
public:
explicit CurveTexture(WasGoID p_wasgo_id);
explicit CurveTexture(Texture other);
CurveTexture new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_CurveTexture_wrapper_get_curve(WasGoID wasgo_id);
void _wasgo_CurveTexture_wrapper_set_curve(WasGoID wasgo_id, WasGoID p_curve);
void _wasgo_CurveTexture_wrapper_set_width(WasGoID wasgo_id, int p_width);

    //constructor wrappers
    WasGoID _wasgo_CurveTexture_constructor();
            
}
#endif