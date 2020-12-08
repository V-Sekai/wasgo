/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RandomNumberGenerator.h"
int RandomNumberGenerator::get_seed(){
	return (int) _wasgo_RandomNumberGenerator_wrapper_get_seed(wasgo_id);
}
float RandomNumberGenerator::randf(){
	return (float) _wasgo_RandomNumberGenerator_wrapper_randf(wasgo_id);
}
float RandomNumberGenerator::randf_range(float p_from, float p_to){
	return (float) _wasgo_RandomNumberGenerator_wrapper_randf_range(wasgo_id, p_from, p_to);
}
float RandomNumberGenerator::randfn(float p_mean, float p_deviation){
	return (float) _wasgo_RandomNumberGenerator_wrapper_randfn(wasgo_id, p_mean, p_deviation);
}
int RandomNumberGenerator::randi(){
	return (int) _wasgo_RandomNumberGenerator_wrapper_randi(wasgo_id);
}
int RandomNumberGenerator::randi_range(int p_from, int p_to){
	return (int) _wasgo_RandomNumberGenerator_wrapper_randi_range(wasgo_id, p_from, p_to);
}
void RandomNumberGenerator::randomize(){
	_wasgo_RandomNumberGenerator_wrapper_randomize(wasgo_id);
}
void RandomNumberGenerator::set_seed(int p_seed){
	_wasgo_RandomNumberGenerator_wrapper_set_seed(wasgo_id, p_seed);
}

RandomNumberGenerator::RandomNumberGenerator(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
RandomNumberGenerator::RandomNumberGenerator(Reference other) : Reference(other._get_wasgo_id()){
}
RandomNumberGenerator::RandomNumberGenerator():Reference(){
}
RandomNumberGenerator RandomNumberGenerator::new_instance(){
    return RandomNumberGenerator(_wasgo_RandomNumberGenerator_constructor());
}
WasGoID RandomNumberGenerator::_get_wasgo_id(){
    return wasgo_id;
}
RandomNumberGenerator::operator bool(){
    return (bool) wasgo_id;
}
