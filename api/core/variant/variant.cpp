#include "variant.h"
#include "wasgo_encode_decode.h"
#include <string>

Variant::Variant(){
}
Variant::~Variant(){
	_delete_data();
	if (_wasgo_data_type == _id_data) {
		_wasgo_variant_deconstructor(_wasgo_data._id);
	}
}
const bool Variant::_valid_wasgo_id(){
	return _wasgo_data_type == _id_data && _wasgo_variant_check_id(_wasgo_data._id);
}
void Variant::_set_wasgo_id(WasGoID id){
	_wasgo_data_type = _id_data;
	_wasgo_data._id = id;
}
const WasGoID Variant::_get_wasgo_id(){
	if(_wasgo_data_type == _id_data){
		return _wasgo_data._id;
	} else {
		return NULL_WASGO_ID;
	}
}
static char *get_type_name(){
	return "Variant";
}
Variant Variant::call(const char *p_method, Variant **p_args, const size_t p_argcount){
	if(_wasgo_data_type != _id_data){
		return Variant();//data lives on wasm side only
	}
	WasGoByte *args[p_argcount];
	size_t arg_lengths[p_argcount];
	for (int i = 0; i < p_argcount; i++) {
		if(p_args[i] == nullptr){
			args[i] = 0;
			arg_lengths[i] = 0;
		} else {
			p_args[i]->_wasgo_encode(args[i], arg_lengths[i]);
		}
	}
	WasGoByte *ret_buffer;
	size_t ret_length;
	_wasgo_variant_call(_wasgo_data._id, p_method, args, arg_lengths, p_argcount, ret_buffer, ret_length);
	Variant ret = _wasgo_decode(ret_buffer, ret_length);
	delete ret_buffer;
	return ret;
}
Variant Variant::call_op(const Operator p_op, Variant **p_args, const size_t p_argcount){
	if(_wasgo_data_type != _id_data){
		return Variant();//data lives on wasm side only
	}
	WasGoByte *args[p_argcount];
	size_t arg_lengths[p_argcount];
	for (int i = 0; i < p_argcount; i++) {
		if(p_args[i] == nullptr){
			args[i] = 0;
			arg_lengths[i] = 0;
		} else {
			p_args[i]->_wasgo_encode(args[i], arg_lengths[i]);
		}
	}
	WasGoByte *ret_buffer;
	size_t ret_length;
	_wasgo_variant_call_op(_wasgo_data._id, p_op, args, arg_lengths, p_argcount, ret_buffer, ret_length);
	Variant ret = _wasgo_decode(ret_buffer, ret_length);
	delete ret_buffer;
	return ret;
}
Variant Variant::call_const(const char *p_method, Variant **p_args, const size_t p_argcount){
	if(_wasgo_data_type != _id_data){
		return Variant();//data lives on wasm side only
	}
	WasGoByte *args[p_argcount];
	size_t arg_lengths[p_argcount];
	for (int i = 0; i < p_argcount; i++) {
		if(p_args[i] == nullptr){
			args[i] = 0;
			arg_lengths[i] = 0;
		} else {
			p_args[i]->_wasgo_encode(args[i], arg_lengths[i]);
		}
	}
	WasGoByte *ret_buffer;
	size_t ret_length;
	_wasgo_variant_call_const(_wasgo_data._id, p_method, args, arg_lengths, p_argcount, ret_buffer, ret_length);
	Variant ret = _wasgo_decode(ret_buffer, ret_length);
	delete ret_buffer;
	return ret;
}
Variant Variant::call_static(const char *p_method, Variant **p_args, const size_t p_argcount){
	WasGoByte *args[p_argcount];
	size_t arg_lengths[p_argcount];
	for (int i = 0; i < p_argcount; i++) {
		if(p_args[i] == nullptr){
			args[i] = 0;
			arg_lengths[i] = 0;
		} else {
			p_args[i]->_wasgo_encode(args[i], arg_lengths[i]);
		}
	}
	WasGoByte *ret_buffer;
	size_t ret_length;
	_wasgo_variant_call_static(_get_wasgo_type_name(), p_method, args, arg_lengths, p_argcount, ret_buffer, ret_length);
	Variant ret = _wasgo_decode(ret_buffer, ret_length);
	delete ret_buffer;
	return ret;
}

