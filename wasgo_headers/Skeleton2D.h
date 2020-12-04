/* THIS FILE IS GENERATED */
#ifndef SKELETON2D_H
#define SKELETON2D_H

#include "wasgo\wasgo.h"

#include "Node2D.h"
#include "Bone2D.h"
#include "RID.h"
class Skeleton2D : public Node2D{
public:
Bone2D get_bone(int p_idx);
int get_bone_count();
RID get_skeleton();

protected:
public:
explicit Skeleton2D(WasGoID p_wasgo_id);
explicit Skeleton2D(Node2D other);
Skeleton2D new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_Skeleton2D_wrapper_get_bone(WasGoID wasgo_id, int p_idx);
int _wasgo_Skeleton2D_wrapper_get_bone_count(WasGoID wasgo_id);
void _wasgo_Skeleton2D_wrapper_get_skeleton(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);

    //constructor wrappers
    WasGoID _wasgo_Skeleton2D_constructor();
            
}
#endif