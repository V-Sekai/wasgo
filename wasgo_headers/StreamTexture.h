/* THIS FILE IS GENERATED */
#ifndef STREAMTEXTURE_H
#define STREAMTEXTURE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Texture.h"
#include "error_list.h"
class StreamTexture : public Texture{
public:
String get_load_path();
Error load(String p_path);

StreamTexture(WasGoId p_wasgo_id);
~StreamTexture();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_StreamTexture_wrapper_get_load_path(WasGoId wasgo_id);
WasGoId _wasgo_StreamTexture_wrapper_load(WasGoId wasgo_id, WasGoId p_path);
}
#endif