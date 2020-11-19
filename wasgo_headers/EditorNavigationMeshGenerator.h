/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Node.h"
#include "Object.h"
#include "NavigationMesh.h"
class EditorNavigationMeshGenerator : public Object{
public: EditorNavigationMeshGenerator();
void  bake(NavigationMesh nav_mesh, Node root_node);
void  clear(NavigationMesh nav_mesh);
};