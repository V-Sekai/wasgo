/* THIS FILE IS GENERATED */
#ifndef PACKETPEERDTLS_H
#define PACKETPEERDTLS_H

#include "stdint.h"

#include "Error.h"
#include "Variant.h"
#include "PacketPeer.h"
#include "PacketPeerUDP.h"
#include "X509Certificate.h"
class PacketPeerDTLS : public PacketPeer{
public: PacketPeerDTLS();
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
};
#endif