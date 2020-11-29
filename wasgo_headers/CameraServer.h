/* THIS FILE IS GENERATED */
#ifndef CAMERASERVER_H
#define CAMERASERVER_H

#include "stdint.h"

#include "Variant.h"
#include "Object.h"
#include "CameraFeed.h"
class CameraServer : public Object{
public: CameraServer();
enum FeedImage{
FEED_RGBA_IMAGE,
FEED_YCBCR_IMAGE,
FEED_Y_IMAGE,
FEED_CBCR_IMAGE
};
void add_feed(CameraFeed p_feed);
Array feeds();
CameraFeed get_feed(int p_index);
int get_feed_count();
void remove_feed(CameraFeed p_feed);
};
#endif