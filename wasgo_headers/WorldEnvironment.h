/* THIS FILE IS GENERATED */
#ifndef WORLDENVIRONMENT_H
#define WORLDENVIRONMENT_H

#include "wasgo\wasgoid.h"

#include "Environment.h"
#include "Node.h"
class WorldEnvironment : public Node{
public:
Environment get_environment();
void set_environment(Environment p_env);

protected:
public:
explicit WorldEnvironment(WasGoID p_wasgo_id);
explicit WorldEnvironment(Node other);
WorldEnvironment();
WorldEnvironment new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_WorldEnvironment_wrapper_get_environment(WasGoID wasgo_id);
void _wasgo_WorldEnvironment_wrapper_set_environment(WasGoID wasgo_id, WasGoID p_env);

    //constructor wrappers
    WasGoID _wasgo_WorldEnvironment_constructor();
            
}
#endif