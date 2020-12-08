/* THIS FILE IS GENERATED */
#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include "wasgo\wasgoid.h"

#include "Range.h"
class ProgressBar : public Range{
public:
bool is_percent_visible();
void set_percent_visible(bool p_visible);

protected:
public:
explicit ProgressBar(WasGoID p_wasgo_id);
explicit ProgressBar(Range other);
ProgressBar();
ProgressBar new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ProgressBar_wrapper_is_percent_visible(WasGoID wasgo_id);
void _wasgo_ProgressBar_wrapper_set_percent_visible(WasGoID wasgo_id, bool p_visible);

    //constructor wrappers
    WasGoID _wasgo_ProgressBar_constructor();
            
}
#endif