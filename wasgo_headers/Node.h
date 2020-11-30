/* THIS FILE IS GENERATED */
#ifndef NODE_H
#define NODE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Object.h"
class Node : public Object{
enum DuplicateFlags{
DUPLICATE_SIGNALS,
DUPLICATE_GROUPS,
DUPLICATE_SCRIPTS,
DUPLICATE_USE_INSTANCING
};
enum PauseMode{
PAUSE_MODE_INHERIT,
PAUSE_MODE_STOP,
PAUSE_MODE_PROCESS
};

Node(WasGoId p_wasgo_id);
~Node();
            
};


//Wrapper Functions
extern "C"{
}
#endif