/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Container.h"
#include "InputEvent.h"
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