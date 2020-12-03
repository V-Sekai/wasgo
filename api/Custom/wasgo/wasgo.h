
#ifndef WASGO_H
#define WASGO_H

#include "Variant.h"
#include "Node.h"
#include <stdint.h>

typedef uint32_t WasGoId;
extern "C" {
void _notification(int p_what);//our entry point
WasGoId _wasgo_this_node();
int _wasgo_get_property_bool(const uint8_t* name, int name_size);
void _wasgo_set_property_bool(const uint8_t* name, int name_size, int value);
int _wasgo_get_property_int(const uint8_t* name, int name_size);
void _wasgo_set_property_int(const uint8_t* name, int name_size, int value);
float _wasgo_get_property_float(const uint8_t* name, int name_size);
void _wasgo_set_property_float(const uint8_t* name, int name_size, float value);
void _wasgo_get_property_string(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_string(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_vector2(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_vector2(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_rect2(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_rect2(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_vector3(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_vector3(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_transform2d(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_transform2d(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_plane(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_plane(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_quat(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_quat(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_basis(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_basis(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_aabb(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_aabb(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_transform(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_transform(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_color(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_color(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_nodepath(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_nodepath(const uint8_t* name, int name_size, const uint8_t *value, int value_size);
WasGoId _wasgo_get_property_object(const uint8_t *name, int name_size);
void _wasgo_set_property_object(const uint8_t* name, int name_size, WasGoId p_wasgo_id);
}
class Node;//Why does this work?
class WasGo {
public:
	static Variant get_property(String property, Variant::Type);
	static void set_property(String property, Variant value);
	static Node this_node();
};

#endif
