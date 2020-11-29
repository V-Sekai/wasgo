/* THIS FILE IS GENERATED */
#ifndef CONFIRMATIONDIALOG_H
#define CONFIRMATIONDIALOG_H

#include "stdint.h"

#include "AcceptDialog.h"
#include "Button.h"
class ConfirmationDialog : public AcceptDialog{
public: ConfirmationDialog();
Button get_cancel();
};
#endif