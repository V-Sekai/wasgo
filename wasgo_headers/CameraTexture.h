/* THIS FILE IS GENERATED */
#ifndef CAMERATEXTURE_H
#define CAMERATEXTURE_H

#include "wasgo\wasgo.h"

#include "Texture.h"
#include "CameraServer.h"
class CameraTexture : public Texture{
public:
bool get_camera_active();
int get_camera_feed_id();
CameraServer::FeedImage get_which_feed();
void set_camera_active(bool p_active);
void set_camera_feed_id(int p_feed_id);
void set_which_feed(CameraServer::FeedImage p_which_feed);

protected:
CameraTexture(WasGoId p_wasgo_id);
public:
CameraTexture();
~CameraTexture();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CameraTexture_wrapper_get_camera_active(WasGoId wasgo_id);
int _wasgo_CameraTexture_wrapper_get_camera_feed_id(WasGoId wasgo_id);
WasGoId _wasgo_CameraTexture_wrapper_get_which_feed(WasGoId wasgo_id);
void _wasgo_CameraTexture_wrapper_set_camera_active(WasGoId wasgo_id, bool p_active);
void _wasgo_CameraTexture_wrapper_set_camera_feed_id(WasGoId wasgo_id, int p_feed_id);
void _wasgo_CameraTexture_wrapper_set_which_feed(WasGoId wasgo_id, WasGoId p_which_feed);

    //constructor and destructor wrappers
    WasGoId _wasgo_CameraTexture_constructor();
    void _wasgo_CameraTexture_destructor(WasGoId p_wasgo_id);
            
}
#endif