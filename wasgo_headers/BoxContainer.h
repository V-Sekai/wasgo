/* THIS FILE IS GENERATED */
#ifndef BOXCONTAINER_H
#define BOXCONTAINER_H

#include "stdint.h"

#include "Container.h"
class BoxContainer : public Container{
public: BoxContainer();
enum AlignMode{
ALIGN_BEGIN,
ALIGN_CENTER,
ALIGN_END
};
void add_spacer(bool p_begin);
BoxContainer::AlignMode get_alignment();
void set_alignment(BoxContainer::AlignMode p_alignment);
};
#endif