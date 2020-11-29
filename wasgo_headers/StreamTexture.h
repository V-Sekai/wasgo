/* THIS FILE IS GENERATED */
#ifndef STREAMTEXTURE_H
#define STREAMTEXTURE_H

#include "stdint.h"

#include "Variant.h"
#include "Texture.h"
#include "Error.h"
class StreamTexture : public Texture{
public: StreamTexture();
String get_load_path();
Error load(String p_path);
};
#endif