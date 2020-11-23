/* THIS FILE IS GENERATED */
#ifndef EDITORSCENEPOSTIMPORT_H
#define EDITORSCENEPOSTIMPORT_H

#include <stdint.h>

#include "Reference.h"
#include "String.h"
#include "Object.h"
class EditorScenePostImport : public Reference{
public: EditorScenePostImport();
String  get_source_file();
String  get_source_file();
String  get_source_folder();
String  get_source_folder();
Object  post_import(Object scene);
};
#endif