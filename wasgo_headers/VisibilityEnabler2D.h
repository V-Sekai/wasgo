/* THIS FILE IS GENERATED */
#ifndef VISIBILITYENABLER2D_H
#define VISIBILITYENABLER2D_H

#include <stdint.h>

#include "VisibilityNotifier2D.h"
#include "Node.h"
class VisibilityEnabler2D : public VisibilityNotifier2D{
public: VisibilityEnabler2D();
enum Enabler{
ENABLER_PAUSE_ANIMATIONS: 0,
ENABLER_FREEZE_BODIES: 1,
ENABLER_PAUSE_PARTICLES: 2,
ENABLER_PARENT_PROCESS: 3,
ENABLER_PARENT_PHYSICS_PROCESS: 4,
ENABLER_PAUSE_ANIMATED_SPRITES: 5,
};
void  _node_removed(Node arg0);
bool  is_enabler_enabled(int enabler);
void  set_enabler(int enabler, bool enabled);
};
#endif