/* THIS FILE IS GENERATED */
#ifndef BUTTONGROUP_H
#define BUTTONGROUP_H

#include "stdint.h"

#include "Variant.h"
#include "Resource.h"
#include "BaseButton.h"
class ButtonGroup : public Resource{
public: ButtonGroup();
Array get_buttons();
BaseButton get_pressed_button();
};
#endif