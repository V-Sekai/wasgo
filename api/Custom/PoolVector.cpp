#include "PoolVector.h"

//GENERAL



//POOLBYTEARRAY

// template <>
// uint8_t PoolVector<uint8_t>::get(int p_index) const{
// 	return _wasgo_PoolByteArray_wrapper_get(wasgo_id, p_index);
// }

// template <>
// void PoolVector<uint8_t>::set(int p_index, const uint8_t &p_val){
// 	_wasgo_PoolByteArray_wrapper_set(wasgo_id, p_index, p_val);
// }

// template <>
// void PoolVector<uint8_t>::push_back(const uint8_t &p_val){
// 	_wasgo_PoolByteArray_wrapper_push_back(wasgo_id, p_val);
// }

// template <>
// void PoolVector<uint8_t>::append(const uint8_t &p_val) {
// 	PoolVector<uint8_t>::push_back(p_val);
// }

// template <>
// void PoolVector<uint8_t>::append_array(const PoolVector<uint8_t> &p_arr){
// 	_wasgo_PoolByteArray_wrapper_append_array(wasgo_id, p_arr._get_wasgo_id());
// }

// template <>
// PoolVector<uint8_t> PoolVector<uint8_t>::subarray(int p_from, int p_to){
// 	return PoolVector<uint8_t>(_wasgo_PoolByteArray_wrapper_subarray(wasgo_id, p_from, p_to));
// }

// template <>
// Error PoolVector<uint8_t>::insert(int p_pos, const uint8_t &p_val);