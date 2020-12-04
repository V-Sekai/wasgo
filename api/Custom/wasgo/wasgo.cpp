#include "wasgo/wasgo.h"
#include "marshalls.h"
#include "Object.h"
#include <stdio.h>

#define STRING_MAX 256

Variant WasGo::get_property(String property, Variant::Type type) {
	//Sizes of buffers taken from https://docs.godotengine.org/en/stable/tutorials/misc/binary_serialization_api.html
	Variant ret;
	switch (type) {
		case (Variant::BOOL): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			return _wasgo_get_property_bool(name_buffer, name_buffer_size);
		} break;
		case (Variant::INT): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			Variant name = property;
			encode_variant(name, name_buffer, name_buffer_size);
			return _wasgo_get_property_int(name_buffer, name_buffer_size);
		} break;
		case (Variant::REAL): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			return _wasgo_get_property_float(name_buffer, name_buffer_size);
		} break;
		case (Variant::STRING): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[STRING_MAX];
			int value_buffer_size = STRING_MAX;
			_wasgo_get_property_string(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;

		} break;
		case (Variant::VECTOR2): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[12];
			int value_buffer_size = 12;
			_wasgo_get_property_vector2(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		case (Variant::RECT2): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[20];
			int value_buffer_size = 20;
			_wasgo_get_property_rect2(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		case (Variant::VECTOR3): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[16];
			int value_buffer_size = 16;
			_wasgo_get_property_vector3(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		case (Variant::TRANSFORM2D): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[28];
			int value_buffer_size = 28;
			_wasgo_get_property_transform2d(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		case (Variant::PLANE): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[20];
			int value_buffer_size = 20;
			_wasgo_get_property_plane(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		case (Variant::QUAT): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[20];
			int value_buffer_size = 20;
			_wasgo_get_property_quat(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		case (Variant::AABB): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[28];
			int value_buffer_size = 28;
			_wasgo_get_property_aabb(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		case (Variant::BASIS): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[40];
			int value_buffer_size = 40;
			_wasgo_get_property_basis(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		case (Variant::TRANSFORM): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[52];
			int value_buffer_size = 52;
			_wasgo_get_property_transform(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		case (Variant::COLOR): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[20];
			int value_buffer_size = 20;
			_wasgo_get_property_color(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		case (Variant::NODE_PATH): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t value_buffer[STRING_MAX];
			int value_buffer_size = STRING_MAX;
			_wasgo_get_property_nodepath(name_buffer, name_buffer_size, value_buffer, value_buffer_size);
			decode_variant(ret, value_buffer, value_buffer_size);
			return ret;
		} break;
		default: {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			Object::_from_wasgo_id(_wasgo_get_property_object(name_buffer, name_buffer_size));
		}
	}
	return ret;
};

void WasGo::set_property(String property, Variant value) {
	switch (value.get_type()) {
		case (Variant::BOOL): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			_wasgo_set_property_bool(name_buffer, name_buffer_size, (int) value);

		} break;
		case (Variant::INT): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			_wasgo_set_property_int(name_buffer, name_buffer_size, (int)value);

		} break;
		case (Variant::REAL): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			_wasgo_set_property_float(name_buffer, name_buffer_size, (float)value);

		} break;
		case (Variant::STRING): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_string(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::VECTOR2): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_vector2(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::RECT2): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_rect2(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::VECTOR3): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_vector3(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::TRANSFORM2D): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_transform2d(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::PLANE): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_plane(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::QUAT): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_quat(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::AABB): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_aabb(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::BASIS): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_basis(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::TRANSFORM): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_transform(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::COLOR): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_color(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		case (Variant::NODE_PATH): {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			uint8_t *value_buffer;
			int value_buffer_size;
			encode_variant(value, value_buffer, value_buffer_size);
			_wasgo_set_property_nodepath(name_buffer, name_buffer_size, value_buffer, value_buffer_size);

		} break;
		default: {
			int name_buffer_size = 4 + property.size();
			uint8_t name_buffer[name_buffer_size];
			encode_variant(property, name_buffer, name_buffer_size);
			Object obj = value;
			WasGoID value_id = obj._get_wasgo_id();
			_wasgo_set_property_object(name_buffer, name_buffer_size, value_id);
		}
	}
};
Node WasGo::this_node() {
	return Node(_wasgo_this_node());
}

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