/* THIS FILE IS GENERATED */
#ifndef PACKETPEERDTLS_H
#define PACKETPEERDTLS_H

#include "wasgo\wasgo.h"

#include "ustring.h"
#include "PacketPeerUDP.h"
#include "X509Certificate.h"
#include "error_list.h"
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
Error connect_to_peer(PacketPeerUDP p_packet_peer, bool p_validate_certs = (bool) true, String p_for_hostname = (String) , X509Certificate p_valid_certificate = (X509Certificate) [object:null]);
void disconnect_from_peer();
PacketPeerDTLS::Status get_status();
void poll();

protected:
PacketPeerDTLS(WasGoId p_wasgo_id);
public:
PacketPeerDTLS();
~PacketPeerDTLS();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_PacketPeerDTLS_wrapper_connect_to_peer(WasGoId wasgo_id, WasGoId p_packet_peer, bool p_validate_certs, const uint8_t * p_for_hostname, int p_for_hostname_wasgo_buffer_size, WasGoId p_valid_certificate);
void _wasgo_PacketPeerDTLS_wrapper_disconnect_from_peer(WasGoId wasgo_id);
WasGoId _wasgo_PacketPeerDTLS_wrapper_get_status(WasGoId wasgo_id);
void _wasgo_PacketPeerDTLS_wrapper_poll(WasGoId wasgo_id);

    //constructor and destructor wrappers
    WasGoId _wasgo_PacketPeerDTLS_constructor();
    void _wasgo_PacketPeerDTLS_destructor(WasGoId p_wasgo_id);
            
}
#endif