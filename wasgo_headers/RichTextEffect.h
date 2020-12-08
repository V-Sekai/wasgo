/* THIS FILE IS GENERATED */
#ifndef RICHTEXTEFFECT_H
#define RICHTEXTEFFECT_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
class RichTextEffect : public Resource{
public:

protected:
public:
explicit RichTextEffect(WasGoID p_wasgo_id);
explicit RichTextEffect(Resource other);
RichTextEffect();
RichTextEffect new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_RichTextEffect_constructor();
            
}
#endif