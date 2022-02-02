//Lots of this is copied from Godot's marshalls.h

#ifndef WASGO_ENCODE_DECODE_H
#define WASGO_ENCODE_DECODE_H

// #include "reference.h"
// #include "typedefs.h"
#include "wasgoid.h"
#include <string>
#include <limits.h>
// #include "Variant.h"

/**
  * Miscellaneous helpers for marshalling data types, and encoding
  * in an endian independent way
  */

union MarshallFloat {

	uint32_t i; ///< int
	float f; ///< float
};

union MarshallDouble {

	uint64_t l; ///< long long
	double d; ///< double
};

static inline unsigned int encode_uint16(uint16_t p_uint, WasGoByte *p_arr) {

	for (int i = 0; i < 2; i++) {

		*p_arr = p_uint & 0xFF;
		p_arr++;
		p_uint >>= 8;
	}

	return sizeof(uint16_t);
}

static inline unsigned int encode_uint32(uint32_t p_uint, WasGoByte *p_arr) {

	for (int i = 0; i < 4; i++) {

		*p_arr = p_uint & 0xFF;
		p_arr++;
		p_uint >>= 8;
	}

	return sizeof(uint32_t);
}

static inline unsigned int encode_float(float p_float, WasGoByte *p_arr) {

	MarshallFloat mf;
	mf.f = p_float;
	encode_uint32(mf.i, p_arr);

	return sizeof(uint32_t);
}

static inline unsigned int encode_uint64(uint64_t p_uint, WasGoByte *p_arr) {

	for (int i = 0; i < 8; i++) {

		*p_arr = p_uint & 0xFF;
		p_arr++;
		p_uint >>= 8;
	}

	return sizeof(uint64_t);
}

static inline unsigned int encode_double(double p_double, WasGoByte *p_arr) {

	MarshallDouble md;
	md.d = p_double;
	encode_uint64(md.l, p_arr);

	return sizeof(uint64_t);
}

static inline int encode_cstring(const char *p_string, WasGoByte *p_data) {

	int len = 0;

	while (*p_string) {

		if (p_data) {

			*p_data = (WasGoByte)*p_string;
			p_data++;
		}
		p_string++;
		len++;
	};

	if (p_data) *p_data = 0;
	return len + 1;
}

static inline uint16_t decode_uint16(const WasGoByte *p_arr) {

	uint16_t u = 0;

	for (int i = 0; i < 2; i++) {

		uint16_t b = *p_arr;
		b <<= (i * 8);
		u |= b;
		p_arr++;
	}

	return u;
}

static inline uint32_t decode_uint32(const WasGoByte *p_arr) {

	uint32_t u = 0;

	for (int i = 0; i < 4; i++) {
		uint32_t b = *p_arr;
		b <<= (i * 8);
		u |= b;
		p_arr++;
	}

	return u;
}

static inline float decode_float(const WasGoByte *p_arr) {

	MarshallFloat mf;
	mf.i = decode_uint32(p_arr);
	return mf.f;
}

static inline uint64_t decode_uint64(const WasGoByte *p_arr) {

	uint64_t u = 0;

	for (int i = 0; i < 8; i++) {

		uint64_t b = (*p_arr) & 0xFF;
		b <<= (i * 8);
		u |= b;
		p_arr++;
	}

	return u;
}

static inline double decode_double(const WasGoByte *p_arr) {

	MarshallDouble md;
	md.l = decode_uint64(p_arr);
	return md.d;
}

#define _S(a) ((int32_t)a)
#define ERR_FAIL_COND_V(cond) if(cond){return;}
#define ERR_FAIL_ADD_OF(a, b) ERR_FAIL_COND_V(_S(b) < 0 || _S(a) < 0 || _S(a) > INT_MAX - _S(b))
#define ERR_FAIL_MUL_OF(a, b) ERR_FAIL_COND_V(_S(a) < 0 || _S(b) <= 0 || _S(a) > INT_MAX / _S(b))

#define ENCODE_MASK 0xFF
#define ENCODE_FLAG_64 1 << 16
#define ENCODE_FLAG_OBJECT_AS_ID 1 << 16

static void _decode_string(WasGoByte *&buf, size_t &len, size_t *r_len, char *&r_string) {
	ERR_FAIL_COND_V(len < 4)

	int32_t strlen = decode_uint32(buf);
	int32_t pad = 0;

	// Handle padding
	if (strlen % 4) {
		pad = 4 - strlen % 4;
	}

	buf += 4;
	len -= 4;

	// Ensure buffer is big enough
	ERR_FAIL_ADD_OF(strlen, pad);
	ERR_FAIL_COND_V(strlen < 0 || strlen + pad > len);

	char *str = (char *)buf;
	// ERR_FAIL_COND_V(str =(const char *)buf, strlen));
	r_string = str;

	// Add padding
	strlen += pad;

	// Update buffer pos, left data count, and return size
	buf += strlen;
	len -= strlen;
	if (r_len) {
		(*r_len) += 4 + strlen;
	}
}
static void _encode_string(const char *utf8, WasGoByte *buf, size_t &r_len) {
	size_t length = strlen(utf8);
	if (buf) {
		encode_uint32(length, buf);
		buf += 4;
		memcpy(buf, utf8, length);
		buf += length;
	}

	r_len += 4 + length;
	while (r_len % 4) {
		r_len++; //pad
		if (buf) {
			*(buf++) = 0;
		}
	}
}
// class EncodedObjectAsID : public Reference {
// 	// GDCLASS(EncodedObjectAsID, Reference);

// 	WasGoID id;

// protected:
// 	static void _bind_methods();

// public:
// 	void set_object_id(WasGoID p_id);
// 	WasGoID get_object_id() const;

// 	EncodedObjectAsID();
// };

// Error decode_variant(Variant &r_variant, const WasGoByte *p_buffer, int p_len, int *r_len = NULL, bool p_allow_objects = false);
// Error encode_variant(const Variant &p_variant, WasGoByte *r_buffer, int &r_len, bool p_full_objects = false);

#endif