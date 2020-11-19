/* THIS FILE IS GENERATED */
#ifndef STREAMPEERTCP_H
#define STREAMPEERTCP_H

#include <stdint.h>

#include "StreamPeer.h"
#include "String.h"
#include "Erro.h"
class StreamPeerTCP : public StreamPeer{
public: StreamPeerTCP();
enum Status{
STATUS_NONE: 0,
STATUS_CONNECTING: 1,
STATUS_CONNECTED: 2,
};
enum.Error  connect_to_host(String host, int port);
void  disconnect_from_host();
void  disconnect_from_host();
String  get_connected_host();
String  get_connected_host();
int  get_connected_port();
int  get_connected_port();
enum.StreamPeerTCP::Status  get_status();
enum.StreamPeerTCP::Status  get_status();
bool  is_connected_to_host();
bool  is_connected_to_host();
void  set_no_delay(bool enabled);
};
#endif