
#include "variant.h"


String Variant::get_type_name(Variant::Type p_type) {

	switch (p_type) {
		case NIL: {

			return "Nil";
		} break;

		// atomic types
		case BOOL: {

			return "bool";
		} break;
		case INT: {

			return "int";

		} break;
		case REAL: {

			return "float";

		} break;
		case STRING: {

			return "String";
		} break;

		// math types
		case VECTOR2: {

			return "Vector2";
		} break;
		case RECT2: {

			return "Rect2";
		} break;
		case TRANSFORM2D: {

			return "Transform2D";
		} break;
		case VECTOR3: {

			return "Vector3";
		} break;
		case PLANE: {

			return "Plane";

		} break;
		/*
			case QUAT: {


			} break;*/
		case AABB: {

			return "AABB";
		} break;
		case QUAT: {

			return "Quat";

		} break;
		case BASIS: {

			return "Basis";

		} break;
		case TRANSFORM: {

			return "Transform";

		} break;

		// misc types
		case COLOR: {

			return "Color";

		} break;
		case _RID: {

			return "RID";
		} break;
		case OBJECT: {

			return "Object";
		} break;
		case NODE_PATH: {

			return "NodePath";

		} break;
		case DICTIONARY: {

			return "Dictionary";

		} break;
		case ARRAY: {

			return "Array";

		} break;

		// arrays
		case POOL_BYTE_ARRAY: {

			return "PoolByteArray";

		} break;
		case POOL_INT_ARRAY: {

			return "PoolIntArray";

		} break;
		case POOL_REAL_ARRAY: {

			return "PoolRealArray";

		} break;
		case POOL_STRING_ARRAY: {

			return "PoolStringArray";
		} break;
		case POOL_VECTOR2_ARRAY: {

			return "PoolVector2Array";

		} break;
		case POOL_VECTOR3_ARRAY: {

			return "PoolVector3Array";

		} break;
		case POOL_COLOR_ARRAY: {

			return "PoolColorArray";

		} break;
		default: {
		}
	}

	return "";
}

bool Variant::can_convert(Variant::Type p_type_from, Variant::Type p_type_to) {

	if (p_type_from == p_type_to)
		return true;
	if (p_type_to == NIL && p_type_from != NIL) //nil can convert to anything
		return true;

	if (p_type_from == NIL) {
		return (p_type_to == OBJECT);
	};

	const Type *valid_types = NULL;
	const Type *invalid_types = NULL;

	switch (p_type_to) {
		case BOOL: {

			static const Type valid[] = {
				INT,
				REAL,
				STRING,
				NIL,
			};

			valid_types = valid;
		} break;
		case INT: {

			static const Type valid[] = {
				BOOL,
				REAL,
				STRING,
				NIL,
			};

			valid_types = valid;

		} break;
		case REAL: {

			static const Type valid[] = {
				BOOL,
				INT,
				STRING,
				NIL,
			};

			valid_types = valid;

		} break;
		case STRING: {

			static const Type invalid[] = {
				OBJECT,
				NIL
			};

			invalid_types = invalid;
		} break;
		case TRANSFORM2D: {

			static const Type valid[] = {
				TRANSFORM,
				NIL
			};

			valid_types = valid;
		} break;
		case QUAT: {

			static const Type valid[] = {
				BASIS,
				NIL
			};

			valid_types = valid;

		} break;
		case BASIS: {

			static const Type valid[] = {
				QUAT,
				VECTOR3,
				NIL
			};

			valid_types = valid;

		} break;
		case TRANSFORM: {

			static const Type valid[] = {
				TRANSFORM2D,
				QUAT,
				BASIS,
				NIL
			};

			valid_types = valid;

		} break;

		case COLOR: {

			static const Type valid[] = {
				STRING,
				INT,
				NIL,
			};

			valid_types = valid;

		} break;

		case _RID: {

			static const Type valid[] = {
				OBJECT,
				NIL
			};

			valid_types = valid;
		} break;
		case OBJECT: {

			static const Type valid[] = {
				NIL
			};

			valid_types = valid;
		} break;
		case NODE_PATH: {

			static const Type valid[] = {
				STRING,
				NIL
			};

			valid_types = valid;
		} break;
		case ARRAY: {

			static const Type valid[] = {
				POOL_BYTE_ARRAY,
				POOL_INT_ARRAY,
				POOL_STRING_ARRAY,
				POOL_REAL_ARRAY,
				POOL_COLOR_ARRAY,
				POOL_VECTOR2_ARRAY,
				POOL_VECTOR3_ARRAY,
				NIL
			};

			valid_types = valid;
		} break;
		// arrays
		case POOL_BYTE_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};

			valid_types = valid;
		} break;
		case POOL_INT_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};
			valid_types = valid;
		} break;
		case POOL_REAL_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};

			valid_types = valid;
		} break;
		case POOL_STRING_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};
			valid_types = valid;
		} break;
		case POOL_VECTOR2_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};
			valid_types = valid;

		} break;
		case POOL_VECTOR3_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};
			valid_types = valid;

		} break;
		case POOL_COLOR_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};

			valid_types = valid;

		} break;
		default: {
		}
	}

	if (valid_types) {

		int i = 0;
		while (valid_types[i] != NIL) {

			if (p_type_from == valid_types[i])
				return true;
			i++;
		}

	} else if (invalid_types) {

		int i = 0;
		while (invalid_types[i] != NIL) {

			if (p_type_from == invalid_types[i])
				return false;
			i++;
		}

		return true;
	}

	return false;
}

