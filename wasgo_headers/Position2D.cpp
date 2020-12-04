/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Position2D.h"

Position2D::Position2D(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
Position2D::Position2D(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_Position2D_constructor();
}
Position2D::new_instance(){
    return Position2D(_wasgo_Position2D_constructor());
}