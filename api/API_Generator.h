#ifndef WASGO_API_GENERATOR_H
#define WASGO_API_GENERATOR_H

#include "core/engine.h"
#include "core/variant.h"
#include "scene/main/node.h"

class WasGoAPIGen{

public:
	static void write(char * file_path);
	static Dictionary api_dict();
};

#endif