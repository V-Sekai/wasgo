/* THIS FILE IS GENERATED */
#ifndef PATH2D_H
#define PATH2D_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Curve2D.h"
#include "Node2D.h"
class Path2D : public Node2D{
Curve2D get_curve();
void set_curve(Curve2D p_curve);

Path2D(WasGoId p_wasgo_id);
~Path2D();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_Path2D_wrapper_get_curve(WasGoId wasgo_id);
void _wasgo_Path2D_wrapper_set_curve(WasGoId wasgo_id, WasGo::WasGoId p_curve);
}
#endif