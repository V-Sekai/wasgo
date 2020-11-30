/* THIS FILE IS GENERATED */
#ifndef PATH_H
#define PATH_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Curve3D.h"
class Path : public Spatial{
Curve3D get_curve();
void set_curve(Curve3D p_curve);

Path(WasGoId p_wasgo_id);
~Path();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Path_wrapper_get_curve(WasGoId wasgo_id);
void _wasgo_Path_wrapper_set_curve(WasGoId wasgo_id, WasGo::WasGoId p_curve);
}
#endif