/* THIS FILE IS GENERATED */
#ifndef DYNAMICFONTATSIZE_H
#define DYNAMICFONTATSIZE_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
class DynamicFontAtSize : public Reference{
public:

protected:
public:
explicit DynamicFontAtSize(WasGoID p_wasgo_id);
explicit DynamicFontAtSize(Reference other);
DynamicFontAtSize();
DynamicFontAtSize new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_DynamicFontAtSize_constructor();
            
}
#endif