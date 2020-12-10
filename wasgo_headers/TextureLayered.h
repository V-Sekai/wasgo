/* THIS FILE IS GENERATED */
#ifndef TEXTURELAYERED_H
#define TEXTURELAYERED_H

#include "wasgo\wasgoid.h"

#include "Image.h"
#include "Resource.h"
class TextureLayered : public Resource{
public:
enum Flags{
FLAG_MIPMAPS,
FLAG_REPEAT,
FLAG_FILTER,
FLAGS_DEFAULT
};
void create(int p_width, int p_height, int p_depth, Image::Format p_format, int p_flags = (int) 4);
int get_depth();
int get_flags();
Image::Format get_format();
int get_height();
Image get_layer_data(int p_layer);
int get_width();
void set_data_partial(Image p_image, int p_x_offset, int p_y_offset, int p_layer, int p_mipmap = (int) 0);
void set_flags(int p_flags);
void set_layer_data(Image p_image, int p_layer);

protected:
public:
explicit TextureLayered(WasGoID p_wasgo_id);
explicit TextureLayered(Resource other);
TextureLayered();
TextureLayered new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_TextureLayered_wrapper_create(WasGoID wasgo_id, int p_width, int p_height, int wasgo_throwaway, int p_depth, WasGoID p_format, int p_flags);
int _wasgo_TextureLayered_wrapper_get_depth(WasGoID wasgo_id);
int _wasgo_TextureLayered_wrapper_get_flags(WasGoID wasgo_id);
WasGoID _wasgo_TextureLayered_wrapper_get_format(WasGoID wasgo_id);
int _wasgo_TextureLayered_wrapper_get_height(WasGoID wasgo_id);
WasGoID _wasgo_TextureLayered_wrapper_get_layer_data(WasGoID wasgo_id, int p_layer);
int _wasgo_TextureLayered_wrapper_get_width(WasGoID wasgo_id);
void _wasgo_TextureLayered_wrapper_set_data_partial(WasGoID wasgo_id, WasGoID p_image, int p_x_offset, int wasgo_throwaway, int p_y_offset, int p_layer, int p_mipmap);
void _wasgo_TextureLayered_wrapper_set_flags(WasGoID wasgo_id, int p_flags);
void _wasgo_TextureLayered_wrapper_set_layer_data(WasGoID wasgo_id, WasGoID p_image, int p_layer);

    //constructor wrappers
    WasGoID _wasgo_TextureLayered_constructor();
            
}
#endif