/* THIS FILE IS GENERATED */
#include "RandomNumberGenerator.h"
int RandomNumberGenerator::get_seed(){
	return (int) _wasgo_RandomNumberGenerator_wrapper_get_seed(wasgo_id));
}
float RandomNumberGenerator::randf(){
	return (float) _wasgo_RandomNumberGenerator_wrapper_randf(wasgo_id));
}
float RandomNumberGenerator::randf_range(float p_from, float p_to){
	return (float) _wasgo_RandomNumberGenerator_wrapper_randf_range(wasgo_id, from, to));
}
float RandomNumberGenerator::randfn(float p_mean = (float) 0, float p_deviation = (float) 1){
	return (float) _wasgo_RandomNumberGenerator_wrapper_randfn(wasgo_id, mean, deviation));
}
int RandomNumberGenerator::randi(){
	return (int) _wasgo_RandomNumberGenerator_wrapper_randi(wasgo_id));
}
int RandomNumberGenerator::randi_range(int p_from, int p_to){
	return (int) _wasgo_RandomNumberGenerator_wrapper_randi_range(wasgo_id, from, to));
}
void RandomNumberGenerator::randomize(){
	_wasgo_RandomNumberGenerator_wrapper_randomize(wasgo_id);
}
void RandomNumberGenerator::set_seed(int p_seed){
	_wasgo_RandomNumberGenerator_wrapper_set_seed(wasgo_id, seed);
}

RandomNumberGenerator::RandomNumberGenerator(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
RandomNumberGenerator::~RandomNumberGenerator(){
}