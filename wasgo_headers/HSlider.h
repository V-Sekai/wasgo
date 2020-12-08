/* THIS FILE IS GENERATED */
#ifndef HSLIDER_H
#define HSLIDER_H

#include "wasgo\wasgoid.h"

#include "Slider.h"
class HSlider : public Slider{
public:

protected:
public:
explicit HSlider(WasGoID p_wasgo_id);
explicit HSlider(Slider other);
HSlider();
HSlider new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_HSlider_constructor();
            
}
#endif