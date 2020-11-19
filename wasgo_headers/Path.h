/* THIS FILE IS GENERATED */
#ifndef PATH_H
#define PATH_H

#include <stdint.h>

#include "Spatial.h"
#include "Curve3D.h"
class Path : public Spatial{
public: Path();
void  _curve_changed();
void  _curve_changed();
Curve3D  get_curve();
Curve3D  get_curve();
void  set_curve(Curve3D curve);
};
#endif