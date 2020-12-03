
#ifndef WASGO_H
#define WASGO_H

#include "Variant.h"
#include "Node.h"

typedef uint32_t WasGoId;
extern "C" {
void _notification(int p_what);//our entry point
WasGoId _wasgo_this_node();
void _wasgo_get_property_bool(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_bool(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_int(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_int(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_float(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_float(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_string(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_string(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_vector2(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_vector2(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_rect2(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_rect2(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_vector3(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_vector3(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_transform2d(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_transform2d(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_plane(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_plane(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_quat(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_quat(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_basis(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_basis(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_aabb(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_aabb(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_transform(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_transform(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_color(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_color(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_get_property_nodepath(const char* name, int name_size, const uint8_t *value, int value_size);
void _wasgo_set_property_nodepath(const char* name, int name_size, const uint8_t *value, int value_size);
WasGoId _wasgo_get_property_object(const char *name, int name_size);
void _wasgo_set_property_object(const char* name, int name_size, WasGoId p_wasgo_id);
}
class Node;//Why does this work?
class WasGo {
public:
	static Variant get_property(const char *property, Variant::Type);
	static void set_property(const char *property, Variant value);
	static Node this_node();
};

#endif
