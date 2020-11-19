/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "PoolStringArray.h"
#include "Resource.h"
class Translation : public Resource{
public: Translation();
PoolStringArray  _get_messages();
PoolStringArray  _get_messages();
void  _set_messages(PoolStringArray arg0);
void  add_message(String src_message, String xlated_message);
void  erase_message(String src_message);
String  get_locale();
String  get_locale();
String  get_message(String src_message);
int  get_message_count();
int  get_message_count();
PoolStringArray  get_message_list();
PoolStringArray  get_message_list();
void  set_locale(String locale);
};