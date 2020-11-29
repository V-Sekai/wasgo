/* THIS FILE IS GENERATED */
#ifndef SEMAPHORE_H
#define SEMAPHORE_H

#include "stdint.h"

#include "Reference.h"
#include "Error.h"
class Semaphore : public Reference{
public: Semaphore();
Error post();
Error wait();
};
#endif