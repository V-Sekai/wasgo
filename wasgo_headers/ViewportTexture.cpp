/* THIS FILE IS GENERATED */
#include "ViewportTexture.h"
NodePath ViewportTexture::get_viewport_path_in_scene(){
	return NodePath::from_wasgo_id(_wasgo_ViewportTexture_wrapper_get_viewport_path_in_scene(wasgo_id));
}
void ViewportTexture::set_viewport_path_in_scene(NodePath p_path){
	_wasgo_ViewportTexture_wrapper_set_viewport_path_in_scene(wasgo_id, ((Variant) path).get_wasgo_id());
}

ViewportTexture::ViewportTexture(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
ViewportTexture::~ViewportTexture(){
}