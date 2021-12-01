
#ifndef WASGO_H
#define WASGO_H

#include "variant/variant.h"
#include "wasgo_encode_decode.h"
#include <stdint.h>
#include <limits>

// typedef uint32_t WasGoID;
// class InputEvent;
// class InputEventKey;

// #include "InputEvent.h"
// #include "InputEventKey.h"

extern "C" {
void _notification(int p_what);//our entry point
void _enter_tree();
void _exit_tree();
void _physics_process(float delta);
void _process(float delta);
void _ready();

//_wasgo_versions are the wrappers
// extern void _input(InputEvent event);
void _wasgo_input(WasGoID id);
// extern void _unhandled_input(InputEvent event);
// extern void _unhandled_key_input(InputEventKey event);
void _wasgo_unhandled_input(WasGoID id);
void _wasgo_unhandled_key_input(WasGoID id);

WasGoID _wasgo_this_node();
int _wasgo_get_property_bool(const uint8_t* name, int name_size);
void _wasgo_set_property_bool(const uint8_t* name, int name_size, int value);
int _wasgo_get_property_int(const uint8_t* name, int name_size);
void _wasgo_set_property_int(const uint8_t* name, int name_size, int value);
float _wasgo_get_property_float(const uint8_t* name, int name_size);
void _wasgo_set_property_float(const uint8_t* name, int name_size, float value);
void _wasgo_get_property_string(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_string(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_vector2(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_vector2(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_rect2(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_rect2(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_vector3(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_vector3(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_transform2d(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_transform2d(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_plane(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_plane(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_quat(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_quat(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_basis(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_basis(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_aabb(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_aabb(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_transform(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_transform(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_color(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_color(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_get_property_nodepath(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
void _wasgo_set_property_nodepath(const uint8_t* name, int name_size, const uint8_t *value, int throwaway, int value_size);
WasGoID _wasgo_get_property_object(const uint8_t *name, int name_size);
void _wasgo_set_property_object(const uint8_t* name, int name_size, WasGoID p_wasgo_id);
void _wasgo_set_process(bool p_enable);
void _wasgo_set_physics_process(bool p_enable);
void _wasgo_set_process_internal(bool p_enable);
void _wasgo_set_physics_process_internal(bool p_enable);
void _wasgo_set_process_input(bool p_enable);
void _wasgo_set_process_unhandled_input(bool p_enable);
void _wasgo_set_process_unhandled_key_input(bool p_enable);
bool _wasgo_is_processing();
bool _wasgo_is_physics_processing();
bool _wasgo_is_processing_internal();
bool _wasgo_is_physics_processing_internal();
bool _wasgo_is_processing_input();
bool _wasgo_is_processing_unhandled_input();
bool _wasgo_is_processing_unhandled_key_input();
}
// class Node;//Why does this work?
class WasGo {
public:
	// static Variant get_property(const char *property, Variant::Type = Variant::REAL);
	// static void set_property(const char *property, Variant value);

	static bool get_property_bool(const char *key);
	static int get_property_int(const char *key);
	static float get_property_float(const char *key);
	static void get_property_string(const char *key, char * &ret);
	// static Vector2 get_property_vector2(const char *key);
	// static Rect2 get_property_rect2(const char *key);
	// static Vector3 get_property_vector3(const char *key);
	// static Transform2D get_property_transform2d(const char *key);
	// static Plane get_property_plane(const char *key);
	// static Quaternion get_property_quat(const char *key);
	// static AABB get_property_aabb(const char *key);
	// static Basis get_property_basis(const char *key);
	// static Transform3D get_property_transform(const char *key);
	// static Color get_property_color(const char *key);
	// static NodePath get_property_nodepath(const char *key);

	static void set_property(const char *key, Variant variant);
	// static void set_property_bool(const char *key, bool p_value);
	// static void set_property_int(const char *key, int p_value);
	// static void set_property_float(const char *key, float p_value);
	// static void set_property_string(const char *key, const char *p_value);
	// static void set_property_vector2(const char *key, Vector2 p_value);
	// static void set_property_rect2(const char *key, Rect2 p_value);
	// static void set_property_vector3(const char *key, Vector3 p_value);
	// static void set_property_transform2d(const char *key, Transform2D p_value);
	// static void set_property_plane(const char *key, Plane p_value);
	// static void set_property_quat(const char *key, Quaternion p_value);
	// static void set_property_aabb(const char *key, AABB p_value);
	// static void set_property_basis(const char *key, Basis p_value);
	// static void set_property_transform(const char *key, Transform3D p_value);
	// static void set_property_color(const char *key, Color p_value);
	// static void set_property_nodepath(const char *key, NodePath p_value);

	// static Node this_node();
	static void set_process(bool p_enable);
	static void set_physics_process(bool p_enable);
	static void set_process_internal(bool p_enable);
	static void set_physics_process_internal(bool p_enable);
	static void set_process_input(bool p_enable);
	static void set_process_unhandled_input(bool p_enable);
	static void set_process_unhandled_key_input(bool p_enable);
	static bool is_processing();
	static bool is_physics_processing();
	static bool is_processing_internal();
	static bool is_physics_processing_internal();
	static bool is_processing_input();
	static bool is_processing_unhandled_input();
	static bool is_processing_unhandled_key_input();
};

#endif
