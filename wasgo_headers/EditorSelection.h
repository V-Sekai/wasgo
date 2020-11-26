/* THIS FILE IS GENERATED */
#ifndef EDITORSELECTION_H
#define EDITORSELECTION_H

#include <stdint.h>

#include "Object.h"
#include "Node.h"
#include "Variant.h"
class EditorSelection : public Object{
public: EditorSelection();
void  _emit_change();
void  _emit_change();
void  _node_removed(Node arg0);
void  add_node(Node node);
void  clear();
void  clear();
Array  get_selected_nodes();
Array  get_selected_nodes();
Array  get_transformable_selected_nodes();
Array  get_transformable_selected_nodes();
void  remove_node(Node node);
};
#endif