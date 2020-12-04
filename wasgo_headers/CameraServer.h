/* THIS FILE IS GENERATED */
#ifndef CAMERASERVER_H
#define CAMERASERVER_H

#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Object.h"
#include "CameraFeed.h"
class CameraServer : public Object{
public:
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

protected:
public:
explicit CameraServer(WasGoId p_wasgo_id);
explicit CameraServer(Object other);
CameraServer new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_CameraServer_wrapper_add_feed(WasGoId wasgo_id, WasGoId p_feed);
WasGoId _wasgo_CameraServer_wrapper_feeds(WasGoId wasgo_id);
WasGoId _wasgo_CameraServer_wrapper_get_feed(WasGoId wasgo_id, int p_index);
int _wasgo_CameraServer_wrapper_get_feed_count(WasGoId wasgo_id);
void _wasgo_CameraServer_wrapper_remove_feed(WasGoId wasgo_id, WasGoId p_feed);

    //constructor wrappers
    WasGoId _wasgo_CameraServer_constructor();
            
}
#endif