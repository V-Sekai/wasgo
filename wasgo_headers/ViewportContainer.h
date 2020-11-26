/* THIS FILE IS GENERATED */
#ifndef VIEWPORTCONTAINER_H
#define VIEWPORTCONTAINER_H

#include <stdint.h>

#include "Container.h"
#include "InputEvent.h"
class ViewportContainer : public Container{
public: ViewportContainer();
void  _input(InputEvent event);
void  _unhandled_input(InputEvent event);
int  get_stretch_shrink();
int  get_stretch_shrink();
bool  is_stretch_enabled();
bool  is_stretch_enabled();
void  set_stretch(bool enable);
void  set_stretch_shrink(int amount);
};
#endif