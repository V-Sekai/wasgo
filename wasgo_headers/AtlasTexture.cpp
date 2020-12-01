/* THIS FILE IS GENERATED */
#include "AtlasTexture.h"
Texture AtlasTexture::get_atlas(){
	return Texture::from_wasgo_id(_wasgo_AtlasTexture_wrapper_get_atlas(wasgo_id));
}
Rect2 AtlasTexture::get_margin(){
	return Rect2::from_wasgo_id(_wasgo_AtlasTexture_wrapper_get_margin(wasgo_id));
}
Rect2 AtlasTexture::get_region(){
	return Rect2::from_wasgo_id(_wasgo_AtlasTexture_wrapper_get_region(wasgo_id));
}
bool AtlasTexture::has_filter_clip(){
	return (bool) _wasgo_AtlasTexture_wrapper_has_filter_clip(wasgo_id);
}
void AtlasTexture::set_atlas(Texture p_atlas){
	_wasgo_AtlasTexture_wrapper_set_atlas(wasgo_id, ((Variant) p_atlas).get_wasgo_id());
}
void AtlasTexture::set_filter_clip(bool p_enable){
	_wasgo_AtlasTexture_wrapper_set_filter_clip(wasgo_id, p_enable);
}
void AtlasTexture::set_margin(Rect2 p_margin){
	_wasgo_AtlasTexture_wrapper_set_margin(wasgo_id, ((Variant) p_margin).get_wasgo_id());
}
void AtlasTexture::set_region(Rect2 p_region){
	_wasgo_AtlasTexture_wrapper_set_region(wasgo_id, ((Variant) p_region).get_wasgo_id());
}