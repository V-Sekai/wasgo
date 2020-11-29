/* THIS FILE IS GENERATED */
#ifndef OBJECT_H
#define OBJECT_H

#include "stdint.h"

class Object{
public: Object();
enum ConnectFlags{
CONNECT_DEFERRED,
CONNECT_PERSIST,
CONNECT_ONESHOT,
CONNECT_REFERENCE_COUNTED
};
void free();
};
#endif