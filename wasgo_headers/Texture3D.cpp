/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Texture3D.h"

Texture3D::Texture3D(WasGoID p_wasgo_id) : TextureLayered(p_wasgo_id){
}
Texture3D::Texture3D(TextureLayered other) : TextureLayered(other._get_wasgo_id()){
    wasgo_id = _wasgo_Texture3D_constructor();
}
Texture3D::new_instance(){
    return Texture3D(_wasgo_Texture3D_constructor());
}