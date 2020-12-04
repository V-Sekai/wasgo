/* THIS FILE IS GENERATED */
#ifndef SPLITCONTAINER_H
#define SPLITCONTAINER_H

#include "wasgo\wasgo.h"

#include "Container.h"
class SplitContainer : public Container{
public:
enum DraggerVisibility{
DRAGGER_VISIBLE,
DRAGGER_HIDDEN,
DRAGGER_HIDDEN_COLLAPSED
};
void clamp_split_offset();
SplitContainer::DraggerVisibility get_dragger_visibility();
int get_split_offset();
bool is_collapsed();
void set_collapsed(bool p_collapsed);
void set_dragger_visibility(SplitContainer::DraggerVisibility p_mode);
void set_split_offset(int p_offset);
};


//Wrapper Functions
extern "C"{
void _wasgo_SplitContainer_wrapper_clamp_split_offset(WasGoId wasgo_id);
WasGoId _wasgo_SplitContainer_wrapper_get_dragger_visibility(WasGoId wasgo_id);
int _wasgo_SplitContainer_wrapper_get_split_offset(WasGoId wasgo_id);
int _wasgo_SplitContainer_wrapper_is_collapsed(WasGoId wasgo_id);
void _wasgo_SplitContainer_wrapper_set_collapsed(WasGoId wasgo_id, bool p_collapsed);
void _wasgo_SplitContainer_wrapper_set_dragger_visibility(WasGoId wasgo_id, WasGoId p_mode);
void _wasgo_SplitContainer_wrapper_set_split_offset(WasGoId wasgo_id, int p_offset);

    //constructor wrappers
    WasGoId _wasgo_SplitContainer_constructor();
            
}
#endif