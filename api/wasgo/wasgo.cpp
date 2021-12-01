#include "wasgo.h"
#include "wasgo_encode_decode.h"
// #include "Object.h"
#include <stdio.h>
#include <string.h>

#define STRING_MAX 256

// Variant WasGo::get_property(String property, Variant::Type type) {
// 	//Sizes of buffers taken from https://docs.godotengine.org/en/stable/tutorials/misc/binary_serialization_api.html
// 	Variant ret;
// 	switch (type) {
// 		case (Variant::BOOL): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			return _wasgo_get_property_bool(name_buffer, name_buffer_size);
// 		} break;
// 		case (Variant::INT): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			Variant name = property;
// 			encode_variant(name, name_buffer, name_buffer_size);
// 			return _wasgo_get_property_int(name_buffer, name_buffer_size);
// 		} break;
// 		case (Variant::REAL): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			return _wasgo_get_property_float(name_buffer, name_buffer_size);
// 		} break;
// 		case (Variant::STRING): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[STRING_MAX];
// 			int value_buffer_size = STRING_MAX;
// 			_wasgo_get_property_string(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;

// 		} break;
// 		case (Variant::VECTOR2): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[12];
// 			int value_buffer_size = 12;
// 			_wasgo_get_property_vector2(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		case (Variant::RECT2): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[20];
// 			int value_buffer_size = 20;
// 			_wasgo_get_property_rect2(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		case (Variant::VECTOR3): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[16];
// 			int value_buffer_size = 16;
// 			_wasgo_get_property_vector3(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		case (Variant::TRANSFORM2D): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[28];
// 			int value_buffer_size = 28;
// 			_wasgo_get_property_transform2d(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		case (Variant::PLANE): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[20];
// 			int value_buffer_size = 20;
// 			_wasgo_get_property_plane(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		case (Variant::QUAT): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[20];
// 			int value_buffer_size = 20;
// 			_wasgo_get_property_quat(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		case (Variant::AABB): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[28];
// 			int value_buffer_size = 28;
// 			_wasgo_get_property_aabb(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		case (Variant::BASIS): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[40];
// 			int value_buffer_size = 40;
// 			_wasgo_get_property_basis(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		case (Variant::TRANSFORM): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[52];
// 			int value_buffer_size = 52;
// 			_wasgo_get_property_transform(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		case (Variant::COLOR): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[20];
// 			int value_buffer_size = 20;
// 			_wasgo_get_property_color(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		case (Variant::NODE_PATH): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t value_buffer[STRING_MAX];
// 			int value_buffer_size = STRING_MAX;
// 			_wasgo_get_property_nodepath(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 			decode_variant(ret, value_buffer, value_buffer_size);
// 			return ret;
// 		} break;
// 		default: {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			Object::_from_wasgo_id(_wasgo_get_property_object(name_buffer, name_buffer_size));
// 		}
// 	}
// 	return ret;
// };

// void WasGo::set_property(String property, Variant value) {
// 	switch (value.get_type()) {
// 		case (Variant::BOOL): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			_wasgo_set_property_bool(name_buffer, name_buffer_size, (int) value);

// 		} break;
// 		case (Variant::INT): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			_wasgo_set_property_int(name_buffer, name_buffer_size, (int)value);

// 		} break;
// 		case (Variant::REAL): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			_wasgo_set_property_float(name_buffer, name_buffer_size, (float)value);

// 		} break;
// 		case (Variant::STRING): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_string(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::VECTOR2): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_vector2(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::RECT2): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_rect2(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::VECTOR3): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_vector3(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::TRANSFORM2D): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_transform2d(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::PLANE): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_plane(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::QUAT): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_quat(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::AABB): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_aabb(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::BASIS): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_basis(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::TRANSFORM): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_transform(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::COLOR): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_color(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		case (Variant::NODE_PATH): {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			uint8_t *value_buffer;
// 			int value_buffer_size;
// 			encode_variant(value, value_buffer, value_buffer_size);
// 			_wasgo_set_property_nodepath(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);

