/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Texture3D.h"

Texture3D::Texture3D(WasGoID p_wasgo_id) : TextureLayered(p_wasgo_id){
}
Texture3D::Texture3D(TextureLayered other) : TextureLayered(other._get_wasgo_id()){
}
Texture3D::Texture3D():TextureLayered(){
}
Texture3D Texture3D::new_instance(){
    return Texture3D(_wasgo_Texture3D_constructor());
}
WasGoID Texture3D::_get_wasgo_id(){
    return wasgo_id;
}
Texture3D::operator bool(){
    return (bool) wasgo_id;
}
