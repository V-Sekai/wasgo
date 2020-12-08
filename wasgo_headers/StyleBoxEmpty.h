/* THIS FILE IS GENERATED */
#ifndef STYLEBOXEMPTY_H
#define STYLEBOXEMPTY_H

#include "wasgo\wasgoid.h"

#include "StyleBox.h"
class StyleBoxEmpty : public StyleBox{
public:

protected:
public:
explicit StyleBoxEmpty(WasGoID p_wasgo_id);
explicit StyleBoxEmpty(StyleBox other);
StyleBoxEmpty();
StyleBoxEmpty new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_StyleBoxEmpty_constructor();
            
}
#endif