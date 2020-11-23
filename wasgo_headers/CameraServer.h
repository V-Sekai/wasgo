/* THIS FILE IS GENERATED */
#ifndef CAMERASERVER_H
#define CAMERASERVER_H

#include <stdint.h>

#include "Object.h"
#include "Variant.h"
#include "CameraFeed.h"
class CameraServer : public Object{
public: CameraServer();
enum FeedImage{
FEED_RGBA_IMAGE: 0,
FEED_YCBCR_IMAGE: 0,
FEED_Y_IMAGE: 0,
};
void  add_feed(CameraFeed feed);
Array  feeds();
Array  feeds();
CameraFeed  get_feed(int index);
int  get_feed_count();
int  get_feed_count();
void  remove_feed(CameraFeed feed);
};
#endif