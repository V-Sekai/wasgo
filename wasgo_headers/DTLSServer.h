/* THIS FILE IS GENERATED */
#ifndef DTLSSERVER_H
#define DTLSSERVER_H

#include "stdint.h"

#include "PacketPeerUDP.h"
#include "Error.h"
#include "Reference.h"
#include "X509Certificate.h"
#include "CryptoKey.h"
#include "PacketPeerDTLS.h"
class DTLSServer : public Reference{
public: DTLSServer();
Error setup(CryptoKey p_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [Object:null]);
PacketPeerDTLS take_connection(PacketPeerUDP p_udp_peer);
};
#endif