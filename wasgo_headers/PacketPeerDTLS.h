/* THIS FILE IS GENERATED */
#ifndef PACKETPEERDTLS_H
#define PACKETPEERDTLS_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Error.h"
#include "PacketPeerUDP.h"
#include "X509Certificate.h"
#include "PacketPeer.h"
class PacketPeerDTLS : public PacketPeer{
enum Status{
STATUS_DISCONNECTED,
STATUS_HANDSHAKING,
STATUS_CONNECTED,
STATUS_ERROR,
STATUS_ERROR_HOSTNAME_MISMATCH
};
Error connect_to_peer(PacketPeerUDP p_packet_peer, bool p_validate_certs = (bool) True, String p_for_hostname = (String) , X509Certificate p_valid_certificate = (X509Certificate) [Object:null]);
void disconnect_from_peer();
PacketPeerDTLS::Status get_status();
void poll();

PacketPeerDTLS(WasGoId p_wasgo_id);
~PacketPeerDTLS();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_PacketPeerDTLS_wrapper_connect_to_peer(WasGoId wasgo_id, WasGo::WasGoId p_packet_peer, bool p_validate_certs, WasGo::WasGoId p_for_hostname, WasGo::WasGoId p_valid_certificate);
void _wasgo_PacketPeerDTLS_wrapper_disconnect_from_peer(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_PacketPeerDTLS_wrapper_get_status(WasGoId wasgo_id);
void _wasgo_PacketPeerDTLS_wrapper_poll(WasGoId wasgo_id);
}
#endif