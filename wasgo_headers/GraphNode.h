/* THIS FILE IS GENERATED */
#ifndef GRAPHNODE_H
#define GRAPHNODE_H

#include "stdint.h"

#include "Variant.h"
#include "Container.h"
class GraphNode : public Container{
public: GraphNode();
enum Overlay{
OVERLAY_DISABLED,
OVERLAY_BREAKPOINT,
OVERLAY_POSITION
};
String get_title();
void set_title(String p_title);
};
#endif