/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Reference.h"
#include "RegExMatch.h"
#include "Variant.h"
#include "Erro.h"
class RegEx : public Reference{
public: RegEx();
void  clear();
void  clear();
enum.Error  compile(String pattern);
int  get_group_count();
int  get_group_count();
Array  get_names();
Array  get_names();
String  get_pattern();
String  get_pattern();
bool  is_valid();
bool  is_valid();
RegExMatch  search(String subject, int offset = 0, int end = -1);
Array  search_all(String subject, int offset = 0, int end = -1);
String  sub(String subject, String replacement, bool all = false, int offset = 0, int end = -1);
};