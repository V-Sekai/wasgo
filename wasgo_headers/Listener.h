/* THIS FILE IS GENERATED */
#ifndef LISTENER_H
#define LISTENER_H

#include "stdint.h"

#include "Variant.h"
#include "Spatial.h"
class Listener : public Spatial{
public: Listener();
void clear_current();
Transform get_listener_transform();
bool is_current();
void make_current();
};
#endif