void Variant::_wasgo_encode(WasGoByte * &p_buffer, size_t &p_length){//overwrite this if you have some extra logic
	//if data is stored on godot side, just write the wasgo_id, else encode data to buffer
	WasGoByte *data_buffer;
	switch (_wasgo_data_type) {
		case (_bool_data):{
			p_length = encode_uint64((uint64_t) _wasgo_data._bool, nullptr);//this is how godot gets the length for things it encodes
			data_buffer = new WasGoByte[p_length];
			encode_uint64((uint64_t)_wasgo_data._bool, data_buffer);
			break;
		}
		case (_int_data):{
			p_length = encode_uint64((uint64_t) _wasgo_data._int, nullptr);//this is how godot gets the length for things it encodes
			data_buffer = new WasGoByte[p_length];
			encode_uint64((uint64_t) _wasgo_data._int, data_buffer);
			break;
		}
		case (_float_data):{
			p_length = encode_double((double) _wasgo_data._float, nullptr);//this is how godot gets the length for things it encodes
			data_buffer = new WasGoByte[p_length];
			encode_double((double) _wasgo_data._float, data_buffer);
			break;
		}
		case (_str_data):{
			p_length = encode_cstring((char *) _wasgo_data._str, nullptr);//this is how godot gets the length for things it encodes
			data_buffer = new WasGoByte[p_length];
			encode_cstring((char *) _wasgo_data._str, data_buffer);
			break;
		}
		case (_id_data):{
			p_length = encode_cstring((char *) _get_wasgo_type_name(), nullptr) + encode_uint64((uint64_t) _wasgo_data._id, nullptr);//this is how godot gets the length for things it encodes
			p_buffer = new WasGoByte[p_length];
			size_t offset = encode_cstring((char *) _get_wasgo_type_name(), p_buffer);
			encode_uint64((uint64_t) _wasgo_data._id, p_buffer + offset);
			break;
		}
		default:{//ptr_data
			_custom_wasgo_encode(data_buffer, p_length);
			break;
		}
	}
	//first byte tells us what type it is
	p_length ++;
	p_buffer = new WasGoByte[p_length];
	p_buffer[0] = (WasGoByte)_wasgo_data_type;
	memcpy(p_buffer + 1, data_buffer, p_length - 1);
	delete (data_buffer);
}
void Variant::_custom_wasgo_encode(WasGoByte * &p_buffer, size_t &p_length){//overwrite this to implement a datatype that lives on wasm-side but needs to occasionally be sent to godot-side. Needs to mimic how Godot's built-in encoder works
	p_length = 0;
}

Variant Variant::_wasgo_decode(WasGoByte * p_bytes, size_t p_length){
	Variant v;
	if(p_length == 0){
		return v;
	}
	v._wasgo_data_type = (Variant::_wasgo_data_enum)p_bytes[0];
	if(p_length < 2){
		return v;
	}
	switch (v._wasgo_data_type) {
		case (_bool_data):{
			v._wasgo_data._bool = (bool) decode_uint64(p_bytes + 1);
			break;
		}
		case (_int_data):{
			v._wasgo_data._int = (int64_t) decode_uint64(p_bytes + 1);
			break;
		}
		case (_float_data):{
			v._wasgo_data._float = (double) decode_uint64(p_bytes + 1);
			break;
		}
		case (_str_data):{
			WasGoByte *remaining_bytes = p_bytes + 1;
			size_t remaining_length = p_length - 1;
			_decode_string(remaining_bytes, remaining_length, nullptr, v._wasgo_data._str);
			break;
		}
		case (_id_data):{
			//skip decoding the variant type string for now. We'll figure out what to do with it later
			v._wasgo_data._id = (WasGoID) decode_uint64(p_bytes + p_length - sizeof(WasGoID));
			break;
		}
		default:{//ptr_data
			return _custom_wasgo_decode(p_bytes, p_length);
			break;
		}
	}
	return v;
}
Variant Variant::_custom_wasgo_decode(uint8_t * p_bytes, size_t p_length){//overwrite this to implement a datatype that lives on wasm-side but needs to occasionally be sent to godot-side. Needs to mimic how Godot's built-in decoder works
	Variant v;
	return v;
}

