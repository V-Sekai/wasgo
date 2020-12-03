/* THIS FILE IS GENERATED */
#ifndef PATH_H
#define PATH_H

#include "wasgo\wasgo.h"

#include "Spatial.h"
#include "Curve3D.h"
class Path : public Spatial{
public:
Curve3D get_curve();
void set_curve(Curve3D p_curve);

protected:
Path(WasGoId p_wasgo_id);
public:
Path();
~Path();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Path_wrapper_get_curve(WasGoId wasgo_id);
void _wasgo_Path_wrapper_set_curve(WasGoId wasgo_id, WasGoId p_curve);

    //constructor and destructor wrappers
    WasGoId _wasgo_Path_constructor();
    void _wasgo_Path_destructor(WasGoId p_wasgo_id);
            
}
#endif