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
ProgressBar(WasGoId p_wasgo_id);
public:
ProgressBar();
~ProgressBar();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ProgressBar_wrapper_is_percent_visible(WasGoId wasgo_id);
void _wasgo_ProgressBar_wrapper_set_percent_visible(WasGoId wasgo_id, bool p_visible);

    //constructor and destructor wrappers
    WasGoId _wasgo_ProgressBar_constructor();
    void _wasgo_ProgressBar_destructor(WasGoId p_wasgo_id);
            
}
#endif