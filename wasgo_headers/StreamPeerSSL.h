/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Erro.h"
#include "X509Certificate.h"
#include "CryptoKey.h"
#include "StreamPeer.h"
class StreamPeerSSL : public StreamPeer{
public: StreamPeerSSL();
enum Status{
STATUS_DISCONNECTED: 0,
STATUS_HANDSHAKING: 1,
STATUS_CONNECTED: 2,
STATUS_ERROR: 3,
};
enum.Error  accept_stream(StreamPeer stream, CryptoKey private_key, X509Certificate certificate, X509Certificate chain = [object:null]);
enum.Error  connect_to_stream(StreamPeer stream, bool validate_certs = false, String for_hostname = "", X509Certificate valid_certificate = [object:null]);
void  disconnect_from_stream();
void  disconnect_from_stream();
enum.StreamPeerSSL::Status  get_status();
enum.StreamPeerSSL::Status  get_status();
bool  is_blocking_handshake_enabled();
bool  is_blocking_handshake_enabled();
void  poll();
void  poll();
void  set_blocking_handshake_enabled(bool enabled);
};