/* THIS FILE IS GENERATED */
#ifndef PHASHTRANSLATION_H
#define PHASHTRANSLATION_H

#include "wasgo\wasgo.h"

#include "Translation.h"
class PHashTranslation : public Translation{
public:
void generate(Translation p_from);

protected:
PHashTranslation(WasGoId p_wasgo_id);
public:
PHashTranslation();
~PHashTranslation();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PHashTranslation_wrapper_generate(WasGoId wasgo_id, WasGoId p_from);

    //constructor and destructor wrappers
    WasGoId _wasgo_PHashTranslation_constructor();
    void _wasgo_PHashTranslation_destructor(WasGoId p_wasgo_id);
            
}
#endif