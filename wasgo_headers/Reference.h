/* THIS FILE IS GENERATED */
#ifndef REFERENCE_H
#define REFERENCE_H

#include "stdint.h"

#include "Object.h"
class Reference : public Object{
public: Reference();
bool init_ref();
bool reference();
bool unreference();
};
#endif