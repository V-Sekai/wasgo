/* THIS FILE IS GENERATED */
#ifndef SPLITCONTAINER_H
#define SPLITCONTAINER_H

#include "wasgo\wasgoid.h"

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

protected:
public:
explicit SplitContainer(WasGoID p_wasgo_id);
explicit SplitContainer(Container other);
SplitContainer();
SplitContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_SplitContainer_wrapper_clamp_split_offset(WasGoID wasgo_id);
WasGoID _wasgo_SplitContainer_wrapper_get_dragger_visibility(WasGoID wasgo_id);
int _wasgo_SplitContainer_wrapper_get_split_offset(WasGoID wasgo_id);
int _wasgo_SplitContainer_wrapper_is_collapsed(WasGoID wasgo_id);
void _wasgo_SplitContainer_wrapper_set_collapsed(WasGoID wasgo_id, bool p_collapsed);
void _wasgo_SplitContainer_wrapper_set_dragger_visibility(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_SplitContainer_wrapper_set_split_offset(WasGoID wasgo_id, int p_offset);

    //constructor wrappers
    WasGoID _wasgo_SplitContainer_constructor();
            
}
#endif