#include "wasm_export.h"
#include <math.h>
#include <stdlib.h>

//Math functions for the runtime
//used in the native wrappers
inline double _wasgo_cos(wasm_exec_env_t exec_env, double x) {
	return cos(x);
}
inline double _wasgo_sin(wasm_exec_env_t exec_env, double x) {
	return sin(x);
}
inline double _wasgo_tan(wasm_exec_env_t exec_env, double x) {
	return tan(x);
}
inline double _wasgo_acos(wasm_exec_env_t exec_env, double x) {
	return acos(x);
}
inline double _wasgo_asin(wasm_exec_env_t exec_env, double x) {
	return asin(x);
}
inline double _wasgo_atan(wasm_exec_env_t exec_env, double x) {
	return atan(x);
}
inline double _wasgo_atan2(wasm_exec_env_t exec_env, double x, double y) {
	return atan2(x, y);
}

inline float _wasgo_cosf(wasm_exec_env_t exec_env, float x) {
	return cosf(x);
}
inline float _wasgo_sinf(wasm_exec_env_t exec_env, float x) {
	return sinf(x);
}
inline float _wasgo_tanf(wasm_exec_env_t exec_env, float x) {
	return tanf(x);
}
inline float _wasgo_acosf(wasm_exec_env_t exec_env, float x) {
	return acosf(x);
}
inline float _wasgo_asinf(wasm_exec_env_t exec_env, float x) {
	return asinf(x);
}
inline float _wasgo_atanf(wasm_exec_env_t exec_env, float x) {
	return atanf(x);
}
inline float _wasgo_atan2f(wasm_exec_env_t exec_env, float x, float y) {
	return atan2f(x, y);
}

inline int _wasgo_rand(wasm_exec_env_t exec_env) {
	return rand();
}

// inline float _wasgo_random(wasm_exec_env_t exec_env) {
// 	return random();
// }