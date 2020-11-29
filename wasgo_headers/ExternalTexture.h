/* THIS FILE IS GENERATED */
#ifndef EXTERNALTEXTURE_H
#define EXTERNALTEXTURE_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
class ExternalTexture : public Texture{
public: ExternalTexture();
int get_external_texture_id();
void set_size(Vector2 p_size);
};
#endif