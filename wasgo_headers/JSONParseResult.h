/* THIS FILE IS GENERATED */
#ifndef JSONPARSERESULT_H
#define JSONPARSERESULT_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "Error.h"
class JSONParseResult : public Reference{
public: JSONParseResult();
Error get_error();
int get_error_line();
String get_error_string();
Variant get_result();
void set_error(Error p_error);
void set_error_line(int p_error_line);
void set_error_string(String p_error_string);
void set_result(Variant p_result);
};
#endif