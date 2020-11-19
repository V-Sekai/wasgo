/* THIS FILE IS GENERATED */
#ifndef VISUALSCRIPTLISTS_H
#define VISUALSCRIPTLISTS_H

#include <stdint.h>

#include "String.h"
#include "VisualScriptNode.h"
class VisualScriptLists : public VisualScriptNode{
public: VisualScriptLists();
void  add_input_data_port(int type, String name, int index);
void  add_output_data_port(int type, String name, int index);
void  remove_input_data_port(int index);
void  remove_output_data_port(int index);
void  set_input_data_port_name(int index, String name);
void  set_input_data_port_type(int index, int type);
void  set_output_data_port_name(int index, String name);
void  set_output_data_port_type(int index, int type);
};
#endif