/* THIS FILE IS GENERATED */
#ifndef MAINLOOP_H
#define MAINLOOP_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "InputEvent.h"
#include "Object.h"
class MainLoop : public Object{
public:
void finish();
bool idle(float p_delta);
void init();
void input_event(InputEvent p_event);
void input_text(String p_text);
bool iteration(float p_delta);

protected:
MainLoop(WasGoId p_wasgo_id);
public:
MainLoop();
~MainLoop();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_MainLoop_wrapper_finish(WasGoId wasgo_id);
int _wasgo_MainLoop_wrapper_idle(WasGoId wasgo_id, float p_delta);
void _wasgo_MainLoop_wrapper_init(WasGoId wasgo_id);
void _wasgo_MainLoop_wrapper_input_event(WasGoId wasgo_id, WasGoId p_event);
void _wasgo_MainLoop_wrapper_input_text(WasGoId wasgo_id, const uint8_t * p_text, int p_text_wasgo_buffer_size);
int _wasgo_MainLoop_wrapper_iteration(WasGoId wasgo_id, float p_delta);

    //constructor and destructor wrappers
    WasGoId _wasgo_MainLoop_constructor();
    void _wasgo_MainLoop_destructor(WasGoId p_wasgo_id);
            
}
#endif