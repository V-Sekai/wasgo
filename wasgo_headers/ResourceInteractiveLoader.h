/* THIS FILE IS GENERATED */
#ifndef RESOURCEINTERACTIVELOADER_H
#define RESOURCEINTERACTIVELOADER_H

#include <stdint.h>

#include "Erro.h"
#include "Resource.h"
#include "Reference.h"
class ResourceInteractiveLoader : public Reference{
public: ResourceInteractiveLoader();
Resource  get_resource();
Resource  get_resource();
int  get_stage();
int  get_stage();
int  get_stage_count();
int  get_stage_count();
enum.Error  poll();
enum.Error  poll();
enum.Error  wait();
enum.Error  wait();
};
#endif