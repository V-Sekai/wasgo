/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "ResourceInteractiveLoader.h"
#include "Resource.h"
#include "Object.h"
#include "PoolStringArray.h"
class _ResourceLoader : public Object{
public: _ResourceLoader();
bool  exists(String path, String type_hint = "");
PoolStringArray  get_dependencies(String path);
PoolStringArray  get_recognized_extensions_for_type(String type);
bool  has(String path);
bool  has_cached(String path);
Resource  load(String path, String type_hint = "", bool no_cache = false);
ResourceInteractiveLoader  load_interactive(String path, String type_hint = "");
void  set_abort_on_missing_resources(bool abort);
};