Variant::operator bool() const{
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		case (_str_data):{
			return _wasgo_data._str;
		}
		case (_id_data):{
			return _wasgo_data._id;
		}
	}
}
Variant::Variant(bool p_bool){
	_wasgo_data_type = _bool_data;
	_wasgo_data._bool = p_bool;
}
// Variant::operator int()const{
// 	switch (_wasgo_data_type) {
// 		case (_bool_data):{
// 			return _wasgo_data._bool;
// 		}
// 		case (_int_data):{
// 			return _wasgo_data._int;
// 		}
// 		case (_float_data):{
// 			printf("we are casting floats to ints\n");
// 			return _wasgo_data._float;
// 		}
// 		default:{//ptr_data
// 			printf("Error casting Variant to int\n");
// 			return 0;
// 		}
// 	}
// }
// Variant::Variant(int p_int){
// 	_wasgo_data_type = _int_data;
// 	_wasgo_data._int = p_int;
// }
// Variant::operator uint8_t()const{
// 	switch (_wasgo_data_type) {
// 		case (_bool_data):{
// 			return _wasgo_data._bool;
// 		}
// 		case (_int_data):{
// 			return _wasgo_data._int;
// 		}
// 		case (_float_data):{
// 			return _wasgo_data._float;
// 		}
// 		default:{//ptr_data
// 			printf("Error casting Variant to uint8_t\n");
// 			return 0;
// 		}
// 	}
// }
// Variant::Variant(uint8_t p_uint8_t){
// 	_wasgo_data_type = _int_data;
// 	_wasgo_data._int = p_uint8_t;
// }
// Variant::operator uint16_t()const{
// 	switch (_wasgo_data_type) {
// 		case (_bool_data):{
// 			return _wasgo_data._bool;
// 		}
// 		case (_int_data):{
// 			return _wasgo_data._int;
// 		}
// 		case (_float_data):{
// 			return _wasgo_data._float;
// 		}
// 		default:{//ptr_data
// 			printf("Error casting Variant to uint16_t\n");
// 			return 0;
// 		}
// 	}
// }
// Variant::Variant(uint16_t p_uint16_t){
// 	_wasgo_data_type = _int_data;
// 	_wasgo_data._int = p_uint16_t;
// }
// Variant::operator uint32_t()const{
// 	switch (_wasgo_data_type) {
// 		case (_bool_data):{
// 			return _wasgo_data._bool;
// 		}
// 		case (_int_data):{
// 			return _wasgo_data._int;
// 		}
// 		case (_float_data):{
// 			return _wasgo_data._float;
// 		}
// 		default:{//ptr_data
// 			printf("Error casting Variant to uint32_t\n");
// 			return 0;
// 		}
// 	}
// }
// Variant::Variant(uint32_t p_uint32_t){
// 	_wasgo_data_type = _int_data;
// 	_wasgo_data._int = p_uint32_t;
// }
Variant::operator uint64_t()const{
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		default:{//ptr_data
			printf("Error casting Variant to uint64_t\n");
			return 0;
		}
	}
}
Variant::Variant(uint64_t p_uint64_t){
	_wasgo_data_type = _int_data;
	_wasgo_data._int = p_uint64_t;
}
// Variant::operator int8_t()const{
// 	switch (_wasgo_data_type) {
// 		case (_bool_data):{
// 			return _wasgo_data._bool;
// 		}
// 		case (_int_data):{
// 			return _wasgo_data._int;
// 		}
// 		case (_float_data):{
// 			return _wasgo_data._float;
// 		}
// 		default:{//ptr_data
// 			printf("Error casting Variant to int8_t\n");
// 			return 0;
// 		}
// 	}
// }
// Variant::Variant(int8_t p_int8_t){
// 	_wasgo_data_type = _int_data;
// 	_wasgo_data._int = p_int8_t;
// }
// Variant::operator int16_t()const{
// 	switch (_wasgo_data_type) {
// 		case (_bool_data):{
// 			return _wasgo_data._bool;
// 		}
// 		case (_int_data):{
// 			return _wasgo_data._int;
// 		}
// 		case (_float_data):{
// 			return _wasgo_data._float;
// 		}
// 		default:{//ptr_data
// 			printf("Error casting Variant to int16_t\n");
// 			return 0;
// 		}
// 	}
// }
// Variant::Variant(int16_t p_int16_t){
// 	_wasgo_data_type = _int_data;
// 	_wasgo_data._int = p_int16_t;
// }
// Variant::operator int32_t()const{
// 	switch (_wasgo_data_type) {
// 		case (_bool_data):{
// 			return _wasgo_data._bool;
// 		}
// 		case (_int_data):{
// 			return _wasgo_data._int;
// 		}
// 		case (_float_data):{
// 			return _wasgo_data._float;
// 		}
// 		default:{//ptr_data
// 			printf("Error casting Variant to int32_t\n");
// 			return 0;
// 		}
// 	}
// }
// Variant::Variant(int32_t p_int32_t){
// 	_wasgo_data_type = _int_data;
// 	_wasgo_data._int = p_int32_t;
// }
Variant::operator int64_t()const{
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		default:{//ptr_data
			printf("Error casting Variant to int64_t\n");
			return 0;
		}
	}
}
Variant::Variant(int64_t p_int64_t){
	_wasgo_data_type = _int_data;
	_wasgo_data._int = p_int64_t;
}

