/* THIS FILE IS GENERATED */
#ifndef PATH2D_H
#define PATH2D_H

#include <stdint.h>

#include "Node2D.h"
#include "Curve2D.h"
class Path2D : public Node2D{
public: Path2D();
void  _curve_changed();
void  _curve_changed();
Curve2D  get_curve();
Curve2D  get_curve();
void  set_curve(Curve2D curve);
};
#endif