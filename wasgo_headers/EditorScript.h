/* THIS FILE IS GENERATED */
#ifndef EDITORSCRIPT_H
#define EDITORSCRIPT_H

#include <stdint.h>

#include "Reference.h"
#include "Node.h"
#include "EditorInterface.h"
class EditorScript : public Reference{
public: EditorScript();
void  _run();
void  _run();
void  add_root_node(Node node);
EditorInterface  get_editor_interface();
EditorInterface  get_editor_interface();
Node  get_scene();
Node  get_scene();
};
#endif