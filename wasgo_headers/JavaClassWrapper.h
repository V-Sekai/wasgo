/* THIS FILE IS GENERATED */
#ifndef JAVACLASSWRAPPER_H
#define JAVACLASSWRAPPER_H

#include <stdint.h>

#include "String.h"
#include "Object.h"
#include "JavaClass.h"
class JavaClassWrapper : public Object{
public: JavaClassWrapper();
JavaClass  wrap(String name);
};
#endif