bool Variant::can_convert_strict(Variant::Type p_type_from, Variant::Type p_type_to) {

	if (p_type_from == p_type_to)
		return true;
	if (p_type_to == NIL && p_type_from != NIL) //nil can convert to anything
		return true;

	if (p_type_from == NIL) {
		return (p_type_to == OBJECT);
	};

	const Type *valid_types = NULL;

	switch (p_type_to) {
		case BOOL: {

			static const Type valid[] = {
				INT,
				REAL,
				//STRING,
				NIL,
			};

			valid_types = valid;
		} break;
		case INT: {

			static const Type valid[] = {
				BOOL,
				REAL,
				//STRING,
				NIL,
			};

			valid_types = valid;

		} break;
		case REAL: {

			static const Type valid[] = {
				BOOL,
				INT,
				//STRING,
				NIL,
			};

			valid_types = valid;

		} break;
		case STRING: {

			static const Type valid[] = {
				NODE_PATH,
				NIL
			};

			valid_types = valid;
		} break;
		case TRANSFORM2D: {

			static const Type valid[] = {
				TRANSFORM,
				NIL
			};

			valid_types = valid;
		} break;
		case QUAT: {

			static const Type valid[] = {
				BASIS,
				NIL
			};

			valid_types = valid;

		} break;
		case BASIS: {

			static const Type valid[] = {
				QUAT,
				VECTOR3,
				NIL
			};

			valid_types = valid;

		} break;
		case TRANSFORM: {

			static const Type valid[] = {
				TRANSFORM2D,
				QUAT,
				BASIS,
				NIL
			};

			valid_types = valid;

		} break;

		case COLOR: {

			static const Type valid[] = {
				STRING,
				INT,
				NIL,
			};

			valid_types = valid;

		} break;

		case _RID: {

			static const Type valid[] = {
				OBJECT,
				NIL
			};

			valid_types = valid;
		} break;
		case OBJECT: {

			static const Type valid[] = {
				NIL
			};

			valid_types = valid;
		} break;
		case NODE_PATH: {

			static const Type valid[] = {
				STRING,
				NIL
			};

			valid_types = valid;
		} break;
		case ARRAY: {

			static const Type valid[] = {
				POOL_BYTE_ARRAY,
				POOL_INT_ARRAY,
				POOL_STRING_ARRAY,
				POOL_REAL_ARRAY,
				POOL_COLOR_ARRAY,
				POOL_VECTOR2_ARRAY,
				POOL_VECTOR3_ARRAY,
				NIL
			};

			valid_types = valid;
		} break;
		// arrays
		case POOL_BYTE_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};

			valid_types = valid;
		} break;
		case POOL_INT_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};
			valid_types = valid;
		} break;
		case POOL_REAL_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};

			valid_types = valid;
		} break;
		case POOL_STRING_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};
			valid_types = valid;
		} break;
		case POOL_VECTOR2_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};
			valid_types = valid;

		} break;
		case POOL_VECTOR3_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};
			valid_types = valid;

		} break;
		case POOL_COLOR_ARRAY: {

			static const Type valid[] = {
				ARRAY,
				NIL
			};

			valid_types = valid;

		} break;
		default: {
		}
	}

	if (valid_types) {

		int i = 0;
		while (valid_types[i] != NIL) {

			if (p_type_from == valid_types[i])
				return true;
			i++;
		}
	}

	return false;
}

