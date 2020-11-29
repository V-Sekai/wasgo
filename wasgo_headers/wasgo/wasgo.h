
#ifndef WASGO_H
#define WASGO_H

#include "Variant.h"
#include "stdint.h"

extern "C" {
WasGo::WasGoId _wasgo_get_property(const char *property);
void _wasgo_set_property(const char *property, WasGo::WasGoId);
}

class WasGo {
public:
	typedef uint32_t WasGoId;

	static Variant get_property(const char * property) {
        return Variant::from_id(_wasgo_get_property(property));
	};
	static void set_property(const char *property, Variant value) {
		_wasgo_set_property(property, value.wasgo_id);
	};
};

#endif
        