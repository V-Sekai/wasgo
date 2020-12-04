/* THIS FILE IS GENERATED */
#ifndef VISIBILITYENABLER_H
#define VISIBILITYENABLER_H

#include "wasgo\wasgo.h"

#include "VisibilityNotifier.h"
class VisibilityEnabler : public VisibilityNotifier{
public:
enum Enabler{
ENABLER_PAUSE_ANIMATIONS,
ENABLER_FREEZE_BODIES,
ENABLER_MAX
};
bool is_enabler_enabled(VisibilityEnabler::Enabler p_enabler);
void set_enabler(VisibilityEnabler::Enabler p_enabler, bool p_enabled);

protected:
public:
explicit VisibilityEnabler(WasGoId p_wasgo_id);
explicit VisibilityEnabler(VisibilityNotifier other);
VisibilityEnabler new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_VisibilityEnabler_wrapper_is_enabler_enabled(WasGoId wasgo_id, WasGoId p_enabler);
void _wasgo_VisibilityEnabler_wrapper_set_enabler(WasGoId wasgo_id, WasGoId p_enabler, bool p_enabled);

    //constructor wrappers
    WasGoId _wasgo_VisibilityEnabler_constructor();
            
}
#endif