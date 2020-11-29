/* THIS FILE IS GENERATED */
#ifndef PROXYTEXTURE_H
#define PROXYTEXTURE_H

#include "stdint.h"

#include "Texture.h"
class ProxyTexture : public Texture{
public: ProxyTexture();
Texture get_base();
void set_base(Texture p_base);
};
#endif