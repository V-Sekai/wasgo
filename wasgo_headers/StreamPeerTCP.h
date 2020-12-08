/* THIS FILE IS GENERATED */
#ifndef STREAMPEERTCP_H
#define STREAMPEERTCP_H

#include "wasgo\wasgoid.h"

#include "StreamPeer.h"
#include "Ustring.h"
#include "error_list.h"
class StreamPeerTCP : public StreamPeer{
public:
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

protected:
public:
explicit StreamPeerTCP(WasGoID p_wasgo_id);
explicit StreamPeerTCP(StreamPeer other);
StreamPeerTCP();
StreamPeerTCP new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_StreamPeerTCP_wrapper_connect_to_host(WasGoID wasgo_id, const uint8_t * p_host, int p_host_wasgo_buffer_size, int p_port);
void _wasgo_StreamPeerTCP_wrapper_disconnect_from_host(WasGoID wasgo_id);
void _wasgo_StreamPeerTCP_wrapper_get_connected_host(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_StreamPeerTCP_wrapper_get_connected_port(WasGoID wasgo_id);
WasGoID _wasgo_StreamPeerTCP_wrapper_get_status(WasGoID wasgo_id);
int _wasgo_StreamPeerTCP_wrapper_is_connected_to_host(WasGoID wasgo_id);
void _wasgo_StreamPeerTCP_wrapper_set_no_delay(WasGoID wasgo_id, bool p_enabled);

    //constructor wrappers
    WasGoID _wasgo_StreamPeerTCP_constructor();
            
}
#endif