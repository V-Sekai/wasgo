/* THIS FILE IS GENERATED */
#ifndef VISIBILITYENABLER_H
#define VISIBILITYENABLER_H

#include "stdint.h"

#include "VisibilityNotifier.h"
class VisibilityEnabler : public VisibilityNotifier{
public: VisibilityEnabler();
enum Enabler{
ENABLER_PAUSE_ANIMATIONS,
ENABLER_FREEZE_BODIES,
ENABLER_MAX
};
bool is_enabler_enabled(VisibilityEnabler::Enabler p_enabler);
void set_enabler(VisibilityEnabler::Enabler p_enabler, bool p_enabled);
};
#endif