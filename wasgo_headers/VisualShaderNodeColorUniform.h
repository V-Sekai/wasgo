/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODECOLORUNIFORM_H
#define VISUALSHADERNODECOLORUNIFORM_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNodeUniform.h"
class VisualShaderNodeColorUniform : public VisualShaderNodeUniform{
public:

protected:
public:
explicit VisualShaderNodeColorUniform(WasGoID p_wasgo_id);
explicit VisualShaderNodeColorUniform(VisualShaderNodeUniform other);
VisualShaderNodeColorUniform();
VisualShaderNodeColorUniform new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeColorUniform_constructor();
            
}
#endif