/* THIS FILE IS GENERATED */
#ifndef HSCROLLBAR_H
#define HSCROLLBAR_H

#include "wasgo\wasgo.h"

#include "ScrollBar.h"
class HScrollBar : public ScrollBar{
public:

protected:
HScrollBar(WasGoId p_wasgo_id);
public:
HScrollBar();
~HScrollBar();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_HScrollBar_constructor();
    void _wasgo_HScrollBar_destructor(WasGoId p_wasgo_id);
            
}
#endif