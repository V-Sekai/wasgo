/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "VisualScriptNode.h"
class VisualScriptYield : public VisualScriptNode{
public: VisualScriptYield();
enum YieldMode{
YIELD_FRAME: 1,
YIELD_PHYSICS_FRAME: 2,
};
float  get_wait_time();
float  get_wait_time();
enum.VisualScriptYield::YieldMode  get_yield_mode();
enum.VisualScriptYield::YieldMode  get_yield_mode();
void  set_wait_time(float sec);
void  set_yield_mode(int mode);
};