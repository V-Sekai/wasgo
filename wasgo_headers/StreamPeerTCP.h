/* THIS FILE IS GENERATED */
#ifndef STREAMPEERTCP_H
#define STREAMPEERTCP_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "StreamPeer.h"
#include "Error.h"
class StreamPeerTCP : public StreamPeer{
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

StreamPeerTCP(WasGoId p_wasgo_id);
~StreamPeerTCP();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_StreamPeerTCP_wrapper_connect_to_host(WasGoId wasgo_id, WasGo::WasGoId p_host, int p_port);
void _wasgo_StreamPeerTCP_wrapper_disconnect_from_host(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StreamPeerTCP_wrapper_get_connected_host(WasGoId wasgo_id);
int _wasgo_StreamPeerTCP_wrapper_get_connected_port(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StreamPeerTCP_wrapper_get_status(WasGoId wasgo_id);
int _wasgo_StreamPeerTCP_wrapper_is_connected_to_host(WasGoId wasgo_id);
void _wasgo_StreamPeerTCP_wrapper_set_no_delay(WasGoId wasgo_id, bool p_enabled);
}
#endif