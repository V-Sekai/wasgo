
#ifndef WASGO_H
#define WASGO_H

#include "core/variant/variant.h"
#include <stdint.h>
#include <string>

typedef uint32_t WasGoID;
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
	// static Variant get_property(std::string property, Variant::Type = Variant::REAL);
	// static void set_property(std::string property, Variant value);

	static bool get_property_bool(std::string key);
	static int get_property_int(std::string key);
	static float get_property_float(std::string key);
	static std::string get_property_string(std::string key);
	// static Vector2 get_property_vector2(std::string key);
	// static Rect2 get_property_rect2(std::string key);
	// static Vector3 get_property_vector3(std::string key);
	// static Transform2D get_property_transform2d(std::string key);
	// static Plane get_property_plane(std::string key);
	// static Quaternion get_property_quat(std::string key);
	// static AABB get_property_aabb(std::string key);
	// static Basis get_property_basis(std::string key);
	// static Transform3D get_property_transform(std::string key);
	// static Color get_property_color(std::string key);
	// static NodePath get_property_nodepath(std::string key);

	static void set_property(std::string key, Variant variant);
	// static void set_property_bool(std::string key, bool p_value);
	// static void set_property_int(std::string key, int p_value);
	// static void set_property_float(std::string key, float p_value);
	// static void set_property_string(std::string key, std::string p_value);
	// static void set_property_vector2(std::string key, Vector2 p_value);
	// static void set_property_rect2(std::string key, Rect2 p_value);
	// static void set_property_vector3(std::string key, Vector3 p_value);
	// static void set_property_transform2d(std::string key, Transform2D p_value);
	// static void set_property_plane(std::string key, Plane p_value);
	// static void set_property_quat(std::string key, Quaternion p_value);
	// static void set_property_aabb(std::string key, AABB p_value);
	// static void set_property_basis(std::string key, Basis p_value);
	// static void set_property_transform(std::string key, Transform3D p_value);
	// static void set_property_color(std::string key, Color p_value);
	// static void set_property_nodepath(std::string key, NodePath p_value);

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
