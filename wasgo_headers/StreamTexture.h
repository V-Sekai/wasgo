/* THIS FILE IS GENERATED */
#ifndef STREAMTEXTURE_H
#define STREAMTEXTURE_H

#include "wasgo\wasgo.h"

#include "error_list.h"
#include "ustring.h"
#include "Texture.h"
class StreamTexture : public Texture{
public:
String get_load_path();
Error load(String p_path);

protected:
StreamTexture(WasGoId p_wasgo_id);
public:
StreamTexture();
~StreamTexture();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_StreamTexture_wrapper_get_load_path(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_StreamTexture_wrapper_load(WasGoId wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor and destructor wrappers
    WasGoId _wasgo_StreamTexture_constructor();
    void _wasgo_StreamTexture_destructor(WasGoId p_wasgo_id);
            
}
#endif