/* THIS FILE IS GENERATED */
#ifndef STREAMPEERSSL_H
#define STREAMPEERSSL_H

#include "wasgo\wasgo.h"

#include "X509Certificate.h"
#include "StreamPeer.h"
#include "error_list.h"
#include "CryptoKey.h"
#include "ustring.h"
class StreamPeerSSL : public StreamPeer{
public:
enum Status{
STATUS_DISCONNECTED,
STATUS_HANDSHAKING,
STATUS_CONNECTED,
STATUS_ERROR,
STATUS_ERROR_HOSTNAME_MISMATCH
};
Error accept_stream(StreamPeer p_stream, CryptoKey p_private_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [object:null]);
Error connect_to_stream(StreamPeer p_stream, bool p_validate_certs = (bool) false, String p_for_hostname = (String) , X509Certificate p_valid_certificate = (X509Certificate) [object:null]);
void disconnect_from_stream();
StreamPeerSSL::Status get_status();
bool is_blocking_handshake_enabled();
void poll();
void set_blocking_handshake_enabled(bool p_enabled);

protected:
public:
explicit StreamPeerSSL(WasGoID p_wasgo_id);
explicit StreamPeerSSL(StreamPeer other);
StreamPeerSSL new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_StreamPeerSSL_wrapper_accept_stream(WasGoID wasgo_id, WasGoID p_stream, WasGoID p_private_key, WasGoID p_certificate, WasGoID p_chain);
WasGoID _wasgo_StreamPeerSSL_wrapper_connect_to_stream(WasGoID wasgo_id, WasGoID p_stream, bool p_validate_certs, const uint8_t * p_for_hostname, int p_for_hostname_wasgo_buffer_size, WasGoID p_valid_certificate);
void _wasgo_StreamPeerSSL_wrapper_disconnect_from_stream(WasGoID wasgo_id);
WasGoID _wasgo_StreamPeerSSL_wrapper_get_status(WasGoID wasgo_id);
int _wasgo_StreamPeerSSL_wrapper_is_blocking_handshake_enabled(WasGoID wasgo_id);
void _wasgo_StreamPeerSSL_wrapper_poll(WasGoID wasgo_id);
void _wasgo_StreamPeerSSL_wrapper_set_blocking_handshake_enabled(WasGoID wasgo_id, bool p_enabled);

    //constructor wrappers
    WasGoID _wasgo_StreamPeerSSL_constructor();
            
}
#endif