/* THIS FILE IS GENERATED */
#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include "wasgo\wasgo.h"

#include "Range.h"
class ProgressBar : public Range{
public:
bool is_percent_visible();
void set_percent_visible(bool p_visible);

protected:
public:
explicit ProgressBar(WasGoId p_wasgo_id);
explicit ProgressBar(Range other);
ProgressBar new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ProgressBar_wrapper_is_percent_visible(WasGoId wasgo_id);
void _wasgo_ProgressBar_wrapper_set_percent_visible(WasGoId wasgo_id, bool p_visible);

    //constructor wrappers
    WasGoId _wasgo_ProgressBar_constructor();
            
}
#endif