// 		} break;
// 		default: {
// 			size_t name_buffer_size = 4 + property.size();
// 			uint8_t name_buffer[name_buffer_size];
// 			encode_variant(property, name_buffer, name_buffer_size);
// 			Object obj = value;
// 			WasGoID value_id = obj._get_wasgo_id();
// 			_wasgo_set_property_object(name_buffer, name_buffer_size, value_id);
// 		}
// 	}
// };
// Node WasGo::this_node() {
// 	return Node(_wasgo_this_node());
// }

void WasGo::set_process(bool p_enable){
	_wasgo_set_process(p_enable);
}
void WasGo::set_physics_process(bool p_enable){
	_wasgo_set_physics_process(p_enable);
}
void WasGo::set_process_internal(bool p_enable){
	_wasgo_set_process_internal(p_enable);
}
void WasGo::set_physics_process_internal(bool p_enable){
	_wasgo_set_physics_process_internal(p_enable);
}
void WasGo::set_process_input(bool p_enable){
	_wasgo_set_process_input(p_enable);
}
void WasGo::set_process_unhandled_input(bool p_enable){
	_wasgo_set_process_unhandled_input(p_enable);
}
void WasGo::set_process_unhandled_key_input(bool p_enable){
	_wasgo_set_process_unhandled_key_input(p_enable);
}

bool WasGo::is_processing(){
	return _wasgo_is_processing();
}
bool WasGo::is_physics_processing(){
	return _wasgo_is_physics_processing();
}
bool WasGo::is_processing_internal(){
	return _wasgo_is_processing_internal();
}
bool WasGo::is_physics_processing_internal(){
	return _wasgo_is_physics_processing_internal();
}
bool WasGo::is_processing_input(){
	return _wasgo_is_processing_input();
}
bool WasGo::is_processing_unhandled_input(){
	return _wasgo_is_processing_unhandled_input();
}
bool WasGo::is_processing_unhandled_key_input(){
	return _wasgo_is_processing_unhandled_key_input();
}

// void _wasgo_input(WasGoID p_wasgo_id){
// 	InputEvent event(p_wasgo_id);
// 	_input(event);
// }
// void _wasgo_unhandled_input(WasGoID p_wasgo_id) {
// 	InputEvent event(p_wasgo_id);
// 	_unhandled_input(event);
// }
// void _wasgo_unhandled_key_input(WasGoID p_wasgo_id) {
// 	InputEventKey event(p_wasgo_id);
// 	_unhandled_key_input(event);
// }

