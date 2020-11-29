/* THIS FILE IS GENERATED */
#ifndef CAMERATEXTURE_H
#define CAMERATEXTURE_H

#include "stdint.h"

#include "Texture.h"
#include "CameraServer.h"
class CameraTexture : public Texture{
public: CameraTexture();
bool get_camera_active();
int get_camera_feed_id();
CameraServer::FeedImage get_which_feed();
void set_camera_active(bool p_active);
void set_camera_feed_id(int p_feed_id);
void set_which_feed(CameraServer::FeedImage p_which_feed);
};
#endif