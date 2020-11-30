/* THIS FILE IS GENERATED */
#ifndef TREE_H
#define TREE_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Control.h"
class Tree : public Control{
enum DropModeFlags{
DROP_MODE_DISABLED,
DROP_MODE_ON_ITEM,
DROP_MODE_INBETWEEN
};
enum SelectMode{
SELECT_SINGLE,
SELECT_ROW,
SELECT_MULTI
};

Tree(WasGoId p_wasgo_id);
~Tree();
            
};


//Wrapper Functions
extern "C"{
}
#endif