bool WasGo::get_property_bool(const char * key) {
	size_t name_buffer_size = 4 + strlen(key);
	uint8_t name_buffer[name_buffer_size];
	_encode_string(key, name_buffer, name_buffer_size);
	return (bool) _wasgo_get_property_bool(name_buffer, name_buffer_size);
}
int WasGo::get_property_int(const char * key) {
	size_t name_buffer_size = 4 + strlen(key);
	uint8_t name_buffer[name_buffer_size];
	_encode_string(key, name_buffer, name_buffer_size);
	return _wasgo_get_property_bool(name_buffer, name_buffer_size);
}
float WasGo::get_property_float(const char * key){
	size_t name_buffer_size = 4 + strlen(key);
	uint8_t name_buffer[name_buffer_size];
	_encode_string(key, name_buffer, name_buffer_size);
	return _wasgo_get_property_float(name_buffer, name_buffer_size);
}
void WasGo::get_property_string(const char * key, char * &ret){
	size_t name_buffer_size = 4 + strlen(key);
	uint8_t name_buffer[name_buffer_size];
	_encode_string(key, name_buffer, name_buffer_size);
	uint8_t value_buffer[STRING_MAX];
	int value_buffer_size = STRING_MAX;
	_wasgo_get_property_string(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
	
	//make sure it's null terminated before returning
	for (int i = 0; i < value_buffer_size; i++){
		if(i < value_buffer_size - 1 && value_buffer[i] == '\0'){//null came too early
			return;
		} else if (i == value_buffer_size - 1 && value_buffer[i] != '\0'){//null not at end
			return;
		}
	}
	ret = new char[value_buffer_size];
	memcpy(ret, value_buffer, value_buffer_size);
}
// Vector2 WasGo::get_property_vector2(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[12];
// 	int value_buffer_size = 12;
// 	_wasgo_get_property_vector2(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;

// }
// Rect2 WasGo::get_property_rect2(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[20];
// 	int value_buffer_size = 20;
// 	_wasgo_get_property_rect2(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;
// }
// Vector3 WasGo::get_property_vector3(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[16];
// 	int value_buffer_size = 16;
// 	_wasgo_get_property_vector3(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;
// }
// Transform2D WasGo::get_property_transform2d(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[28];
// 	int value_buffer_size = 28;
// 	_wasgo_get_property_transform2d(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;
// }
// Plane WasGo::get_property_plane(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[20];
// 	int value_buffer_size = 20;
// 	_wasgo_get_property_plane(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;
// }
// Quaternion WasGo::get_property_quat(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[20];
// 	int value_buffer_size = 20;
// 	_wasgo_get_property_quat(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;
// }
// AABB WasGo::get_property_aabb(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[28];
// 	int value_buffer_size = 28;
// 	_wasgo_get_property_aabb(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;
// }
// Basis WasGo::get_property_basis(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[40];
// 	int value_buffer_size = 40;
// 	_wasgo_get_property_basis(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;
// }
// Transform WasGo::get_property_transform(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[52];
// 	int value_buffer_size = 52;
// 	_wasgo_get_property_transform(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;
// }
// Color WasGo::get_property_color(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[20];
// 	int value_buffer_size = 20;
// 	_wasgo_get_property_color(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;
// }
// NodePath WasGo::get_property_nodepath(String key){
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	uint8_t value_buffer[STRING_MAX];
// 	int value_buffer_size = STRING_MAX;
// 	_wasgo_get_property_nodepath(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// 	Variant ret;
// 	decode_variant(ret, value_buffer, value_buffer_size);
// 	return ret;

// }

// void WasGo::set_property_bool(String key, bool value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	_wasgo_set_property_bool(name_buffer, name_buffer_size, (int)value);
// }
// void WasGo::set_property_int(String key, int value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	_wasgo_set_property_int(name_buffer, name_buffer_size, (int)value);
// }
// void WasGo::set_property_float(String key, float value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	_wasgo_set_property_float(name_buffer, name_buffer_size, (float)value);
// }
// void WasGo::set_property_string(String key, String value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
// 	int value_buffer_size = STRING_MAX;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_string(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_vector2(String key, Vector2 value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
	
// 	int value_buffer_size = 12;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_vector2(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_rect2(String key, Rect2 value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
	
// 	int value_buffer_size = 20;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_rect2(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_vector3(String key, Vector3 value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
	
// 	int value_buffer_size = 16;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_vector3(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_transform2d(String key, Transform2D value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
	
// 	int value_buffer_size = 28;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_transform2d(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_plane(String key, Plane value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
	
// 	int value_buffer_size = 20;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_plane(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_quat(String key, Quaternion value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
	
// 	int value_buffer_size = 20;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_quat(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_aabb(String key, AABB value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
	
// 	int value_buffer_size = 28;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_aabb(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_basis(String key, Basis value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
	
// 	int value_buffer_size = 40;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_basis(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_transform(String key, Transform value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
	
// 	int value_buffer_size = 52;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_transform(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_color(String key, Color value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);
	
// 	int value_buffer_size = 20;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_color(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }
// void WasGo::set_property_nodepath(String key, NodePath value) {
// 	size_t name_buffer_size = 4 + key.size();
// 	uint8_t name_buffer[name_buffer_size];
// 	encode_variant(key, name_buffer, name_buffer_size);

// 	int value_buffer_size = STRING_MAX;
// 	uint8_t value_buffer[value_buffer_size];
// 	encode_variant(value, value_buffer, value_buffer_size);
// 	_wasgo_set_property_nodepath(name_buffer, name_buffer_size, value_buffer, value_buffer_size, value_buffer_size);
// }