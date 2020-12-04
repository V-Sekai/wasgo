/* THIS FILE IS GENERATED */
#ifndef SLIDER_H
#define SLIDER_H

#include "wasgo\wasgo.h"

#include "Range.h"
class Slider : public Range{
public:
int get_ticks();
bool get_ticks_on_borders();
bool is_editable();
bool is_scrollable();
void set_editable(bool p_editable);
void set_scrollable(bool p_scrollable);
void set_ticks(int p_count);
void set_ticks_on_borders(bool p_ticks_on_border);
};


//Wrapper Functions
extern "C"{
int _wasgo_Slider_wrapper_get_ticks(WasGoID wasgo_id);
int _wasgo_Slider_wrapper_get_ticks_on_borders(WasGoID wasgo_id);
int _wasgo_Slider_wrapper_is_editable(WasGoID wasgo_id);
int _wasgo_Slider_wrapper_is_scrollable(WasGoID wasgo_id);
void _wasgo_Slider_wrapper_set_editable(WasGoID wasgo_id, bool p_editable);
void _wasgo_Slider_wrapper_set_scrollable(WasGoID wasgo_id, bool p_scrollable);
void _wasgo_Slider_wrapper_set_ticks(WasGoID wasgo_id, int p_count);
void _wasgo_Slider_wrapper_set_ticks_on_borders(WasGoID wasgo_id, bool p_ticks_on_border);

    //constructor wrappers
    WasGoID _wasgo_Slider_constructor();
            
}
#endif