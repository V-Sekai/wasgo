/* THIS FILE IS GENERATED */
#ifndef PHASHTRANSLATION_H
#define PHASHTRANSLATION_H

#include "wasgo\wasgoid.h"

#include "Translation.h"
class PHashTranslation : public Translation{
public:
void generate(Translation p_from);

protected:
public:
explicit PHashTranslation(WasGoID p_wasgo_id);
explicit PHashTranslation(Translation other);
PHashTranslation();
PHashTranslation new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_PHashTranslation_wrapper_generate(WasGoID wasgo_id, WasGoID p_from);

    //constructor wrappers
    WasGoID _wasgo_PHashTranslation_constructor();
            
}
#endif