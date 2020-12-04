/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "SpriteFrames.h"
void SpriteFrames::add_animation(String p_anim){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_SpriteFrames_wrapper_add_animation(wasgo_id, wasgo_buffer_anim, wasgo_size_anim);
}
void SpriteFrames::add_frame(String p_anim, Texture p_frame, int p_at_position = (int) -1){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_SpriteFrames_wrapper_add_frame(wasgo_id, wasgo_buffer_anim, wasgo_size_anim, p_frame._get_wasgo_id(), p_at_position);
}
void SpriteFrames::clear(String p_anim){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_SpriteFrames_wrapper_clear(wasgo_id, wasgo_buffer_anim, wasgo_size_anim);
}
void SpriteFrames::clear_all(){
	_wasgo_SpriteFrames_wrapper_clear_all(wasgo_id);
}
bool SpriteFrames::get_animation_loop(String p_anim){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	return (bool) _wasgo_SpriteFrames_wrapper_get_animation_loop(wasgo_id, wasgo_buffer_anim, wasgo_size_anim);
}
PoolStringArray SpriteFrames::get_animation_names(){
	return PoolStringArray(_wasgo_SpriteFrames_wrapper_get_animation_names(wasgo_id));
}
float SpriteFrames::get_animation_speed(String p_anim){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	return (float) _wasgo_SpriteFrames_wrapper_get_animation_speed(wasgo_id, wasgo_buffer_anim, wasgo_size_anim);
}
Texture SpriteFrames::get_frame(String p_anim, int p_idx){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	return Texture(_wasgo_SpriteFrames_wrapper_get_frame(wasgo_id, wasgo_buffer_anim, wasgo_size_anim, p_idx));
}
int SpriteFrames::get_frame_count(String p_anim){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	return (int) _wasgo_SpriteFrames_wrapper_get_frame_count(wasgo_id, wasgo_buffer_anim, wasgo_size_anim);
}
bool SpriteFrames::has_animation(String p_anim){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	return (bool) _wasgo_SpriteFrames_wrapper_has_animation(wasgo_id, wasgo_buffer_anim, wasgo_size_anim);
}
void SpriteFrames::remove_animation(String p_anim){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_SpriteFrames_wrapper_remove_animation(wasgo_id, wasgo_buffer_anim, wasgo_size_anim);
}
void SpriteFrames::remove_frame(String p_anim, int p_idx){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_SpriteFrames_wrapper_remove_frame(wasgo_id, wasgo_buffer_anim, wasgo_size_anim, p_idx);
}
void SpriteFrames::rename_animation(String p_anim, String p_newname){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    

    Variant wasgo_var_newname = p_newname;
    int wasgo_size_newname = String(p_newname).size();
    uint8_t wasgo_buffer_newname[wasgo_size_newname];
    encode_variant(wasgo_var_newname, wasgo_buffer_newname, wasgo_size_newname);
    
	_wasgo_SpriteFrames_wrapper_rename_animation(wasgo_id, wasgo_buffer_anim, wasgo_size_anim, wasgo_buffer_newname, wasgo_size_newname);
}
void SpriteFrames::set_animation_loop(String p_anim, bool p_loop){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_SpriteFrames_wrapper_set_animation_loop(wasgo_id, wasgo_buffer_anim, wasgo_size_anim, p_loop);
}
void SpriteFrames::set_animation_speed(String p_anim, float p_speed){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_SpriteFrames_wrapper_set_animation_speed(wasgo_id, wasgo_buffer_anim, wasgo_size_anim, p_speed);
}
void SpriteFrames::set_frame(String p_anim, int p_idx, Texture p_txt){

    Variant wasgo_var_anim = p_anim;
    int wasgo_size_anim = String(p_anim).size();
    uint8_t wasgo_buffer_anim[wasgo_size_anim];
    encode_variant(wasgo_var_anim, wasgo_buffer_anim, wasgo_size_anim);
    
	_wasgo_SpriteFrames_wrapper_set_frame(wasgo_id, wasgo_buffer_anim, wasgo_size_anim, p_idx, p_txt._get_wasgo_id());
}

SpriteFrames::SpriteFrames(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
SpriteFrames::SpriteFrames(Resource other) : Resource(other._get_wasgo_id()){
    wasgo_id = _wasgo_SpriteFrames_constructor();
}
SpriteFrames::new_instance(){
    return SpriteFrames(_wasgo_SpriteFrames_constructor());
}