/* THIS FILE IS GENERATED */
#ifndef PATH_H
#define PATH_H

#include "wasgo\wasgo.h"

#include "Curve3D.h"
#include "Spatial.h"
class Path : public Spatial{
public:
Curve3D get_curve();
void set_curve(Curve3D p_curve);

protected:
public:
explicit Path(WasGoId p_wasgo_id);
explicit Path(Spatial other);
Path new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Path_wrapper_get_curve(WasGoId wasgo_id);
void _wasgo_Path_wrapper_set_curve(WasGoId wasgo_id, WasGoId p_curve);

    //constructor wrappers
    WasGoId _wasgo_Path_constructor();
            
}
#endif