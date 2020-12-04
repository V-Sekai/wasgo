/* THIS FILE IS GENERATED */
#ifndef RANDOMNUMBERGENERATOR_H
#define RANDOMNUMBERGENERATOR_H

#include "wasgo\wasgo.h"

#include "Reference.h"
class RandomNumberGenerator : public Reference{
public:
int get_seed();
float randf();
float randf_range(float p_from, float p_to);
float randfn(float p_mean = (float) 0, float p_deviation = (float) 1);
int randi();
int randi_range(int p_from, int p_to);
void randomize();
void set_seed(int p_seed);

protected:
public:
explicit RandomNumberGenerator(WasGoId p_wasgo_id);
explicit RandomNumberGenerator(Reference other);
RandomNumberGenerator new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_RandomNumberGenerator_wrapper_get_seed(WasGoId wasgo_id);
float _wasgo_RandomNumberGenerator_wrapper_randf(WasGoId wasgo_id);
float _wasgo_RandomNumberGenerator_wrapper_randf_range(WasGoId wasgo_id, float p_from, float p_to);
float _wasgo_RandomNumberGenerator_wrapper_randfn(WasGoId wasgo_id, float p_mean, float p_deviation);
int _wasgo_RandomNumberGenerator_wrapper_randi(WasGoId wasgo_id);
int _wasgo_RandomNumberGenerator_wrapper_randi_range(WasGoId wasgo_id, int p_from, int p_to);
void _wasgo_RandomNumberGenerator_wrapper_randomize(WasGoId wasgo_id);
void _wasgo_RandomNumberGenerator_wrapper_set_seed(WasGoId wasgo_id, int p_seed);

    //constructor wrappers
    WasGoId _wasgo_RandomNumberGenerator_constructor();
            
}
#endif