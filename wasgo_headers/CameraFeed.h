/* THIS FILE IS GENERATED */
#ifndef CAMERAFEED_H
#define CAMERAFEED_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
class CameraFeed : public Reference{
public: CameraFeed();
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
};
#endif