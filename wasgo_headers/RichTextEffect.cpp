/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "RichTextEffect.h"

RichTextEffect::RichTextEffect(WasGoID p_wasgo_id) : Resource(p_wasgo_id){
}
RichTextEffect::RichTextEffect(Resource other) : Resource(other._get_wasgo_id()){
}
RichTextEffect::RichTextEffect():Resource(){
}
RichTextEffect RichTextEffect::new_instance(){
    return RichTextEffect(_wasgo_RichTextEffect_constructor());
}
WasGoID RichTextEffect::_get_wasgo_id(){
    return wasgo_id;
}
RichTextEffect::operator bool(){
    return (bool) wasgo_id;
}
