/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Erro.h"
#include "String.h"
#include "Variant.h"
#include "Reference.h"
class JSONParseResult : public Reference{
public: JSONParseResult();
enum.Error  get_error();
enum.Error  get_error();
int  get_error_line();
int  get_error_line();
String  get_error_string();
String  get_error_string();
Variant  get_result();
Variant  get_result();
void  set_error(int error);
void  set_error_line(int error_line);
void  set_error_string(String error_string);
void  set_result(Variant result);
};