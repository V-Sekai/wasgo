/* THIS FILE IS GENERATED */
#ifndef RESOURCEINTERACTIVELOADER_H
#define RESOURCEINTERACTIVELOADER_H

#include "stdint.h"

#include "Reference.h"
#include "Resource.h"
#include "Error.h"
class ResourceInteractiveLoader : public Reference{
public: ResourceInteractiveLoader();
Resource get_resource();
int get_stage();
int get_stage_count();
Error poll();
Error wait();
};
#endif