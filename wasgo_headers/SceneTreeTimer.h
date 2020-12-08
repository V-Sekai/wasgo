/* THIS FILE IS GENERATED */
#ifndef SCENETREETIMER_H
#define SCENETREETIMER_H

#include "wasgo\wasgoid.h"

#include "Reference.h"
class SceneTreeTimer : public Reference{
public:
float get_time_left();
void set_time_left(float p_time);

protected:
public:
explicit SceneTreeTimer(WasGoID p_wasgo_id);
explicit SceneTreeTimer(Reference other);
SceneTreeTimer();
SceneTreeTimer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
float _wasgo_SceneTreeTimer_wrapper_get_time_left(WasGoID wasgo_id);
void _wasgo_SceneTreeTimer_wrapper_set_time_left(WasGoID wasgo_id, float p_time);

    //constructor wrappers
    WasGoID _wasgo_SceneTreeTimer_constructor();
            
}
#endif