/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Node.h"
#include "EditorFileSystemDirectory.h"
class EditorFileSystem : public Node{
public: EditorFileSystem();
String  get_file_type(String path);
EditorFileSystemDirectory  get_filesystem();
EditorFileSystemDirectory  get_filesystem();
EditorFileSystemDirectory  get_filesystem_path(String path);
float  get_scanning_progress();
float  get_scanning_progress();
bool  is_scanning();
bool  is_scanning();
void  scan();
void  scan();
void  scan_sources();
void  scan_sources();
void  update_file(String path);
void  update_script_classes();
void  update_script_classes();
};