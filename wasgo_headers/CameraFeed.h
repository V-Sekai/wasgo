/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Transform2D.h"
#include "String.h"
#include "Reference.h"
#include "Image.h"
class CameraFeed : public Reference{
public: CameraFeed();
enum FeedDataType{
FEED_NOIMAGE: 0,
FEED_RGB: 1,
FEED_YCBCR: 2,
};
enum FeedPosition{
FEED_UNSPECIFIED: 0,
FEED_FRONT: 1,
};
void  _allocate_texture(int width, int height, int format, int texture_type, int data_type);
void  _set_RGB_img(Image rgb_img);
void  _set_YCbCr_img(Image ycbcr_img);
void  _set_YCbCr_imgs(Image y_img, Image cbcr_img);
void  _set_name(String name);
void  _set_position(int position);
int  get_id();
int  get_id();
String  get_name();
String  get_name();
enum.CameraFeed::FeedPosition  get_position();
enum.CameraFeed::FeedPosition  get_position();
Transform2D  get_transform();
Transform2D  get_transform();
bool  is_active();
bool  is_active();
void  set_active(bool active);
void  set_transform(Transform2D transform);
};