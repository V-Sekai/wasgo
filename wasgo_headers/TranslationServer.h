/* THIS FILE IS GENERATED */
#ifndef TRANSLATIONSERVER_H
#define TRANSLATIONSERVER_H

#include <stdint.h>

#include "Translation.h"
#include "Object.h"
#include "String.h"
#include "Variant.h"
class TranslationServer : public Object{
public: TranslationServer();
void  add_translation(Translation translation);
void  clear();
void  clear();
Array  get_loaded_locales();
Array  get_loaded_locales();
String  get_locale();
String  get_locale();
String  get_locale_name(String locale);
void  remove_translation(Translation translation);
void  set_locale(String locale);
String  translate(String message);
};
#endif