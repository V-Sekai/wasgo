/* THIS FILE IS GENERATED */
#ifndef BOXCONTAINER_H
#define BOXCONTAINER_H

#include "wasgo\wasgoid.h"

#include "Container.h"
class BoxContainer : public Container{
public:
enum AlignMode{
ALIGN_BEGIN,
ALIGN_CENTER,
ALIGN_END
};
void add_spacer(bool p_begin);
BoxContainer::AlignMode get_alignment();
void set_alignment(BoxContainer::AlignMode p_alignment);

protected:
public:
explicit BoxContainer(WasGoID p_wasgo_id);
explicit BoxContainer(Container other);
BoxContainer();
BoxContainer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_BoxContainer_wrapper_add_spacer(WasGoID wasgo_id, bool p_begin);
WasGoID _wasgo_BoxContainer_wrapper_get_alignment(WasGoID wasgo_id);
void _wasgo_BoxContainer_wrapper_set_alignment(WasGoID wasgo_id, WasGoID p_alignment);

    //constructor wrappers
    WasGoID _wasgo_BoxContainer_constructor();
            
}
#endif