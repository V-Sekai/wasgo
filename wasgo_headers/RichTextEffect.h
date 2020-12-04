/* THIS FILE IS GENERATED */
#ifndef RICHTEXTEFFECT_H
#define RICHTEXTEFFECT_H

#include "wasgo\wasgo.h"

#include "Resource.h"
class RichTextEffect : public Resource{
public:

protected:
public:
explicit RichTextEffect(WasGoID p_wasgo_id);
explicit RichTextEffect(Resource other);
RichTextEffect new_instance();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_RichTextEffect_constructor();
            
}
#endif