/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "RID.h"
#include "Node2D.h"
#include "Bone2D.h"
class Skeleton2D : public Node2D{
public: Skeleton2D();
void  _update_bone_setup();
void  _update_bone_setup();
void  _update_transform();
void  _update_transform();
Bone2D  get_bone(int idx);
int  get_bone_count();
int  get_bone_count();
RID  get_skeleton();
RID  get_skeleton();
};