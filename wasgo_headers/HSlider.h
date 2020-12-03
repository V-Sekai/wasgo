/* THIS FILE IS GENERATED */
#ifndef HSLIDER_H
#define HSLIDER_H

#include "wasgo\wasgo.h"

#include "Slider.h"
class HSlider : public Slider{
public:

protected:
HSlider(WasGoId p_wasgo_id);
public:
HSlider();
~HSlider();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_HSlider_constructor();
    void _wasgo_HSlider_destructor(WasGoId p_wasgo_id);
            
}
#endif