/* THIS FILE IS GENERATED */
#ifndef EDITORNAVIGATIONMESHGENERATOR_H
#define EDITORNAVIGATIONMESHGENERATOR_H

#include <stdint.h>

#include "Node.h"
#include "NavigationMesh.h"
#include "Object.h"
class EditorNavigationMeshGenerator : public Object{
public: EditorNavigationMeshGenerator();
void  bake(NavigationMesh nav_mesh, Node root_node);
void  clear(NavigationMesh nav_mesh);
};
#endif