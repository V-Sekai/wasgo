/* THIS FILE IS GENERATED */
#ifndef TRANSLATION_H
#define TRANSLATION_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
class Translation : public Resource{
public: Translation();
void add_message(String p_src_message, String p_xlated_message);
void erase_message(String p_src_message);
String get_locale();
String get_message(String p_src_message);
int get_message_count();
PoolStringArray get_message_list();
void set_locale(String p_locale);
};
#endif