Variant::operator signed int() const{
	
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		default:{//ptr_data
			printf("Error casting Variant to signed int\n");
			return 0;
		}
	}
}
Variant::Variant(signed int p_int){
	_wasgo_data_type = _int_data;
	_wasgo_data._int = p_int;
}
Variant::operator unsigned int() const{
	
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		default:{//ptr_data
			printf("Error casting Variant to unsigned int\n");
			return 0;
		}
	}
}
Variant::Variant(unsigned int p_int){
	_wasgo_data_type = _int_data;
	_wasgo_data._int = p_int;
}
Variant::operator signed short() const{
	
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		default:{//ptr_data
			printf("Error casting Variant to signed short\n");
			return 0;
		}
	}
}
Variant::Variant(signed short p_short){
	_wasgo_data_type = _int_data;
	_wasgo_data._int = p_short;
}
Variant::operator unsigned short() const{
	
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		default:{//ptr_data
			printf("Error casting Variant to unsigned short\n");
			return 0;
		}
	}
}
Variant::Variant(unsigned short p_short){
	_wasgo_data_type = _int_data;
	_wasgo_data._int = p_short;
}
Variant::operator signed char() const{
	
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		default:{//ptr_data
			printf("Error casting Variant to signed char\n");
			return 0;
		}
	}
}
Variant::Variant(signed char p_char){
	_wasgo_data_type = _int_data;
	_wasgo_data._int = p_char;
}
Variant::operator unsigned char() const{
	
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		default:{//ptr_data
			printf("Error casting Variant to unsigned char\n");
			return 0;
		}
	}
}
Variant::Variant(unsigned char p_char){
	_wasgo_data_type = _int_data;
	_wasgo_data._int = p_char;
}

Variant::operator float()const{
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		default:{//ptr_data
			printf("Error casting Variant to float\n");
			return 0;
		}
	}
}
Variant::Variant(float p_float){
	_wasgo_data_type = _float_data;
	_wasgo_data._float = p_float;
}
Variant::operator double()const{
	switch (_wasgo_data_type) {
		case (_bool_data):{
			return _wasgo_data._bool;
		}
		case (_int_data):{
			return _wasgo_data._int;
		}
		case (_float_data):{
			return _wasgo_data._float;
		}
		default:{//ptr_data
			printf("Error casting Variant to double\n");
			return 0;
		}
	}
}
Variant::Variant(double p_double){
	_wasgo_data_type = _float_data;
	_wasgo_data._float = p_double;
}

Variant::operator char *()const{
	switch (_wasgo_data_type) {
		case (_str_data):{
			return _wasgo_data._str;
		}
		default:{//ptr_data
			printf("Error casting Variant to char *\n");
			return "";
		}
	}
}
// Variant::operator wchar_t *()const{
// 	switch (_wasgo_data_type) {
// 		case (_str_data):{
// 			return _wasgo_data._str;
// 		}
// 		default:{//ptr_data
// 			printf("Error casting Variant to char *\n");
// 			return L"";
// 		}
// 	}
// }
Variant::Variant(const char *const p_char_str){
	_wasgo_data_type = _str_data;
	size_t wstring_length = 0;
	_wasgo_data._str = (char *)malloc(strlen(p_char_str));
	strcpy(_wasgo_data._str, p_char_str);
}
// Variant::Variant(const wchar_t *const p_wstring){
// 	_delete_data();
// 	_wasgo_data_type = _str_data;
// 	size_t wstring_length = 0;
// 	_wasgo_data._str = (wchar_t *)malloc(wcslen(p_wstring) * sizeof(wchar_t));
// 	wcscpy(_wasgo_data._str, p_wstring);
// }

void Variant::_delete_data(){
	if(_wasgo_data_type == _str_data && _wasgo_data._str != nullptr){
		// delete[] _wasgo_data._str;
		free(_wasgo_data._str);
		_wasgo_data._str = nullptr;
	}
}