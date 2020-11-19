/* THIS FILE IS GENERATED */
#ifndef SPLITCONTAINER_H
#define SPLITCONTAINER_H

#include <stdint.h>

#include "InputEvent.h"
#include "Container.h"
class SplitContainer : public Container{
public: SplitContainer();
enum DraggerVisibility{
DRAGGER_VISIBLE: 0,
DRAGGER_HIDDEN: 1,
};
void  _gui_input(InputEvent arg0);
void  clamp_split_offset();
void  clamp_split_offset();
enum.SplitContainer::DraggerVisibility  get_dragger_visibility();
enum.SplitContainer::DraggerVisibility  get_dragger_visibility();
int  get_split_offset();
int  get_split_offset();
bool  is_collapsed();
bool  is_collapsed();
void  set_collapsed(bool collapsed);
void  set_dragger_visibility(int mode);
void  set_split_offset(int offset);
};
#endif