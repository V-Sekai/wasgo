/* THIS FILE IS GENERATED */
#ifndef TRANSLATION_H
#define TRANSLATION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Resource.h"
class Translation : public Resource{
void add_message(String p_src_message, String p_xlated_message);
void erase_message(String p_src_message);
String get_locale();
String get_message(String p_src_message);
int get_message_count();
PoolStringArray get_message_list();
void set_locale(String p_locale);

Translation(WasGoId p_wasgo_id);
~Translation();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Translation_wrapper_add_message(WasGoId wasgo_id, WasGo::WasGoId p_src_message, WasGo::WasGoId p_xlated_message);
void _wasgo_Translation_wrapper_erase_message(WasGoId wasgo_id, WasGo::WasGoId p_src_message);
WasGo::WasGoId _wasgo_Translation_wrapper_get_locale(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Translation_wrapper_get_message(WasGoId wasgo_id, WasGo::WasGoId p_src_message);
int _wasgo_Translation_wrapper_get_message_count(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_Translation_wrapper_get_message_list(WasGoId wasgo_id);
void _wasgo_Translation_wrapper_set_locale(WasGoId wasgo_id, WasGo::WasGoId p_locale);
}
#endif