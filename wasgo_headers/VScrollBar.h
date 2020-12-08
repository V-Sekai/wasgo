/* THIS FILE IS GENERATED */
#ifndef VSCROLLBAR_H
#define VSCROLLBAR_H

#include "wasgo\wasgoid.h"

#include "ScrollBar.h"
class VScrollBar : public ScrollBar{
public:

protected:
public:
explicit VScrollBar(WasGoID p_wasgo_id);
explicit VScrollBar(ScrollBar other);
VScrollBar();
VScrollBar new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VScrollBar_constructor();
            
}
#endif