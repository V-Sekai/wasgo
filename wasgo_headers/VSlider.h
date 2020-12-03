/* THIS FILE IS GENERATED */
#ifndef VSLIDER_H
#define VSLIDER_H

#include "wasgo\wasgo.h"

#include "Slider.h"
class VSlider : public Slider{
public:

protected:
VSlider(WasGoId p_wasgo_id);
public:
VSlider();
~VSlider();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_VSlider_constructor();
    void _wasgo_VSlider_destructor(WasGoId p_wasgo_id);
            
}
#endif