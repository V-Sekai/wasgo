/* THIS FILE IS GENERATED */
#include "NavigationPolygonInstance.h"
NavigationPolygon NavigationPolygonInstance::get_navigation_polygon(){
	return NavigationPolygon::from_wasgo_id(_wasgo_NavigationPolygonInstance_wrapper_get_navigation_polygon(wasgo_id));
}
bool NavigationPolygonInstance::is_enabled(){
	return (bool) _wasgo_NavigationPolygonInstance_wrapper_is_enabled(wasgo_id);
}
void NavigationPolygonInstance::set_enabled(bool p_enabled){
	_wasgo_NavigationPolygonInstance_wrapper_set_enabled(wasgo_id, p_enabled);
}
void NavigationPolygonInstance::set_navigation_polygon(NavigationPolygon p_navpoly){
	_wasgo_NavigationPolygonInstance_wrapper_set_navigation_polygon(wasgo_id, ((Variant) p_navpoly).get_wasgo_id());
}