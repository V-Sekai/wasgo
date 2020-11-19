/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Node.h"
#include "VisibilityNotifier.h"
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