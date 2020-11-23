/* THIS FILE IS GENERATED */
#ifndef SCROLLBAR_H
#define SCROLLBAR_H

#include <stdint.h>

#include "Range.h"
#include "InputEvent.h"
class ScrollBar : public Range{
public: ScrollBar();
void  _drag_node_exit();
void  _drag_node_exit();
void  _drag_node_input(InputEvent arg0);
void  _gui_input(InputEvent arg0);
float  get_custom_step();
float  get_custom_step();
void  set_custom_step(float step);
};
#endif