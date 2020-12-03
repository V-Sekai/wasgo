/* THIS FILE IS GENERATED */
#ifndef WORLDENVIRONMENT_H
#define WORLDENVIRONMENT_H

#include "wasgo\wasgo.h"

#include "Environment.h"
#include "Node.h"
class WorldEnvironment : public Node{
public:
Environment get_environment();
void set_environment(Environment p_env);

protected:
WorldEnvironment(WasGoId p_wasgo_id);
public:
WorldEnvironment();
~WorldEnvironment();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_WorldEnvironment_wrapper_get_environment(WasGoId wasgo_id);
void _wasgo_WorldEnvironment_wrapper_set_environment(WasGoId wasgo_id, WasGoId p_env);

    //constructor and destructor wrappers
    WasGoId _wasgo_WorldEnvironment_constructor();
    void _wasgo_WorldEnvironment_destructor(WasGoId p_wasgo_id);
            
}
#endif