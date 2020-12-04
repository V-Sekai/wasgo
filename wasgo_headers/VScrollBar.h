/* THIS FILE IS GENERATED */
#ifndef VSCROLLBAR_H
#define VSCROLLBAR_H

#include "wasgo\wasgo.h"

#include "ScrollBar.h"
class VScrollBar : public ScrollBar{
public:

protected:
public:
explicit VScrollBar(WasGoID p_wasgo_id);
explicit VScrollBar(ScrollBar other);
VScrollBar new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VScrollBar_constructor();
            
}
#endif