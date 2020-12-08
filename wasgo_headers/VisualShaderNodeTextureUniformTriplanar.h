/* THIS FILE IS GENERATED */
#ifndef VISUALSHADERNODETEXTUREUNIFORMTRIPLANAR_H
#define VISUALSHADERNODETEXTUREUNIFORMTRIPLANAR_H

#include "wasgo\wasgoid.h"

#include "VisualShaderNodeTextureUniform.h"
class VisualShaderNodeTextureUniformTriplanar : public VisualShaderNodeTextureUniform{
public:

protected:
public:
explicit VisualShaderNodeTextureUniformTriplanar(WasGoID p_wasgo_id);
explicit VisualShaderNodeTextureUniformTriplanar(VisualShaderNodeTextureUniform other);
VisualShaderNodeTextureUniformTriplanar();
VisualShaderNodeTextureUniformTriplanar new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_VisualShaderNodeTextureUniformTriplanar_constructor();
            
}
#endif