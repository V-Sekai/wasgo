/* THIS FILE IS GENERATED */
#include "Physics2DServer.h"
void Physics2DServer::area_add_shape(RID p_area, RID p_shape, Transform2D p_transform = Transform2D(((1, 0), (0, 1), (0, 0))), bool p_disabled = (bool) false){
	_wasgo_Physics2DServer_wrapper_area_add_shape(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_shape).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id(), p_disabled);
}
void Physics2DServer::area_attach_canvas_instance_id(RID p_area, int p_id){
	_wasgo_Physics2DServer_wrapper_area_attach_canvas_instance_id(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_id);
}
void Physics2DServer::area_attach_object_instance_id(RID p_area, int p_id){
	_wasgo_Physics2DServer_wrapper_area_attach_object_instance_id(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_id);
}
void Physics2DServer::area_clear_shapes(RID p_area){
	_wasgo_Physics2DServer_wrapper_area_clear_shapes(wasgo_id, ((Variant) p_area).get_wasgo_id());
}
RID Physics2DServer::area_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_area_create(wasgo_id));
}
int Physics2DServer::area_get_canvas_instance_id(RID p_area){
	return (int) _wasgo_Physics2DServer_wrapper_area_get_canvas_instance_id(wasgo_id, ((Variant) p_area).get_wasgo_id());
}
int Physics2DServer::area_get_object_instance_id(RID p_area){
	return (int) _wasgo_Physics2DServer_wrapper_area_get_object_instance_id(wasgo_id, ((Variant) p_area).get_wasgo_id());
}
Variant Physics2DServer::area_get_param(RID p_area, Physics2DServer::AreaParameter p_param){
	return Variant::from_wasgo_id(_wasgo_Physics2DServer_wrapper_area_get_param(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_param).get_wasgo_id()));
}
RID Physics2DServer::area_get_shape(RID p_area, int p_shape_idx){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_area_get_shape(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx));
}
int Physics2DServer::area_get_shape_count(RID p_area){
	return (int) _wasgo_Physics2DServer_wrapper_area_get_shape_count(wasgo_id, ((Variant) p_area).get_wasgo_id());
}
Transform2D Physics2DServer::area_get_shape_transform(RID p_area, int p_shape_idx){
	return Transform2D::from_wasgo_id(_wasgo_Physics2DServer_wrapper_area_get_shape_transform(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx));
}
RID Physics2DServer::area_get_space(RID p_area){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_area_get_space(wasgo_id, ((Variant) p_area).get_wasgo_id()));
}
Physics2DServer::AreaSpaceOverrideMode Physics2DServer::area_get_space_override_mode(RID p_area){
	return Physics2DServer::AreaSpaceOverrideMode::from_wasgo_id(_wasgo_Physics2DServer_wrapper_area_get_space_override_mode(wasgo_id, ((Variant) p_area).get_wasgo_id()));
}
Transform2D Physics2DServer::area_get_transform(RID p_area){
	return Transform2D::from_wasgo_id(_wasgo_Physics2DServer_wrapper_area_get_transform(wasgo_id, ((Variant) p_area).get_wasgo_id()));
}
void Physics2DServer::area_remove_shape(RID p_area, int p_shape_idx){
	_wasgo_Physics2DServer_wrapper_area_remove_shape(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx);
}
void Physics2DServer::area_set_area_monitor_callback(RID p_area, Object p_receiver, String p_method){
	_wasgo_Physics2DServer_wrapper_area_set_area_monitor_callback(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_receiver).get_wasgo_id(), ((Variant) p_method).get_wasgo_id());
}
void Physics2DServer::area_set_collision_layer(RID p_area, int p_layer){
	_wasgo_Physics2DServer_wrapper_area_set_collision_layer(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_layer);
}
void Physics2DServer::area_set_collision_mask(RID p_area, int p_mask){
	_wasgo_Physics2DServer_wrapper_area_set_collision_mask(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_mask);
}
void Physics2DServer::area_set_monitor_callback(RID p_area, Object p_receiver, String p_method){
	_wasgo_Physics2DServer_wrapper_area_set_monitor_callback(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_receiver).get_wasgo_id(), ((Variant) p_method).get_wasgo_id());
}
void Physics2DServer::area_set_monitorable(RID p_area, bool p_monitorable){
	_wasgo_Physics2DServer_wrapper_area_set_monitorable(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_monitorable);
}
void Physics2DServer::area_set_param(RID p_area, Physics2DServer::AreaParameter p_param, Variant p_value){
	_wasgo_Physics2DServer_wrapper_area_set_param(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), ((Variant) p_value).get_wasgo_id());
}
void Physics2DServer::area_set_shape(RID p_area, int p_shape_idx, RID p_shape){
	_wasgo_Physics2DServer_wrapper_area_set_shape(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx, ((Variant) p_shape).get_wasgo_id());
}
void Physics2DServer::area_set_shape_disabled(RID p_area, int p_shape_idx, bool p_disabled){
	_wasgo_Physics2DServer_wrapper_area_set_shape_disabled(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx, p_disabled);
}
void Physics2DServer::area_set_shape_transform(RID p_area, int p_shape_idx, Transform2D p_transform){
	_wasgo_Physics2DServer_wrapper_area_set_shape_transform(wasgo_id, ((Variant) p_area).get_wasgo_id(), p_shape_idx, ((Variant) p_transform).get_wasgo_id());
}
void Physics2DServer::area_set_space(RID p_area, RID p_space){
	_wasgo_Physics2DServer_wrapper_area_set_space(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_space).get_wasgo_id());
}
void Physics2DServer::area_set_space_override_mode(RID p_area, Physics2DServer::AreaSpaceOverrideMode p_mode){
	_wasgo_Physics2DServer_wrapper_area_set_space_override_mode(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void Physics2DServer::area_set_transform(RID p_area, Transform2D p_transform){
	_wasgo_Physics2DServer_wrapper_area_set_transform(wasgo_id, ((Variant) p_area).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id());
}
void Physics2DServer::body_add_central_force(RID p_body, Vector2 p_force){
	_wasgo_Physics2DServer_wrapper_body_add_central_force(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_force).get_wasgo_id());
}
void Physics2DServer::body_add_collision_exception(RID p_body, RID p_excepted_body){
	_wasgo_Physics2DServer_wrapper_body_add_collision_exception(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_excepted_body).get_wasgo_id());
}
void Physics2DServer::body_add_force(RID p_body, Vector2 p_offset, Vector2 p_force){
	_wasgo_Physics2DServer_wrapper_body_add_force(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_offset).get_wasgo_id(), ((Variant) p_force).get_wasgo_id());
}
void Physics2DServer::body_add_shape(RID p_body, RID p_shape, Transform2D p_transform = Transform2D(((1, 0), (0, 1), (0, 0))), bool p_disabled = (bool) false){
	_wasgo_Physics2DServer_wrapper_body_add_shape(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_shape).get_wasgo_id(), ((Variant) p_transform).get_wasgo_id(), p_disabled);
}
void Physics2DServer::body_add_torque(RID p_body, float p_torque){
	_wasgo_Physics2DServer_wrapper_body_add_torque(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_torque);
}
void Physics2DServer::body_apply_central_impulse(RID p_body, Vector2 p_impulse){
	_wasgo_Physics2DServer_wrapper_body_apply_central_impulse(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_impulse).get_wasgo_id());
}
void Physics2DServer::body_apply_impulse(RID p_body, Vector2 p_position, Vector2 p_impulse){
	_wasgo_Physics2DServer_wrapper_body_apply_impulse(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_position).get_wasgo_id(), ((Variant) p_impulse).get_wasgo_id());
}
void Physics2DServer::body_apply_torque_impulse(RID p_body, float p_impulse){
	_wasgo_Physics2DServer_wrapper_body_apply_torque_impulse(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_impulse);
}
void Physics2DServer::body_attach_canvas_instance_id(RID p_body, int p_id){
	_wasgo_Physics2DServer_wrapper_body_attach_canvas_instance_id(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_id);
}
void Physics2DServer::body_attach_object_instance_id(RID p_body, int p_id){
	_wasgo_Physics2DServer_wrapper_body_attach_object_instance_id(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_id);
}
void Physics2DServer::body_clear_shapes(RID p_body){
	_wasgo_Physics2DServer_wrapper_body_clear_shapes(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
RID Physics2DServer::body_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_body_create(wasgo_id));
}
int Physics2DServer::body_get_canvas_instance_id(RID p_body){
	return (int) _wasgo_Physics2DServer_wrapper_body_get_canvas_instance_id(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
int Physics2DServer::body_get_collision_layer(RID p_body){
	return (int) _wasgo_Physics2DServer_wrapper_body_get_collision_layer(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
int Physics2DServer::body_get_collision_mask(RID p_body){
	return (int) _wasgo_Physics2DServer_wrapper_body_get_collision_mask(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
Physics2DServer::CCDMode Physics2DServer::body_get_continuous_collision_detection_mode(RID p_body){
	return Physics2DServer::CCDMode::from_wasgo_id(_wasgo_Physics2DServer_wrapper_body_get_continuous_collision_detection_mode(wasgo_id, ((Variant) p_body).get_wasgo_id()));
}
Physics2DDirectBodyState Physics2DServer::body_get_direct_state(RID p_body){
	return Physics2DDirectBodyState::from_wasgo_id(_wasgo_Physics2DServer_wrapper_body_get_direct_state(wasgo_id, ((Variant) p_body).get_wasgo_id()));
}
int Physics2DServer::body_get_max_contacts_reported(RID p_body){
	return (int) _wasgo_Physics2DServer_wrapper_body_get_max_contacts_reported(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
Physics2DServer::BodyMode Physics2DServer::body_get_mode(RID p_body){
	return Physics2DServer::BodyMode::from_wasgo_id(_wasgo_Physics2DServer_wrapper_body_get_mode(wasgo_id, ((Variant) p_body).get_wasgo_id()));
}
int Physics2DServer::body_get_object_instance_id(RID p_body){
	return (int) _wasgo_Physics2DServer_wrapper_body_get_object_instance_id(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
float Physics2DServer::body_get_param(RID p_body, Physics2DServer::BodyParameter p_param){
	return (float) _wasgo_Physics2DServer_wrapper_body_get_param(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
RID Physics2DServer::body_get_shape(RID p_body, int p_shape_idx){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_body_get_shape(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx));
}
int Physics2DServer::body_get_shape_count(RID p_body){
	return (int) _wasgo_Physics2DServer_wrapper_body_get_shape_count(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
Variant Physics2DServer::body_get_shape_metadata(RID p_body, int p_shape_idx){
	return Variant::from_wasgo_id(_wasgo_Physics2DServer_wrapper_body_get_shape_metadata(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx));
}
Transform2D Physics2DServer::body_get_shape_transform(RID p_body, int p_shape_idx){
	return Transform2D::from_wasgo_id(_wasgo_Physics2DServer_wrapper_body_get_shape_transform(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx));
}
RID Physics2DServer::body_get_space(RID p_body){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_body_get_space(wasgo_id, ((Variant) p_body).get_wasgo_id()));
}
Variant Physics2DServer::body_get_state(RID p_body, Physics2DServer::BodyState p_state){
	return Variant::from_wasgo_id(_wasgo_Physics2DServer_wrapper_body_get_state(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_state).get_wasgo_id()));
}
bool Physics2DServer::body_is_omitting_force_integration(RID p_body){
	return (bool) _wasgo_Physics2DServer_wrapper_body_is_omitting_force_integration(wasgo_id, ((Variant) p_body).get_wasgo_id());
}
void Physics2DServer::body_remove_collision_exception(RID p_body, RID p_excepted_body){
	_wasgo_Physics2DServer_wrapper_body_remove_collision_exception(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_excepted_body).get_wasgo_id());
}
void Physics2DServer::body_remove_shape(RID p_body, int p_shape_idx){
	_wasgo_Physics2DServer_wrapper_body_remove_shape(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx);
}
void Physics2DServer::body_set_axis_velocity(RID p_body, Vector2 p_axis_velocity){
	_wasgo_Physics2DServer_wrapper_body_set_axis_velocity(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_axis_velocity).get_wasgo_id());
}
void Physics2DServer::body_set_collision_layer(RID p_body, int p_layer){
	_wasgo_Physics2DServer_wrapper_body_set_collision_layer(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_layer);
}
void Physics2DServer::body_set_collision_mask(RID p_body, int p_mask){
	_wasgo_Physics2DServer_wrapper_body_set_collision_mask(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_mask);
}
void Physics2DServer::body_set_continuous_collision_detection_mode(RID p_body, Physics2DServer::CCDMode p_mode){
	_wasgo_Physics2DServer_wrapper_body_set_continuous_collision_detection_mode(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void Physics2DServer::body_set_force_integration_callback(RID p_body, Object p_receiver, String p_method, Variant p_userdata = (Variant) ""){
	_wasgo_Physics2DServer_wrapper_body_set_force_integration_callback(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_receiver).get_wasgo_id(), ((Variant) p_method).get_wasgo_id(), ((Variant) p_userdata).get_wasgo_id());
}
void Physics2DServer::body_set_max_contacts_reported(RID p_body, int p_amount){
	_wasgo_Physics2DServer_wrapper_body_set_max_contacts_reported(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_amount);
}
void Physics2DServer::body_set_mode(RID p_body, Physics2DServer::BodyMode p_mode){
	_wasgo_Physics2DServer_wrapper_body_set_mode(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_mode).get_wasgo_id());
}
void Physics2DServer::body_set_omit_force_integration(RID p_body, bool p_enable){
	_wasgo_Physics2DServer_wrapper_body_set_omit_force_integration(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_enable);
}
void Physics2DServer::body_set_param(RID p_body, Physics2DServer::BodyParameter p_param, float p_value){
	_wasgo_Physics2DServer_wrapper_body_set_param(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}
void Physics2DServer::body_set_shape(RID p_body, int p_shape_idx, RID p_shape){
	_wasgo_Physics2DServer_wrapper_body_set_shape(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx, ((Variant) p_shape).get_wasgo_id());
}
void Physics2DServer::body_set_shape_as_one_way_collision(RID p_body, int p_shape_idx, bool p_enable, float p_margin){
	_wasgo_Physics2DServer_wrapper_body_set_shape_as_one_way_collision(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx, p_enable, p_margin);
}
void Physics2DServer::body_set_shape_disabled(RID p_body, int p_shape_idx, bool p_disabled){
	_wasgo_Physics2DServer_wrapper_body_set_shape_disabled(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx, p_disabled);
}
void Physics2DServer::body_set_shape_metadata(RID p_body, int p_shape_idx, Variant p_metadata){
	_wasgo_Physics2DServer_wrapper_body_set_shape_metadata(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx, ((Variant) p_metadata).get_wasgo_id());
}
void Physics2DServer::body_set_shape_transform(RID p_body, int p_shape_idx, Transform2D p_transform){
	_wasgo_Physics2DServer_wrapper_body_set_shape_transform(wasgo_id, ((Variant) p_body).get_wasgo_id(), p_shape_idx, ((Variant) p_transform).get_wasgo_id());
}
void Physics2DServer::body_set_space(RID p_body, RID p_space){
	_wasgo_Physics2DServer_wrapper_body_set_space(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_space).get_wasgo_id());
}
void Physics2DServer::body_set_state(RID p_body, Physics2DServer::BodyState p_state, Variant p_value){
	_wasgo_Physics2DServer_wrapper_body_set_state(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_state).get_wasgo_id(), ((Variant) p_value).get_wasgo_id());
}
bool Physics2DServer::body_test_motion(RID p_body, Transform2D p_from, Vector2 p_motion, bool p_infinite_inertia, float p_margin = (float) 0.08, Physics2DTestMotionResult p_result = (Physics2DTestMotionResult) ""){
	return (bool) _wasgo_Physics2DServer_wrapper_body_test_motion(wasgo_id, ((Variant) p_body).get_wasgo_id(), ((Variant) p_from).get_wasgo_id(), ((Variant) p_motion).get_wasgo_id(), p_infinite_inertia, p_margin, ((Variant) p_result).get_wasgo_id());
}
RID Physics2DServer::capsule_shape_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_capsule_shape_create(wasgo_id));
}
RID Physics2DServer::circle_shape_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_circle_shape_create(wasgo_id));
}
RID Physics2DServer::concave_polygon_shape_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_concave_polygon_shape_create(wasgo_id));
}
RID Physics2DServer::convex_polygon_shape_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_convex_polygon_shape_create(wasgo_id));
}
RID Physics2DServer::damped_spring_joint_create(Vector2 p_anchor_a, Vector2 p_anchor_b, RID p_body_a, RID p_body_b = (RID) [rid]){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_damped_spring_joint_create(wasgo_id, ((Variant) p_anchor_a).get_wasgo_id(), ((Variant) p_anchor_b).get_wasgo_id(), ((Variant) p_body_a).get_wasgo_id(), ((Variant) p_body_b).get_wasgo_id()));
}
float Physics2DServer::damped_string_joint_get_param(RID p_joint, Physics2DServer::DampedStringParam p_param){
	return (float) _wasgo_Physics2DServer_wrapper_damped_string_joint_get_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
void Physics2DServer::damped_string_joint_set_param(RID p_joint, Physics2DServer::DampedStringParam p_param, float p_value){
	_wasgo_Physics2DServer_wrapper_damped_string_joint_set_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}
void Physics2DServer::free_rid(RID p_rid){
	_wasgo_Physics2DServer_wrapper_free_rid(wasgo_id, ((Variant) p_rid).get_wasgo_id());
}
int Physics2DServer::get_process_info(Physics2DServer::ProcessInfo p_process_info){
	return (int) _wasgo_Physics2DServer_wrapper_get_process_info(wasgo_id, ((Variant) p_process_info).get_wasgo_id());
}
RID Physics2DServer::groove_joint_create(Vector2 p_groove1_a, Vector2 p_groove2_a, Vector2 p_anchor_b, RID p_body_a = (RID) [rid], RID p_body_b = (RID) [rid]){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_groove_joint_create(wasgo_id, ((Variant) p_groove1_a).get_wasgo_id(), ((Variant) p_groove2_a).get_wasgo_id(), ((Variant) p_anchor_b).get_wasgo_id(), ((Variant) p_body_a).get_wasgo_id(), ((Variant) p_body_b).get_wasgo_id()));
}
float Physics2DServer::joint_get_param(RID p_joint, Physics2DServer::JointParam p_param){
	return (float) _wasgo_Physics2DServer_wrapper_joint_get_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
Physics2DServer::JointType Physics2DServer::joint_get_type(RID p_joint){
	return Physics2DServer::JointType::from_wasgo_id(_wasgo_Physics2DServer_wrapper_joint_get_type(wasgo_id, ((Variant) p_joint).get_wasgo_id()));
}
void Physics2DServer::joint_set_param(RID p_joint, Physics2DServer::JointParam p_param, float p_value){
	_wasgo_Physics2DServer_wrapper_joint_set_param(wasgo_id, ((Variant) p_joint).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}
RID Physics2DServer::line_shape_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_line_shape_create(wasgo_id));
}
RID Physics2DServer::pin_joint_create(Vector2 p_anchor, RID p_body_a, RID p_body_b = (RID) [rid]){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_pin_joint_create(wasgo_id, ((Variant) p_anchor).get_wasgo_id(), ((Variant) p_body_a).get_wasgo_id(), ((Variant) p_body_b).get_wasgo_id()));
}
RID Physics2DServer::ray_shape_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_ray_shape_create(wasgo_id));
}
RID Physics2DServer::rectangle_shape_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_rectangle_shape_create(wasgo_id));
}
RID Physics2DServer::segment_shape_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_segment_shape_create(wasgo_id));
}
void Physics2DServer::set_active(bool p_active){
	_wasgo_Physics2DServer_wrapper_set_active(wasgo_id, p_active);
}
Variant Physics2DServer::shape_get_data(RID p_shape){
	return Variant::from_wasgo_id(_wasgo_Physics2DServer_wrapper_shape_get_data(wasgo_id, ((Variant) p_shape).get_wasgo_id()));
}
Physics2DServer::ShapeType Physics2DServer::shape_get_type(RID p_shape){
	return Physics2DServer::ShapeType::from_wasgo_id(_wasgo_Physics2DServer_wrapper_shape_get_type(wasgo_id, ((Variant) p_shape).get_wasgo_id()));
}
void Physics2DServer::shape_set_data(RID p_shape, Variant p_data){
	_wasgo_Physics2DServer_wrapper_shape_set_data(wasgo_id, ((Variant) p_shape).get_wasgo_id(), ((Variant) p_data).get_wasgo_id());
}
RID Physics2DServer::space_create(){
	return RID::from_wasgo_id(_wasgo_Physics2DServer_wrapper_space_create(wasgo_id));
}
Physics2DDirectSpaceState Physics2DServer::space_get_direct_state(RID p_space){
	return Physics2DDirectSpaceState::from_wasgo_id(_wasgo_Physics2DServer_wrapper_space_get_direct_state(wasgo_id, ((Variant) p_space).get_wasgo_id()));
}
float Physics2DServer::space_get_param(RID p_space, Physics2DServer::SpaceParameter p_param){
	return (float) _wasgo_Physics2DServer_wrapper_space_get_param(wasgo_id, ((Variant) p_space).get_wasgo_id(), ((Variant) p_param).get_wasgo_id());
}
bool Physics2DServer::space_is_active(RID p_space){
	return (bool) _wasgo_Physics2DServer_wrapper_space_is_active(wasgo_id, ((Variant) p_space).get_wasgo_id());
}
void Physics2DServer::space_set_active(RID p_space, bool p_active){
	_wasgo_Physics2DServer_wrapper_space_set_active(wasgo_id, ((Variant) p_space).get_wasgo_id(), p_active);
}
void Physics2DServer::space_set_param(RID p_space, Physics2DServer::SpaceParameter p_param, float p_value){
	_wasgo_Physics2DServer_wrapper_space_set_param(wasgo_id, ((Variant) p_space).get_wasgo_id(), ((Variant) p_param).get_wasgo_id(), p_value);
}