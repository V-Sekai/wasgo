/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Container.h"
class BoxContainer : public Container{
public: BoxContainer();
enum AlignMode{
ALIGN_BEGIN: 0,
ALIGN_CENTER: 1,
};
void  add_spacer(bool begin);
enum.BoxContainer::AlignMode  get_alignment();
enum.BoxContainer::AlignMode  get_alignment();
void  set_alignment(int alignment);
};