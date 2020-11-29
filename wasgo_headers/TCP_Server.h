/* THIS FILE IS GENERATED */
#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "StreamPeerTCP.h"
#include "Error.h"
class TCP_Server : public Reference{
public: TCP_Server();
bool is_connection_available();
bool is_listening();
Error listen(int p_port, String p_bind_address = (String) *);
void stop();
StreamPeerTCP take_connection();
};
#endif