/* THIS FILE IS GENERATED */
#ifndef RANDOMNUMBERGENERATOR_H
#define RANDOMNUMBERGENERATOR_H

#include <stdint.h>

#include "Reference.h"
class RandomNumberGenerator : public Reference{
public: RandomNumberGenerator();
int  get_seed();
int  get_seed();
float  randf();
float  randf();
float  randf_range(float from, float to);
float  randfn(float mean = 0, float deviation = 1);
int  randi();
int  randi();
int  randi_range(int from, int to);
void  randomize();
void  randomize();
void  set_seed(int seed);
};
#endif