/* THIS FILE IS GENERATED */
#ifndef STREAMPEERSSL_H
#define STREAMPEERSSL_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Error.h"
#include "CryptoKey.h"
#include "StreamPeer.h"
#include "X509Certificate.h"
#include "Variant.h"
class StreamPeerSSL : public StreamPeer{
enum Status{
STATUS_DISCONNECTED,
STATUS_HANDSHAKING,
STATUS_CONNECTED,
STATUS_ERROR,
STATUS_ERROR_HOSTNAME_MISMATCH
};
Error accept_stream(StreamPeer p_stream, CryptoKey p_private_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [Object:null]);
Error connect_to_stream(StreamPeer p_stream, bool p_validate_certs = (bool) False, String p_for_hostname = (String) , X509Certificate p_valid_certificate = (X509Certificate) [Object:null]);
void disconnect_from_stream();
StreamPeerSSL::Status get_status();
bool is_blocking_handshake_enabled();
void poll();
void set_blocking_handshake_enabled(bool p_enabled);

StreamPeerSSL(WasGoId p_wasgo_id);
~StreamPeerSSL();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_StreamPeerSSL_wrapper_accept_stream(WasGoId wasgo_id, WasGo::WasGoId p_stream, WasGo::WasGoId p_private_key, WasGo::WasGoId p_certificate, WasGo::WasGoId p_chain);
WasGo::WasGoId _wasgo_StreamPeerSSL_wrapper_connect_to_stream(WasGoId wasgo_id, WasGo::WasGoId p_stream, bool p_validate_certs, WasGo::WasGoId p_for_hostname, WasGo::WasGoId p_valid_certificate);
void _wasgo_StreamPeerSSL_wrapper_disconnect_from_stream(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_StreamPeerSSL_wrapper_get_status(WasGoId wasgo_id);
int _wasgo_StreamPeerSSL_wrapper_is_blocking_handshake_enabled(WasGoId wasgo_id);
void _wasgo_StreamPeerSSL_wrapper_poll(WasGoId wasgo_id);
void _wasgo_StreamPeerSSL_wrapper_set_blocking_handshake_enabled(WasGoId wasgo_id, bool p_enabled);
}
#endif