bool Variant::is_ref() const {

	return type == OBJECT && !_get_obj().ref.is_null();
}

bool Variant::is_shared() const {

	switch (type) {

		case OBJECT: return true;
		case ARRAY: return true;
		case DICTIONARY: return true;
		default: {
		}
	}

	return false;
}

bool Variant::is_zero() const {

	switch (type) {
		case NIL: {

			return true;
		} break;

		// atomic types
		case BOOL: {

			return !(_data._bool);
		} break;
		case INT: {

			return _data._int == 0;

		} break;
		case REAL: {

			return _data._real == 0;

		} break;
		
		default: {
            return _wasgo_variant_wrapper_is_zero(wasgo_id);
		}
	}

	return false;
}

bool Variant::is_one() const {

	switch (type) {
		case NIL: {

			return true;
		} break;

		// atomic types
		case BOOL: {

			return _data._bool;
		} break;
		case INT: {

			return _data._int == 1;

		} break;
		case REAL: {

			return _data._real == 1;

		} break;

		default: {
            // SOEMTHING PAST TO GODOT
            return _wasgo_variant_wrapper_is_one(wasgo_id);
		}
	}

	return false;
}

Variant::operator signed int() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1 : 0;
		case INT: return _data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_signed_int(wasgo_id);
		default: {
			return 0;
		}
	}
}

Variant::operator unsigned int() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1 : 0;
		case INT: return _data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_unsigned_int(wasgo_id);
		default: {
			return 0;
		}
	}
}

Variant::operator int64_t() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1 : 0;
		case INT: return _data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_int64_t(wasgo_id);
		default: {

			return 0;
		}
	}
}

Variant::operator uint64_t() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1 : 0;
		case INT: return _data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_uint64_t(wasgo_id);
		default: {

			return 0;
		}
	}
}

#ifdef NEED_LONG_INT
Variant::operator signed long() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1 : 0;
		case INT: return _data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_signed_long(wasgo_id);
		default: {

			return 0;
		}
	}

	return 0;
};

Variant::operator unsigned long() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1 : 0;
		case INT: return _data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_unsigned_long(wasgo_id);
		default: {

			return 0;
		}
	}

	return 0;
};
#endif

Variant::operator signed short() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1 : 0;
		case INT: return _data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_signed_short(wasgo_id);
		default: {

			return 0;
		}
	}
}
Variant::operator unsigned short() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1 : 0;
		case INT: return _data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_unsigned_short(wasgo_id);
		default: {

			return 0;
		}
	}
}

Variant::operator signed char() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1 : 0;
		case INT: return _data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_signed_char(wasgo_id);
		default: {

			return 0;
		}
	}
}
Variant::operator unsigned char() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1 : 0;
		case INT: return _data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_unsigned_char(wasgo_id);
		default: {

			return 0;
		}
	}
}

