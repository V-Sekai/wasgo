/* THIS FILE IS GENERATED */
#ifndef HSCROLLBAR_H
#define HSCROLLBAR_H

#include "wasgo\wasgo.h"

#include "ScrollBar.h"
class HScrollBar : public ScrollBar{
public:

protected:
public:
explicit HScrollBar(WasGoId p_wasgo_id);
explicit HScrollBar(ScrollBar other);
HScrollBar new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoId _wasgo_HScrollBar_constructor();
            
}
#endif