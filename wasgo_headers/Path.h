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
public:
explicit Path(WasGoID p_wasgo_id);
explicit Path(Spatial other);
Path new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Path_wrapper_get_curve(WasGoID wasgo_id);
void _wasgo_Path_wrapper_set_curve(WasGoID wasgo_id, WasGoID p_curve);

    //constructor wrappers
    WasGoID _wasgo_Path_constructor();
            
}
#endif