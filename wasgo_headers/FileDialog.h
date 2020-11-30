/* THIS FILE IS GENERATED */
#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "ConfirmationDialog.h"
class FileDialog : public ConfirmationDialog{
enum Access{
ACCESS_RESOURCES,
ACCESS_USERDATA,
ACCESS_FILESYSTEM
};
enum Mode{
MODE_OPEN_FILE,
MODE_OPEN_FILES,
MODE_OPEN_DIR,
MODE_OPEN_ANY,
MODE_SAVE_FILE
};

FileDialog(WasGoId p_wasgo_id);
~FileDialog();
            
};


//Wrapper Functions
extern "C"{
}
#endif