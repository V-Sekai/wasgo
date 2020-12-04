/* THIS FILE IS GENERATED */
#ifndef CAMERAFEED_H
#define CAMERAFEED_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "Transform2D.h"
#include "ustring.h"
class CameraFeed : public Reference{
public:
enum FeedDataType{
FEED_NOIMAGE,
FEED_RGB,
FEED_YCBCR,
FEED_YCBCR_SEP
};
enum FeedPosition{
FEED_UNSPECIFIED,
FEED_FRONT,
FEED_BACK
};
int get_id();
String get_name();
CameraFeed::FeedPosition get_position();
Transform2D get_transform();
bool is_active();
void set_active(bool p_active);
void set_transform(Transform2D p_transform);

protected:
public:
explicit CameraFeed(WasGoId p_wasgo_id);
explicit CameraFeed(Reference other);
CameraFeed new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CameraFeed_wrapper_get_id(WasGoId wasgo_id);
void _wasgo_CameraFeed_wrapper_get_name(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoId _wasgo_CameraFeed_wrapper_get_position(WasGoId wasgo_id);
void _wasgo_CameraFeed_wrapper_get_transform(WasGoId wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_CameraFeed_wrapper_is_active(WasGoId wasgo_id);
void _wasgo_CameraFeed_wrapper_set_active(WasGoId wasgo_id, bool p_active);
void _wasgo_CameraFeed_wrapper_set_transform(WasGoId wasgo_id, const uint8_t * p_transform, int p_transform_wasgo_buffer_size);

    //constructor wrappers
    WasGoId _wasgo_CameraFeed_constructor();
            
}
#endif