/* THIS FILE IS GENERATED */
#ifndef MULTIMESHINSTANCE_H
#define MULTIMESHINSTANCE_H

#include <stdint.h>

#include "MultiMesh.h"
#include "GeometryInstance.h"
class MultiMeshInstance : public GeometryInstance{
public: MultiMeshInstance();
MultiMesh  get_multimesh();
MultiMesh  get_multimesh();
void  set_multimesh(MultiMesh multimesh);
};
#endif