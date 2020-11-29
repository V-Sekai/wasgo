/* THIS FILE IS GENERATED */
#ifndef BACKBUFFERCOPY_H
#define BACKBUFFERCOPY_H

#include "stdint.h"

#include "Node2D.h"
#include "Variant.h"
class BackBufferCopy : public Node2D{
public: BackBufferCopy();
enum CopyMode{
COPY_MODE_DISABLED,
COPY_MODE_RECT,
COPY_MODE_VIEWPORT
};
BackBufferCopy::CopyMode get_copy_mode();
Rect2 get_rect();
void set_copy_mode(BackBufferCopy::CopyMode p_copy_mode);
void set_rect(Rect2 p_rect);
};
#endif