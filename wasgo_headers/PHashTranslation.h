/* THIS FILE IS GENERATED */
#ifndef PHASHTRANSLATION_H
#define PHASHTRANSLATION_H

#include "wasgo\wasgo.h"

#include "Translation.h"
class PHashTranslation : public Translation{
public:
void generate(Translation p_from);

protected:
public:
explicit PHashTranslation(WasGoId p_wasgo_id);
explicit PHashTranslation(Translation other);
PHashTranslation new_instance();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PHashTranslation_wrapper_generate(WasGoId wasgo_id, WasGoId p_from);

    //constructor wrappers
    WasGoId _wasgo_PHashTranslation_constructor();
            
}
#endif