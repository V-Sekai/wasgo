#include "wasgo/wasgo.h"
#include "marshalls.h"
#include "Object.h"

Variant WasGo::get_property(const char *property, Variant::Type type) {
	Variant ret;
	int buffer_size = 0;
	switch (type) {
		case (Variant::BOOL): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_bool(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::INT): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_int(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::REAL): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_float(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::STRING): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_string(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::VECTOR2): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_vector2(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::RECT2): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_rect2(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::VECTOR3): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_vector3(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::TRANSFORM2D): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_transform2d(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::PLANE): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_plane(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::QUAT): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_quat(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::AABB): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_basis(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::BASIS): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_aabb(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::TRANSFORM): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_transform(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::COLOR): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_color(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
		case (Variant::NODE_PATH): {
            uint8_t buffer[4];
            buffer_size = 4;
            _wasgo_get_property_nodepath(property, strlen(property), buffer, buffer_size);
            decode_variant(ret, buffer,buffer_size);
		} break;
        default:{
			Object::_from_wasgo_id(_wasgo_get_property_object(property, strlen(property)));
		}
	}
	return ret;
};

void WasGo::set_property(const char *property, Variant value) {
	int buffer_size = 0;
	switch (value.get_type()) {
		case (Variant::BOOL): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_bool(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::INT): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_int(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::REAL): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_float(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::STRING): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_string(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::VECTOR2): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_vector2(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::RECT2): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_rect2(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::VECTOR3): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_vector3(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::TRANSFORM2D): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_transform2d(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::PLANE): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_plane(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::QUAT): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_quat(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::AABB): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_basis(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::BASIS): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_aabb(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::TRANSFORM): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_transform(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::COLOR): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_color(property, strlen(property), buffer, buffer_size);
			
		} break;
		case (Variant::NODE_PATH): {
			uint8_t buffer[4];
			buffer_size = 4;
            encode_variant(value, buffer, buffer_size);
			_wasgo_set_property_nodepath(property, strlen(property), buffer, buffer_size);
			
		} break;
		default: {
			_wasgo_set_property_object(property, strlen(property), value._get_wasgo_id());
		}
	}
};
Node WasGo::this_node() {
	return Node(_wasgo_this_node());
}