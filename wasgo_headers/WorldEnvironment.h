/* THIS FILE IS GENERATED */
#ifndef WORLDENVIRONMENT_H
#define WORLDENVIRONMENT_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Node.h"
#include "Environment.h"
class WorldEnvironment : public Node{
Environment get_environment();
void set_environment(Environment p_env);

WorldEnvironment(WasGoId p_wasgo_id);
~WorldEnvironment();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_WorldEnvironment_wrapper_get_environment(WasGoId wasgo_id);
void _wasgo_WorldEnvironment_wrapper_set_environment(WasGoId wasgo_id, WasGo::WasGoId p_env);
}
#endif