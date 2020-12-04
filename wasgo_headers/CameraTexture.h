/* THIS FILE IS GENERATED */
#ifndef CAMERATEXTURE_H
#define CAMERATEXTURE_H

#include "wasgo\wasgo.h"

#include "CameraServer.h"
#include "Texture.h"
class CameraTexture : public Texture{
public:
bool get_camera_active();
int get_camera_feed_id();
CameraServer::FeedImage get_which_feed();
void set_camera_active(bool p_active);
void set_camera_feed_id(int p_feed_id);
void set_which_feed(CameraServer::FeedImage p_which_feed);

protected:
public:
explicit CameraTexture(WasGoId p_wasgo_id);
explicit CameraTexture(Texture other);
CameraTexture new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CameraTexture_wrapper_get_camera_active(WasGoId wasgo_id);
int _wasgo_CameraTexture_wrapper_get_camera_feed_id(WasGoId wasgo_id);
WasGoId _wasgo_CameraTexture_wrapper_get_which_feed(WasGoId wasgo_id);
void _wasgo_CameraTexture_wrapper_set_camera_active(WasGoId wasgo_id, bool p_active);
void _wasgo_CameraTexture_wrapper_set_camera_feed_id(WasGoId wasgo_id, int p_feed_id);
void _wasgo_CameraTexture_wrapper_set_which_feed(WasGoId wasgo_id, WasGoId p_which_feed);

    //constructor wrappers
    WasGoId _wasgo_CameraTexture_constructor();
            
}
#endif