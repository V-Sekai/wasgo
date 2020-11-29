/* THIS FILE IS GENERATED */
#ifndef VISIBILITYENABLER2D_H
#define VISIBILITYENABLER2D_H

#include "stdint.h"

#include "VisibilityNotifier2D.h"
class VisibilityEnabler2D : public VisibilityNotifier2D{
public: VisibilityEnabler2D();
enum Enabler{
ENABLER_PAUSE_ANIMATIONS,
ENABLER_FREEZE_BODIES,
ENABLER_PAUSE_PARTICLES,
ENABLER_PARENT_PROCESS,
ENABLER_PARENT_PHYSICS_PROCESS,
ENABLER_PAUSE_ANIMATED_SPRITES,
ENABLER_MAX
};
bool is_enabler_enabled(VisibilityEnabler2D::Enabler p_enabler);
void set_enabler(VisibilityEnabler2D::Enabler p_enabler, bool p_enabled);
};
#endif