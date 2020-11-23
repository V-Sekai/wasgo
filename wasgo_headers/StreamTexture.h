/* THIS FILE IS GENERATED */
#ifndef STREAMTEXTURE_H
#define STREAMTEXTURE_H

#include <stdint.h>

#include "String.h"
#include "Erro.h"
#include "Texture.h"
class StreamTexture : public Texture{
public: StreamTexture();
String  get_load_path();
String  get_load_path();
enum.Error  load(String path);
};
#endif