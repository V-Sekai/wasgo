/* THIS FILE IS GENERATED */
#ifndef VSLIDER_H
#define VSLIDER_H

#include "wasgo\wasgo.h"

#include "Slider.h"
class VSlider : public Slider{
public:

protected:
public:
explicit VSlider(WasGoID p_wasgo_id);
explicit VSlider(Slider other);
VSlider new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VSlider_constructor();
            
}
#endif