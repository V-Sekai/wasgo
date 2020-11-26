/* THIS FILE IS GENERATED */
#ifndef _MUTEX_H
#define _MUTEX_H

#include <stdint.h>

#include "Erro.h"
#include "Reference.h"
class _Mutex : public Reference{
public: _Mutex();
void  lock();
void  lock();
enum.Error  try_lock();
enum.Error  try_lock();
void  unlock();
void  unlock();
};
#endif