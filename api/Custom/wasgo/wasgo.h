
#ifndef WASGO_H
#define WASGO_H

#include "Variant.h"
#include "stdint.h"

typedef uint32_t WasGoId;
extern "C" {
WasGoId _wasgo_get_property(const char *property);
void _wasgo_set_property(const char *property, WasGoId);
void _notification(int p_what);//our entry point
}

class WasGo {
public:
	static Variant get_property(const char *property) {
		return Variant::_from_wasgo_id(_wasgo_get_property(property));
	};
	static void set_property(const char *property, Variant value) {
		_wasgo_set_property(property, value._get_wasgo_id());
	};
};

#endif
