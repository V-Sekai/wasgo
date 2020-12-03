/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Position3D.h"

Position3D::Position3D(WasGoId p_wasgo_id) : Spatial(p_wasgo_id){
}
Position3D::Position3D(){
    wasgo_id = _wasgo_Position3D_constructor();
}
Position3D::~Position3D(){
    _wasgo_Position3D_destructor(wasgo_id);
}