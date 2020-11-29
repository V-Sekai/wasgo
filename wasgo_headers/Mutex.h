/* THIS FILE IS GENERATED */
#ifndef MUTEX_H
#define MUTEX_H

#include "stdint.h"

#include "Reference.h"
#include "Error.h"
class Mutex : public Reference{
public: Mutex();
void lock();
Error try_lock();
void unlock();
};
#endif