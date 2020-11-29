/* THIS FILE IS GENERATED */
#ifndef PANORAMASKY_H
#define PANORAMASKY_H

#include "stdint.h"

#include "Texture.h"
#include "Sky.h"
class PanoramaSky : public Sky{
public: PanoramaSky();
Texture get_panorama();
void set_panorama(Texture p_texture);
};
#endif