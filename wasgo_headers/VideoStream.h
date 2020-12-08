/* THIS FILE IS GENERATED */
#ifndef VIDEOSTREAM_H
#define VIDEOSTREAM_H

#include "wasgo\wasgoid.h"

#include "Resource.h"
class VideoStream : public Resource{
public:

protected:
public:
explicit VideoStream(WasGoID p_wasgo_id);
explicit VideoStream(Resource other);
VideoStream();
VideoStream new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VideoStream_constructor();
            
}
#endif