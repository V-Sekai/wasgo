/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "BaseButton.h"
class LinkButton : public BaseButton{
public: LinkButton();
enum UnderlineMode{
UNDERLINE_MODE_ALWAYS: 0,
UNDERLINE_MODE_ON_HOVER: 1,
};
String  get_text();
String  get_text();
enum.LinkButton::UnderlineMode  get_underline_mode();
enum.LinkButton::UnderlineMode  get_underline_mode();
void  set_text(String text);
void  set_underline_mode(int underline_mode);
};