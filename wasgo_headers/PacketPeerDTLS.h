/* THIS FILE IS GENERATED */
#ifndef PACKETPEERDTLS_H
#define PACKETPEERDTLS_H

#include "wasgo\wasgoid.h"

#include "PacketPeerUDP.h"
#include "error_list.h"
#include "X509Certificate.h"
#include "Ustring.h"
#include "PacketPeer.h"
class PacketPeerDTLS : public PacketPeer{
public:
enum Status{
STATUS_DISCONNECTED,
STATUS_HANDSHAKING,
STATUS_CONNECTED,
STATUS_ERROR,
STATUS_ERROR_HOSTNAME_MISMATCH
};
Error connect_to_peer(PacketPeerUDP p_packet_peer, bool p_validate_certs = (bool) true, String p_for_hostname = String(), X509Certificate p_valid_certificate = X509Certificate());
void disconnect_from_peer();
PacketPeerDTLS::Status get_status();
void poll();

protected:
public:
explicit PacketPeerDTLS(WasGoID p_wasgo_id);
explicit PacketPeerDTLS(PacketPeer other);
PacketPeerDTLS();
PacketPeerDTLS new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_PacketPeerDTLS_wrapper_connect_to_peer(WasGoID wasgo_id, WasGoID p_packet_peer, bool p_validate_certs, int wasgo_throwaway, const uint8_t * p_for_hostname, int p_for_hostname_wasgo_buffer_size, WasGoID p_valid_certificate);
void _wasgo_PacketPeerDTLS_wrapper_disconnect_from_peer(WasGoID wasgo_id);
WasGoID _wasgo_PacketPeerDTLS_wrapper_get_status(WasGoID wasgo_id);
void _wasgo_PacketPeerDTLS_wrapper_poll(WasGoID wasgo_id);

    //constructor wrappers
    WasGoID _wasgo_PacketPeerDTLS_constructor();
            
}
#endif