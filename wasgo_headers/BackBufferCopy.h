/* THIS FILE IS GENERATED */
#ifndef BACKBUFFERCOPY_H
#define BACKBUFFERCOPY_H

#include <stdint.h>

#include "Node2D.h"
#include "Rect2.h"
class BackBufferCopy : public Node2D{
public: BackBufferCopy();
enum CopyMode{
COPY_MODE_DISABLED: 0,
COPY_MODE_RECT: 1,
};
enum.BackBufferCopy::CopyMode  get_copy_mode();
enum.BackBufferCopy::CopyMode  get_copy_mode();
Rect2  get_rect();
Rect2  get_rect();
void  set_copy_mode(int copy_mode);
void  set_rect(Rect2 rect);
};
#endif