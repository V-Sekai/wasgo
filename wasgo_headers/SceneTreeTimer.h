/* THIS FILE IS GENERATED */
#ifndef SCENETREETIMER_H
#define SCENETREETIMER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
class SceneTreeTimer : public Reference{
float get_time_left();
void set_time_left(float p_time);
};


//Wrapper Functions
extern "C"{
float _wasgo_SceneTreeTimer_wrapper_get_time_left(WasGoId wasgo_id);
void _wasgo_SceneTreeTimer_wrapper_set_time_left(WasGoId wasgo_id, float p_time);
}
#endif