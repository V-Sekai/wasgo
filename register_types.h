#ifndef WASGO_REGISTER_TYPES
#define WASGO_REGISTER_TYPES

#include "modules/register_module_types.h"

void initialize_wasgo_module(ModuleInitializationLevel p_level);
void uninitialize_wasgo_module(ModuleInitializationLevel p_level);

#endif