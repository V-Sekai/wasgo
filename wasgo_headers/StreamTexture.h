/* THIS FILE IS GENERATED */
#ifndef STREAMTEXTURE_H
#define STREAMTEXTURE_H

#include "wasgo\wasgo.h"

#include "error_list.h"
#include "Texture.h"
#include "ustring.h"
class StreamTexture : public Texture{
public:
String get_load_path();
Error load(String p_path);

protected:
public:
explicit StreamTexture(WasGoID p_wasgo_id);
explicit StreamTexture(Texture other);
StreamTexture new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_StreamTexture_wrapper_get_load_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_StreamTexture_wrapper_load(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_StreamTexture_constructor();
            
}
#endif