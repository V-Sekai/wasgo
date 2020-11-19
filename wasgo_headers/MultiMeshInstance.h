/* THIS FILE IS GENERATED */
#ifndef MULTIMESHINSTANCE_H
#define MULTIMESHINSTANCE_H

#include <stdint.h>

#include "GeometryInstance.h"
#include "MultiMesh.h"
class MultiMeshInstance : public GeometryInstance{
public: MultiMeshInstance();
MultiMesh  get_multimesh();
MultiMesh  get_multimesh();
void  set_multimesh(MultiMesh multimesh);
};
#endif