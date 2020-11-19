/* THIS FILE IS GENERATED */
#ifndef LISTENER_H
#define LISTENER_H

#include <stdint.h>

#include "Spatial.h"
#include "Transform.h"
class Listener : public Spatial{
public: Listener();
void  clear_current();
void  clear_current();
Transform  get_listener_transform();
Transform  get_listener_transform();
bool  is_current();
bool  is_current();
void  make_current();
void  make_current();
};
#endif