/* THIS FILE IS GENERATED */
#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Range.h"
class ProgressBar : public Range{
bool is_percent_visible();
void set_percent_visible(bool p_visible);

ProgressBar(WasGoId p_wasgo_id);
~ProgressBar();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_ProgressBar_wrapper_is_percent_visible(WasGoId wasgo_id);
void _wasgo_ProgressBar_wrapper_set_percent_visible(WasGoId wasgo_id, bool p_visible);
}
#endif