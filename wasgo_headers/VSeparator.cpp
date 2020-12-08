/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "VSeparator.h"

VSeparator::VSeparator(WasGoID p_wasgo_id) : Separator(p_wasgo_id){
}
VSeparator::VSeparator(Separator other) : Separator(other._get_wasgo_id()){
}
VSeparator::VSeparator():Separator(){
}
VSeparator VSeparator::new_instance(){
    return VSeparator(_wasgo_VSeparator_constructor());
}
WasGoID VSeparator::_get_wasgo_id(){
    return wasgo_id;
}
VSeparator::operator bool(){
    return (bool) wasgo_id;
}
