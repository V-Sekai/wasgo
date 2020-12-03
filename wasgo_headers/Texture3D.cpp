/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Texture3D.h"

Texture3D::Texture3D(WasGoId p_wasgo_id) : TextureLayered(p_wasgo_id){
}
Texture3D::Texture3D(){
    wasgo_id = _wasgo_Texture3D_constructor();
}
Texture3D::~Texture3D(){
    _wasgo_Texture3D_destructor(wasgo_id);
}