/* THIS FILE IS GENERATED */
#ifndef BAKEDLIGHTMAP_H
#define BAKEDLIGHTMAP_H

#include "wasgo\wasgoid.h"

#include "Vector3.h"
class Node;
#include "VisualInstance.h"
#include "BakedLightmapData.h"
#include "Ustring.h"
class BakedLightmap : public VisualInstance{
public:
enum BakeError{
BAKE_ERROR_OK,
BAKE_ERROR_NO_SAVE_PATH,
BAKE_ERROR_NO_MESHES,
BAKE_ERROR_CANT_CREATE_IMAGE,
BAKE_ERROR_USER_ABORTED
};
enum BakeMode{
BAKE_MODE_CONE_TRACE,
BAKE_MODE_RAY_TRACE
};
enum BakeQuality{
BAKE_QUALITY_LOW,
BAKE_QUALITY_MEDIUM,
BAKE_QUALITY_HIGH
};
BakedLightmap::BakeError bake(Node p_from_node = Node(), bool p_create_visual_debug = (bool) false);
void debug_bake();
float get_bake_cell_size();
float get_bake_default_texels_per_unit();
BakedLightmap::BakeMode get_bake_mode();
BakedLightmap::BakeQuality get_bake_quality();
float get_capture_cell_size();
float get_energy();
Vector3 get_extents();
String get_image_path();
BakedLightmapData get_light_data();
float get_propagation();
bool is_hdr();
void set_bake_cell_size(float p_bake_cell_size);
void set_bake_default_texels_per_unit(float p_texels);
void set_bake_mode(BakedLightmap::BakeMode p_bake_mode);
void set_bake_quality(BakedLightmap::BakeQuality p_bake_quality);
void set_capture_cell_size(float p_capture_cell_size);
void set_energy(float p_energy);
void set_extents(Vector3 p_extents);
void set_hdr(bool p_hdr);
void set_image_path(String p_image_path);
void set_light_data(BakedLightmapData p_data);
void set_propagation(float p_propagation);

protected:
public:
explicit BakedLightmap(WasGoID p_wasgo_id);
explicit BakedLightmap(VisualInstance other);
BakedLightmap();
BakedLightmap new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_BakedLightmap_wrapper_bake(WasGoID wasgo_id, WasGoID p_from_node, bool p_create_visual_debug);
void _wasgo_BakedLightmap_wrapper_debug_bake(WasGoID wasgo_id);
float _wasgo_BakedLightmap_wrapper_get_bake_cell_size(WasGoID wasgo_id);
float _wasgo_BakedLightmap_wrapper_get_bake_default_texels_per_unit(WasGoID wasgo_id);
WasGoID _wasgo_BakedLightmap_wrapper_get_bake_mode(WasGoID wasgo_id);
WasGoID _wasgo_BakedLightmap_wrapper_get_bake_quality(WasGoID wasgo_id);
float _wasgo_BakedLightmap_wrapper_get_capture_cell_size(WasGoID wasgo_id);
float _wasgo_BakedLightmap_wrapper_get_energy(WasGoID wasgo_id);
void _wasgo_BakedLightmap_wrapper_get_extents(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_BakedLightmap_wrapper_get_image_path(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_BakedLightmap_wrapper_get_light_data(WasGoID wasgo_id);
float _wasgo_BakedLightmap_wrapper_get_propagation(WasGoID wasgo_id);
int _wasgo_BakedLightmap_wrapper_is_hdr(WasGoID wasgo_id);
void _wasgo_BakedLightmap_wrapper_set_bake_cell_size(WasGoID wasgo_id, float p_bake_cell_size);
void _wasgo_BakedLightmap_wrapper_set_bake_default_texels_per_unit(WasGoID wasgo_id, float p_texels);
void _wasgo_BakedLightmap_wrapper_set_bake_mode(WasGoID wasgo_id, WasGoID p_bake_mode);
void _wasgo_BakedLightmap_wrapper_set_bake_quality(WasGoID wasgo_id, WasGoID p_bake_quality);
void _wasgo_BakedLightmap_wrapper_set_capture_cell_size(WasGoID wasgo_id, float p_capture_cell_size);
void _wasgo_BakedLightmap_wrapper_set_energy(WasGoID wasgo_id, float p_energy);
void _wasgo_BakedLightmap_wrapper_set_extents(WasGoID wasgo_id, const uint8_t * p_extents, int p_extents_wasgo_buffer_size);
void _wasgo_BakedLightmap_wrapper_set_hdr(WasGoID wasgo_id, bool p_hdr);
void _wasgo_BakedLightmap_wrapper_set_image_path(WasGoID wasgo_id, const uint8_t * p_image_path, int p_image_path_wasgo_buffer_size);
void _wasgo_BakedLightmap_wrapper_set_light_data(WasGoID wasgo_id, WasGoID p_data);
void _wasgo_BakedLightmap_wrapper_set_propagation(WasGoID wasgo_id, float p_propagation);

    //constructor wrappers
    WasGoID _wasgo_BakedLightmap_constructor();
            
}
#endif