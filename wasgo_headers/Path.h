/* THIS FILE IS GENERATED */
#ifndef PATH_H
#define PATH_H

#include "stdint.h"

#include "Curve3D.h"
#include "Spatial.h"
class Path : public Spatial{
public: Path();
Curve3D get_curve();
void set_curve(Curve3D p_curve);
};
#endif