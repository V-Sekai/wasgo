/* THIS FILE IS GENERATED */
#ifndef STREAMPEERSSL_H
#define STREAMPEERSSL_H

#include "stdint.h"

#include "Error.h"
#include "Variant.h"
#include "CryptoKey.h"
#include "StreamPeer.h"
#include "X509Certificate.h"
class StreamPeerSSL : public StreamPeer{
public: StreamPeerSSL();
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
};
#endif