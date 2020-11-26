/* THIS FILE IS GENERATED */
#ifndef MAINLOOP_H
#define MAINLOOP_H

#include <stdint.h>

#include "PoolStringArray.h"
#include "String.h"
#include "InputEvent.h"
#include "Variant.h"
#include "Object.h"
class MainLoop : public Object{
public: MainLoop();
void  _drop_files(PoolStringArray files, int from_screen);
void  _finalize();
void  _finalize();
void  _global_menu_action(Variant id, Variant meta);
bool  _idle(float delta);
void  _initialize();
void  _initialize();
void  _input_event(InputEvent event);
void  _input_text(String text);
bool  _iteration(float delta);
void  finish();
void  finish();
bool  idle(float delta);
void  init();
void  init();
void  input_event(InputEvent event);
void  input_text(String text);
bool  iteration(float delta);
};
#endif