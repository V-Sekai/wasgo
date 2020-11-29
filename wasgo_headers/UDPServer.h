/* THIS FILE IS GENERATED */
#ifndef UDPSERVER_H
#define UDPSERVER_H

#include "stdint.h"

#include "Reference.h"
#include "Variant.h"
#include "PacketPeerUDP.h"
#include "Error.h"
class UDPServer : public Reference{
public: UDPServer();
int get_max_pending_connections();
bool is_connection_available();
bool is_listening();
Error listen(int p_port, String p_bind_address = (String) *);
Error poll();
void set_max_pending_connections(int p_max_pending_connections);
void stop();
PacketPeerUDP take_connection();
};
#endif