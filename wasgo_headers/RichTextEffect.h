/* THIS FILE IS GENERATED */
#ifndef RICHTEXTEFFECT_H
#define RICHTEXTEFFECT_H

#include "wasgo\wasgo.h"

#include "Resource.h"
class RichTextEffect : public Resource{
public:

protected:
RichTextEffect(WasGoId p_wasgo_id);
public:
RichTextEffect();
~RichTextEffect();
            
};


//Wrapper Functions
extern "C"{

    //constructor and destructor wrappers
    WasGoId _wasgo_RichTextEffect_constructor();
    void _wasgo_RichTextEffect_destructor(WasGoId p_wasgo_id);
            
}
#endif