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
CurveTexture(WasGoId p_wasgo_id);
public:
CurveTexture();
~CurveTexture();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_CurveTexture_wrapper_get_curve(WasGoId wasgo_id);
void _wasgo_CurveTexture_wrapper_set_curve(WasGoId wasgo_id, WasGoId p_curve);
void _wasgo_CurveTexture_wrapper_set_width(WasGoId wasgo_id, int p_width);

    //constructor and destructor wrappers
    WasGoId _wasgo_CurveTexture_constructor();
    void _wasgo_CurveTexture_destructor(WasGoId p_wasgo_id);
            
}
#endif