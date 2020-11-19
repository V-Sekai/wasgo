/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Texture.h"
#include "Range.h"
#include "Vector2.h"
#include "Variant.h"
class TextureProgress : public Range{
public: TextureProgress();
enum FillMode{
FILL_LEFT_TO_RIGHT: 0,
FILL_RIGHT_TO_LEFT: 1,
FILL_TOP_TO_BOTTOM: 2,
FILL_BOTTOM_TO_TOP: 3,
FILL_CLOCKWISE: 4,
FILL_COUNTER_CLOCKWISE: 5,
FILL_BILINEAR_LEFT_AND_RIGHT: 6,
FILL_BILINEAR_TOP_AND_BOTTOM: 7,
};
float  get_fill_degrees();
float  get_fill_degrees();
int  get_fill_mode();
int  get_fill_mode();
bool  get_nine_patch_stretch();
bool  get_nine_patch_stretch();
Texture  get_over_texture();
Texture  get_over_texture();
Texture  get_progress_texture();
Texture  get_progress_texture();
Vector2  get_radial_center_offset();
Vector2  get_radial_center_offset();
float  get_radial_initial_angle();
float  get_radial_initial_angle();
int  get_stretch_margin(int margin);
Color  get_tint_over();
Color  get_tint_over();
Color  get_tint_progress();
Color  get_tint_progress();
Color  get_tint_under();
Color  get_tint_under();
Texture  get_under_texture();
Texture  get_under_texture();
void  set_fill_degrees(float mode);
void  set_fill_mode(int mode);
void  set_nine_patch_stretch(bool stretch);
void  set_over_texture(Texture tex);
void  set_progress_texture(Texture tex);
void  set_radial_center_offset(Vector2 mode);
void  set_radial_initial_angle(float mode);
void  set_stretch_margin(int margin, int value);
void  set_tint_over(Color tint);
void  set_tint_progress(Color tint);
void  set_tint_under(Color tint);
void  set_under_texture(Texture tex);
};