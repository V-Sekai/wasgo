/* THIS FILE IS GENERATED */
#ifndef TRANSLATION_H
#define TRANSLATION_H

#include "wasgo\wasgo.h"

#include "Resource.h"
#include "Variant.h"
#include "ustring.h"
class Translation : public Resource{
public:
void add_message(String p_src_message, String p_xlated_message);
void erase_message(String p_src_message);
String get_locale();
String get_message(String p_src_message);
int get_message_count();
PoolStringArray get_message_list();
void set_locale(String p_locale);

protected:
public:
explicit Translation(WasGoId p_wasgo_id);
explicit Translation(Resource other);
Translation new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Translation_wrapper_add_message(WasGoId wasgo_id, const uint8_t * p_src_message, int p_src_message_wasgo_buffer_size, const uint8_t * p_xlated_message, int p_xlated_message_wasgo_buffer_size);
void _wasgo_Translation_wrapper_erase_message(WasGoId wasgo_id, const uint8_t * p_src_message, int p_src_message_wasgo_buffer_size);
void _wasgo_Translation_wrapper_get_locale(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Translation_wrapper_get_message(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, const uint8_t * p_src_message, int p_src_message_wasgo_buffer_size);
int _wasgo_Translation_wrapper_get_message_count(WasGoId wasgo_id);
WasGoId _wasgo_Translation_wrapper_get_message_list(WasGoId wasgo_id);
void _wasgo_Translation_wrapper_set_locale(WasGoId wasgo_id, const uint8_t * p_locale, int p_locale_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_Translation_constructor();
            
}
#endif