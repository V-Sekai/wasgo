/* THIS FILE IS GENERATED */
#ifndef MAINLOOP_H
#define MAINLOOP_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "Object.h"
#include "InputEvent.h"
class MainLoop : public Object{
public:
void finish();
bool idle(float p_delta);
void init();
void input_event(InputEvent p_event);
void input_text(String p_text);
bool iteration(float p_delta);

protected:
public:
explicit MainLoop(WasGoID p_wasgo_id);
explicit MainLoop(Object other);
MainLoop new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MainLoop_wrapper_finish(WasGoID wasgo_id);
int _wasgo_MainLoop_wrapper_idle(WasGoID wasgo_id, float p_delta);
void _wasgo_MainLoop_wrapper_init(WasGoID wasgo_id);
void _wasgo_MainLoop_wrapper_input_event(WasGoID wasgo_id, WasGoID p_event);
void _wasgo_MainLoop_wrapper_input_text(WasGoID wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
int _wasgo_MainLoop_wrapper_iteration(WasGoID wasgo_id, float p_delta);

    //constructor wrappers
    WasGoID _wasgo_MainLoop_constructor();
            
}
#endif