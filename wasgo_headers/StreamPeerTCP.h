/* THIS FILE IS GENERATED */
#ifndef STREAMPEERTCP_H
#define STREAMPEERTCP_H

#include "stdint.h"

#include "Variant.h"
#include "StreamPeer.h"
#include "Error.h"
class StreamPeerTCP : public StreamPeer{
public: StreamPeerTCP();
enum Status{
STATUS_NONE,
STATUS_CONNECTING,
STATUS_CONNECTED,
STATUS_ERROR
};
Error connect_to_host(String p_host, int p_port);
void disconnect_from_host();
String get_connected_host();
int get_connected_port();
StreamPeerTCP::Status get_status();
bool is_connected_to_host();
void set_no_delay(bool p_enabled);
};
#endif