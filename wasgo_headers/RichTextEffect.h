/* THIS FILE IS GENERATED */
#ifndef RICHTEXTEFFECT_H
#define RICHTEXTEFFECT_H

#include <stdint.h>

#include "CharFXTransform.h"
#include "Resource.h"
class RichTextEffect : public Resource{
public: RichTextEffect();
bool  _process_custom_fx(CharFXTransform char_fx);
};
#endif