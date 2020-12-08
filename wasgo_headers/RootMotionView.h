/* THIS FILE IS GENERATED */
#ifndef ROOTMOTIONVIEW_H
#define ROOTMOTIONVIEW_H

#include "wasgo\wasgoid.h"

#include "VisualInstance.h"
class RootMotionView : public VisualInstance{
public:

protected:
public:
explicit RootMotionView(WasGoID p_wasgo_id);
explicit RootMotionView(VisualInstance other);
RootMotionView();
RootMotionView new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_RootMotionView_constructor();
            
}
#endif