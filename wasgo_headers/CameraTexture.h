/* THIS FILE IS GENERATED */
#ifndef CAMERATEXTURE_H
#define CAMERATEXTURE_H

#include "wasgo\wasgoid.h"

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
explicit CameraTexture(WasGoID p_wasgo_id);
explicit CameraTexture(Texture other);
CameraTexture();
CameraTexture new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_CameraTexture_wrapper_get_camera_active(WasGoID wasgo_id);
int _wasgo_CameraTexture_wrapper_get_camera_feed_id(WasGoID wasgo_id);
WasGoID _wasgo_CameraTexture_wrapper_get_which_feed(WasGoID wasgo_id);
void _wasgo_CameraTexture_wrapper_set_camera_active(WasGoID wasgo_id, bool p_active);
void _wasgo_CameraTexture_wrapper_set_camera_feed_id(WasGoID wasgo_id, int p_feed_id);
void _wasgo_CameraTexture_wrapper_set_which_feed(WasGoID wasgo_id, WasGoID p_which_feed);

    //constructor wrappers
    WasGoID _wasgo_CameraTexture_constructor();
            
}
#endif