/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Object.h"
#include "Translation.h"
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