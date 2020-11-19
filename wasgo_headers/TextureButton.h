/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Texture.h"
#include "BaseButton.h"
#include "BitMap.h"
class TextureButton : public BaseButton{
public: TextureButton();
enum StretchMode{
STRETCH_SCALE: 0,
STRETCH_TILE: 1,
STRETCH_KEEP: 2,
STRETCH_KEEP_CENTERED: 3,
STRETCH_KEEP_ASPECT: 4,
STRETCH_KEEP_ASPECT_CENTERED: 5,
};
BitMap  get_click_mask();
BitMap  get_click_mask();
Texture  get_disabled_texture();
Texture  get_disabled_texture();
bool  get_expand();
bool  get_expand();
Texture  get_focused_texture();
Texture  get_focused_texture();
Texture  get_hover_texture();
Texture  get_hover_texture();
Texture  get_normal_texture();
Texture  get_normal_texture();
Texture  get_pressed_texture();
Texture  get_pressed_texture();
enum.TextureButton::StretchMode  get_stretch_mode();
enum.TextureButton::StretchMode  get_stretch_mode();
void  set_click_mask(BitMap mask);
void  set_disabled_texture(Texture texture);
void  set_expand(bool p_expand);
void  set_focused_texture(Texture texture);
void  set_hover_texture(Texture texture);
void  set_normal_texture(Texture texture);
void  set_pressed_texture(Texture texture);
void  set_stretch_mode(int p_mode);
};