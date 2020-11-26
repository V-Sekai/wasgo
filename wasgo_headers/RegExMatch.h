/* THIS FILE IS GENERATED */
#ifndef REGEXMATCH_H
#define REGEXMATCH_H

#include <stdint.h>

#include "Dictionary.h"
#include "Reference.h"
#include "String.h"
#include "Variant.h"
class RegExMatch : public Reference{
public: RegExMatch();
int  get_end(Variant name = 0);
int  get_group_count();
int  get_group_count();
Dictionary  get_names();
Dictionary  get_names();
int  get_start(Variant name = 0);
String  get_string(Variant name = 0);
Array  get_strings();
Array  get_strings();
String  get_subject();
String  get_subject();
};
#endif