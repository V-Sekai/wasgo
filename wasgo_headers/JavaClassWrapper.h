/* THIS FILE IS GENERATED */
#ifndef JAVACLASSWRAPPER_H
#define JAVACLASSWRAPPER_H

#include <stdint.h>

#include "JavaClass.h"
#include "String.h"
#include "Object.h"
class JavaClassWrapper : public Object{
public: JavaClassWrapper();
JavaClass  wrap(String name);
};
#endif