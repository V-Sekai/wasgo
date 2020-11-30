/* THIS FILE IS GENERATED */
#ifndef STREAMTEXTURE_H
#define STREAMTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Texture.h"
#include "Error.h"
class StreamTexture : public Texture{
String get_load_path();
Error load(String p_path);

StreamTexture(WasGoId p_wasgo_id);
~StreamTexture();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_StreamTexture_wrapper_get_load_path(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StreamTexture_wrapper_load(WasGoId wasgo_id, WasGo::WasGoId p_path);
}
#endif