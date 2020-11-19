/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Vector3.h"
#include "VisualInstance.h"
#include "BakedLightmapData.h"
#include "Node.h"
class BakedLightmap : public VisualInstance{
public: BakedLightmap();
enum BakeQuality{
BAKE_QUALITY_LOW: 0,
BAKE_QUALITY_MEDIUM: 1,
};
enum BakeError{
BAKE_ERROR_OK: 0,
BAKE_ERROR_NO_SAVE_PATH: 1,
BAKE_ERROR_NO_MESHES: 2,
BAKE_ERROR_CANT_CREATE_IMAGE: 3,
};
enum BakeMode{
BAKE_MODE_CONE_TRACE: 0,
};
enum.BakedLightmap::BakeError  bake(Node from_node = null, bool create_visual_debug = false);
void  debug_bake();
void  debug_bake();
float  get_bake_cell_size();
float  get_bake_cell_size();
float  get_bake_default_texels_per_unit();
float  get_bake_default_texels_per_unit();
enum.BakedLightmap::BakeMode  get_bake_mode();
enum.BakedLightmap::BakeMode  get_bake_mode();
enum.BakedLightmap::BakeQuality  get_bake_quality();
enum.BakedLightmap::BakeQuality  get_bake_quality();
float  get_capture_cell_size();
float  get_capture_cell_size();
float  get_energy();
float  get_energy();
Vector3  get_extents();
Vector3  get_extents();
String  get_image_path();
String  get_image_path();
BakedLightmapData  get_light_data();
BakedLightmapData  get_light_data();
float  get_propagation();
float  get_propagation();
bool  is_hdr();
bool  is_hdr();
void  set_bake_cell_size(float bake_cell_size);
void  set_bake_default_texels_per_unit(float texels);
void  set_bake_mode(int bake_mode);
void  set_bake_quality(int bake_quality);
void  set_capture_cell_size(float capture_cell_size);
void  set_energy(float energy);
void  set_extents(Vector3 extents);
void  set_hdr(bool hdr);
void  set_image_path(String image_path);
void  set_light_data(BakedLightmapData data);
void  set_propagation(float propagation);
};