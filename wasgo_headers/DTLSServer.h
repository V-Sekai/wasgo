/* THIS FILE IS GENERATED */
#ifndef DTLSSERVER_H
#define DTLSSERVER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "X509Certificate.h"
#include "Reference.h"
#include "CryptoKey.h"
#include "PacketPeerUDP.h"
#include "PacketPeerDTLS.h"
#include "error_list.h"
class DTLSServer : public Reference{
public:
Error setup(CryptoKey p_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [object:null]);
PacketPeerDTLS take_connection(PacketPeerUDP p_udp_peer);

DTLSServer(WasGoId p_wasgo_id);
~DTLSServer();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_DTLSServer_wrapper_setup(WasGoId wasgo_id, WasGoId p_key, WasGoId p_certificate, WasGoId p_chain);
WasGoId _wasgo_DTLSServer_wrapper_take_connection(WasGoId wasgo_id, WasGoId p_udp_peer);
}
#endif