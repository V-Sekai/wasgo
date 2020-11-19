/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Resource.h"
#include "Object.h"
#include "Erro.h"
#include "PoolStringArray.h"
class _ResourceSaver : public Object{
public: _ResourceSaver();
enum SaverFlags{
FLAG_RELATIVE_PATHS: 1,
FLAG_BUNDLE_RESOURCES: 2,
FLAG_CHANGE_PATH: 4,
FLAG_OMIT_EDITOR_PROPERTIES: 8,
FLAG_SAVE_BIG_ENDIAN: 16,
FLAG_COMPRESS: 32,
};
PoolStringArray  get_recognized_extensions(Resource type);
enum.Error  save(String path, Resource resource, int flags = 0);
};