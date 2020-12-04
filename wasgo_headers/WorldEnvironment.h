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
public:
explicit WorldEnvironment(WasGoId p_wasgo_id);
explicit WorldEnvironment(Node other);
WorldEnvironment new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_WorldEnvironment_wrapper_get_environment(WasGoId wasgo_id);
void _wasgo_WorldEnvironment_wrapper_set_environment(WasGoId wasgo_id, WasGoId p_env);

    //constructor wrappers
    WasGoId _wasgo_WorldEnvironment_constructor();
            
}
#endif