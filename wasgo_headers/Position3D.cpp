/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Position3D.h"

Position3D::Position3D(WasGoID p_wasgo_id) : Spatial(p_wasgo_id){
}
Position3D::Position3D(Spatial other) : Spatial(other._get_wasgo_id()){
    wasgo_id = _wasgo_Position3D_constructor();
}
Position3D::new_instance(){
    return Position3D(_wasgo_Position3D_constructor());
}