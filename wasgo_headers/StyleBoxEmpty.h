/* THIS FILE IS GENERATED */
#ifndef STYLEBOXEMPTY_H
#define STYLEBOXEMPTY_H

#include "wasgo\wasgo.h"

#include "StyleBox.h"
class StyleBoxEmpty : public StyleBox{
public:

protected:
StyleBoxEmpty(WasGoId p_wasgo_id);
public:
StyleBoxEmpty();
~StyleBoxEmpty();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_StyleBoxEmpty_constructor();
    void _wasgo_StyleBoxEmpty_destructor(WasGoId p_wasgo_id);
            
}
#endif