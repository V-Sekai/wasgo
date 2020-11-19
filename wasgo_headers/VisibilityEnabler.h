/* THIS FILE IS GENERATED */
#ifndef VISIBILITYENABLER_H
#define VISIBILITYENABLER_H

#include <stdint.h>

#include "VisibilityNotifier.h"
#include "Node.h"
class VisibilityEnabler : public VisibilityNotifier{
public: VisibilityEnabler();
enum Enabler{
ENABLER_PAUSE_ANIMATIONS: 0,
ENABLER_FREEZE_BODIES: 1,
};
void  _node_removed(Node arg0);
bool  is_enabler_enabled(int enabler);
void  set_enabler(int enabler, bool enabled);
};
#endif