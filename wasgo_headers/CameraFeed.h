/* THIS FILE IS GENERATED */
#ifndef CAMERAFEED_H
#define CAMERAFEED_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
class CameraFeed : public Reference{
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

CameraFeed(WasGoId p_wasgo_id);
~CameraFeed();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CameraFeed_wrapper_get_id(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_CameraFeed_wrapper_get_name(WasGoId wasgo_id);
}
#endif