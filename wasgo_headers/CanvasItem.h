/* THIS FILE IS GENERATED */
#ifndef CANVASITEM_H
#define CANVASITEM_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Node.h"
class CanvasItem : public Node{
public:
enum BlendMode{
BLEND_MODE_MIX,
BLEND_MODE_ADD,
BLEND_MODE_SUB,
BLEND_MODE_MUL,
BLEND_MODE_PREMULT_ALPHA,
BLEND_MODE_DISABLED
};
};


//Wrapper Functions
extern "C"{
}
#endif