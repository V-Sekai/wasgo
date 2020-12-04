/* THIS FILE IS GENERATED */
#ifndef PATH2D_H
#define PATH2D_H

#include "wasgo\wasgo.h"

#include "Curve2D.h"
#include "Node2D.h"
class Path2D : public Node2D{
public:
Curve2D get_curve();
void set_curve(Curve2D p_curve);

protected:
Path2D(WasGoId p_wasgo_id);
public:
Path2D();
~Path2D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Path2D_wrapper_get_curve(WasGoId wasgo_id);
void _wasgo_Path2D_wrapper_set_curve(WasGoId wasgo_id, WasGoId p_curve);

    //constructor and destructor wrappers
    WasGoId _wasgo_Path2D_constructor();
    void _wasgo_Path2D_destructor(WasGoId p_wasgo_id);
            
}
#endif