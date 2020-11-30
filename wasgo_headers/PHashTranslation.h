/* THIS FILE IS GENERATED */
#ifndef PHASHTRANSLATION_H
#define PHASHTRANSLATION_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Translation.h"
class PHashTranslation : public Translation{
void generate(Translation p_from);

PHashTranslation(WasGoId p_wasgo_id);
~PHashTranslation();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PHashTranslation_wrapper_generate(WasGoId wasgo_id, WasGo::WasGoId p_from);
}
#endif