Variant::operator CharType() const {

	return operator unsigned int();
}

Variant::operator float() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1.0 : 0.0;
		case INT: return (float)_data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_float(wasgo_id);
		default: {

			return 0;
		}
	}
}
Variant::operator double() const {

	switch (type) {

		case NIL: return 0;
		case BOOL: return _data._bool ? 1.0 : 0.0;
		case INT: return (double)_data._int;
		case REAL: return _data._real;
		case STRING: return _wasgo_variant_wrapper_operator_double(wasgo_id);
		default: {

			return 0;
		}
	}
}

Variant::operator StringName() const {

	if (type == NODE_PATH) {
		return _wasgo_variant_wrapper_operator_StringName(wasgo_id);
	}
	return StringName(operator String());
}

Variant::operator String() const {
	List<const void *> stack;

	return stringify(stack);
}

String Variant::stringify(List<const void *> &stack) const {
	switch (type) {

		case NIL: return "Null";
		case BOOL: return _data._bool ? "True" : "False";
		case INT: return itos(_data._int);
		case REAL: return rtos(_data._real);
		default: {
			return _wasgo_variant_wrapper_stringify(wasgo_id);
		}
	}
	return "";
}

Variant::operator Vector2() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL: return Vector2();
		}
	return _wasgo_variant_wrapper_operator_Vector2(wasgo_id);
}

Variant::operator Rect2() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL: return Rect2();
		}
	return _wasgo_variant_wrapper_operator_Rect2(wasgo_id);

}


Variant::operator Vector3() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL: return Vector3();
		}
	return _wasgo_variant_wrapper_operator_Vector3(wasgo_id);
}
Variant::operator Plane() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL: return Plane();
		}
	return _wasgo_variant_wrapper_operator_Plane(wasgo_id);
}

Variant::operator ::AABB() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL: return AABB();
		}
	return _wasgo_wrapper_operator_AABB(wasgo_id);
}

Variant::operator Basis() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL: return Basis();
		}
	return _wasgo_wrapper_operator_Basis(wasgo_id);
}

Variant::operator Quat() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return Quat();
		}
	return _wasgo_wrapper_operator_Quat(wasgo_id);
}

Variant::operator Transform() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return Transform();
		}
	return _wasgo_wrapper_operator_Transform(wasgo_id);
}

Variant::operator Transform2D() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return Transform2D();
		}
	return _wasgo_wrapper_operator_Transform2D(wasgo_id);
}

Variant::operator Color() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return Color();
		}
	return _wasgo_wrapper_operator_Color(wasgo_id);
}

Variant::operator NodePath() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return NodePath();
		}
	return _wasgo_wrapper_operator_NodePath(wasgo_id);
}

Variant::operator RefPtr() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return RefPtr();
		}
	return _wasgo_wrapper_operator_RefPtr(wasgo_id);
}


Variant::operator RID() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return RID();
		}
	return _wasgo_wrapper_operator_RID(wasgo_id);
	
}

Variant::operator Object *() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return NULL;
		}
	return _wasgo_wrapper_operator_Object_ptr(wasgo_id);
}
Variant::operator Node *() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return NULL;
		}
	return _wasgo_wrapper_operator_Node_ptr(wasgo_id);
}
Variant::operator Control *() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return NULL;
		}
	return _wasgo_wrapper_operator_Control_ptr(wasgo_id);
}

Variant::operator Dictionary() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return Dictionary();
		}
	return _wasgo_wrapper_operator_Dictionary(wasgo_id);
}

