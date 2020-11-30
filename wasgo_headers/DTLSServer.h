/* THIS FILE IS GENERATED */
#ifndef DTLSSERVER_H
#define DTLSSERVER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "PacketPeerDTLS.h"
#include "Error.h"
#include "PacketPeerUDP.h"
#include "X509Certificate.h"
#include "Reference.h"
#include "CryptoKey.h"
class DTLSServer : public Reference{
Error setup(CryptoKey p_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [Object:null]);
PacketPeerDTLS take_connection(PacketPeerUDP p_udp_peer);

DTLSServer(WasGoId p_wasgo_id);
~DTLSServer();
            
};


//Wrapper Functions
extern "C"{
WasGo::WasGoId _wasgo_DTLSServer_wrapper_setup(WasGoId wasgo_id, WasGo::WasGoId p_key, WasGo::WasGoId p_certificate, WasGo::WasGoId p_chain);
WasGo::WasGoId _wasgo_DTLSServer_wrapper_take_connection(WasGoId wasgo_id, WasGo::WasGoId p_udp_peer);
}
#endif