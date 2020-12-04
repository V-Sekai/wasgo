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
public:
explicit Path2D(WasGoID p_wasgo_id);
explicit Path2D(Node2D other);
Path2D new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Path2D_wrapper_get_curve(WasGoID wasgo_id);
void _wasgo_Path2D_wrapper_set_curve(WasGoID wasgo_id, WasGoID p_curve);

    //constructor wrappers
    WasGoID _wasgo_Path2D_constructor();
            
}
#endif