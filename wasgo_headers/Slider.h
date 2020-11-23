/* THIS FILE IS GENERATED */
#ifndef SLIDER_H
#define SLIDER_H

#include <stdint.h>

#include "Range.h"
#include "InputEvent.h"
class Slider : public Range{
public: Slider();
void  _gui_input(InputEvent arg0);
int  get_ticks();
int  get_ticks();
bool  get_ticks_on_borders();
bool  get_ticks_on_borders();
bool  is_editable();
bool  is_editable();
bool  is_scrollable();
bool  is_scrollable();
void  set_editable(bool editable);
void  set_scrollable(bool scrollable);
void  set_ticks(int count);
void  set_ticks_on_borders(bool ticks_on_border);
};
#endif