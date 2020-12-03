/* THIS FILE IS GENERATED */
#ifndef VSCROLLBAR_H
#define VSCROLLBAR_H

#include "wasgo\wasgo.h"

#include "ScrollBar.h"
class VScrollBar : public ScrollBar{
public:

protected:
VScrollBar(WasGoId p_wasgo_id);
public:
VScrollBar();
~VScrollBar();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VScrollBar_constructor();
    void _wasgo_VScrollBar_destructor(WasGoId p_wasgo_id);
            
}
#endif