/*
template <class DA, class SA>
inline DA _convert_array(const SA &p_array) {

	DA da;
	da.resize(p_array.size());

	for (int i = 0; i < p_array.size(); i++) {

		da.set(i, Variant(p_array.get(i)));
	}

	return da;
}

template <class DA>
inline DA _convert_array_from_variant(const Variant &p_variant) {

	switch (p_variant.get_type()) {

		case Variant::ARRAY: {
			return _convert_array<DA, Array>(p_variant.operator Array());
		}
		case Variant::POOL_BYTE_ARRAY: {
			return _convert_array<DA, PoolVector<uint8_t> >(p_variant.operator PoolVector<uint8_t>());
		}
		case Variant::POOL_INT_ARRAY: {
			return _convert_array<DA, PoolVector<int> >(p_variant.operator PoolVector<int>());
		}
		case Variant::POOL_REAL_ARRAY: {
			return _convert_array<DA, PoolVector<real_t> >(p_variant.operator PoolVector<real_t>());
		}
		case Variant::POOL_STRING_ARRAY: {
			return _convert_array<DA, PoolVector<String> >(p_variant.operator PoolVector<String>());
		}
		case Variant::POOL_VECTOR2_ARRAY: {
			return _convert_array<DA, PoolVector<Vector2> >(p_variant.operator PoolVector<Vector2>());
		}
		case Variant::POOL_VECTOR3_ARRAY: {
			return _convert_array<DA, PoolVector<Vector3> >(p_variant.operator PoolVector<Vector3>());
		}
		case Variant::POOL_COLOR_ARRAY: {
			return _convert_array<DA, PoolVector<Color> >(p_variant.operator PoolVector<Color>());
		}
		default: {
			return DA();
		}
	}
}*/

Variant::operator Array() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return _convert_array_from_variant_Array(*this);
		}
	return _wasgo_wrapper_operator_Array(wasgo_id);
}

Variant::operator PoolVector<uint8_t>() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return _convert_array_from_variant<PoolVector<uint8_t>>(*this);
		}
	return _wasgo_wrapper_operator_PoolVector_uint8_t(wasgo_id);
}

Variant::operator PoolVector<int>() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return _convert_array_from_variant<PoolVector<int>>(*this);
		}
	return _wasgo_wrapper_operator_PoolVector_int(wasgo_id);
}

Variant::operator PoolVector<real_t>() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return _convert_array_from_variant<PoolVector<real_t>>(*this);
		}
	return _wasgo_wrapper_operator_PoolVector_real_t(wasgo_id);
}

Variant::operator PoolVector<String>() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return _convert_array_from_variant<PoolVector<String>>(*this);
		}
	return _wasgo_wrapper_operator_PoolVector_String(wasgo_id);
}
Variant::operator PoolVector<Vector3>() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return _convert_array_from_variant<PoolVector<Vector3>>(*this);
		}
	return _wasgo_wrapper_operator_PoolVector_Vector3(wasgo_id);
}
Variant::operator PoolVector<Vector2>() const {

	switch (type) {
		case BOOL:
		case INT:
		case REAL:	return _convert_array_from_variant<PoolVector<Vector2>>(*this);
		}
	return _wasgo_wrapper_operator_PoolVector_Vector2(wasgo_id);
}

Variant::operator PoolVector<Color>() const {

		switch (type) {
		case BOOL:
		case INT:
		case REAL:	return _convert_array_from_variant<PoolVector<Color>>(*this);
		}
	return _wasgo_wrapper_operator_PoolVector_Color(wasgo_id);
}

/* helpers */

Variant::operator Vector<RID>() const {

	return _wasgo_wrapper_operator_Vector_RID(wasgo_id);
}

Variant::operator Vector<Vector2>() const {

	return _wasgo_wrapper_operator_Vector_Vector2(wasgo_id);
}

Variant::operator PoolVector<Plane>() const {

	return _wasgo_wrapper_operator_Vector_Plane(wasgo_id);
}

Variant::operator PoolVector<Face3>() const {

	return _wasgo_wrapper_operator_Vector_Faces(wasgo_id);
}


