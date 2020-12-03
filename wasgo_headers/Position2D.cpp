/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Position2D.h"

Position2D::Position2D(WasGoId p_wasgo_id) : Node2D(p_wasgo_id){
}
Position2D::Position2D(){
    wasgo_id = _wasgo_Position2D_constructor();
}
Position2D::~Position2D(){
    _wasgo_Position2D_destructor(wasgo_id);
}