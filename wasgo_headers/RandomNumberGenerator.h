/* THIS FILE IS GENERATED */
#ifndef RANDOMNUMBERGENERATOR_H
#define RANDOMNUMBERGENERATOR_H

#include "stdint.h"

#include "Reference.h"
class RandomNumberGenerator : public Reference{
public: RandomNumberGenerator();
int get_seed();
float randf();
float randf_range(float p_from, float p_to);
float randfn(float p_mean = (float) 0, float p_deviation = (float) 1);
int randi();
int randi_range(int p_from, int p_to);
void randomize();
void set_seed(int p_seed);
};
#endif