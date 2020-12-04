/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "NavigationPolygonInstance.h"
NavigationPolygon NavigationPolygonInstance::get_navigation_polygon(){
	return NavigationPolygon(_wasgo_NavigationPolygonInstance_wrapper_get_navigation_polygon(wasgo_id));
}
bool NavigationPolygonInstance::is_enabled(){
	return (bool) _wasgo_NavigationPolygonInstance_wrapper_is_enabled(wasgo_id);
}
void NavigationPolygonInstance::set_enabled(bool p_enabled){
	_wasgo_NavigationPolygonInstance_wrapper_set_enabled(wasgo_id, p_enabled);
}
void NavigationPolygonInstance::set_navigation_polygon(NavigationPolygon p_navpoly){
	_wasgo_NavigationPolygonInstance_wrapper_set_navigation_polygon(wasgo_id, p_navpoly._get_wasgo_id());
}

NavigationPolygonInstance::NavigationPolygonInstance(WasGoID p_wasgo_id) : Node2D(p_wasgo_id){
}
NavigationPolygonInstance::NavigationPolygonInstance(Node2D other) : Node2D(other._get_wasgo_id()){
    wasgo_id = _wasgo_NavigationPolygonInstance_constructor();
}
NavigationPolygonInstance::new_instance(){
    return NavigationPolygonInstance(_wasgo_NavigationPolygonInstance_constructor());
}