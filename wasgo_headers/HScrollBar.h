/* THIS FILE IS GENERATED */
#ifndef HSCROLLBAR_H
#define HSCROLLBAR_H

#include "wasgo\wasgoid.h"

#include "ScrollBar.h"
class HScrollBar : public ScrollBar{
public:

protected:
public:
explicit HScrollBar(WasGoID p_wasgo_id);
explicit HScrollBar(ScrollBar other);
HScrollBar();
HScrollBar new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_HScrollBar_constructor();
            
}
#endif