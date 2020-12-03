/* THIS FILE IS GENERATED */
#ifndef SKELETON2D_H
#define SKELETON2D_H

#include "wasgo\wasgo.h"

#include "RID.h"
#include "Node2D.h"
#include "Bone2D.h"
class Skeleton2D : public Node2D{
public:
Bone2D get_bone(int p_idx);
int get_bone_count();
RID get_skeleton();

protected:
Skeleton2D(WasGoId p_wasgo_id);
public:
Skeleton2D();
~Skeleton2D();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_Skeleton2D_wrapper_get_bone(WasGoId wasgo_id, int p_idx);
int _wasgo_Skeleton2D_wrapper_get_bone_count(WasGoId wasgo_id);
void _wasgo_Skeleton2D_wrapper_get_skeleton(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_Skeleton2D_constructor();
    void _wasgo_Skeleton2D_destructor(WasGoId p_wasgo_id);
            
}
#endif