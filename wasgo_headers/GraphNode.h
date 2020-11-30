/* THIS FILE IS GENERATED */
#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Container.h"
#include "Variant.h"
class GraphNode : public Container{
enum Overlay{
OVERLAY_DISABLED,
OVERLAY_BREAKPOINT,
OVERLAY_POSITION
};
String get_title();
void set_title(String p_title);

GraphNode(WasGoId p_wasgo_id);
~GraphNode();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_GraphNode_wrapper_get_title(WasGoId wasgo_id);
void _wasgo_GraphNode_wrapper_set_title(WasGoId wasgo_id, WasGo::WasGoId p_title);
}
#endif