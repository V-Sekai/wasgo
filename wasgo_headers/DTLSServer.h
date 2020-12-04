/* THIS FILE IS GENERATED */
#ifndef DTLSSERVER_H
#define DTLSSERVER_H

#include "wasgo\wasgo.h"

#include "PacketPeerDTLS.h"
#include "error_list.h"
#include "CryptoKey.h"
#include "X509Certificate.h"
#include "PacketPeerUDP.h"
#include "Reference.h"
class DTLSServer : public Reference{
public:
Error setup(CryptoKey p_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [object:null]);
PacketPeerDTLS take_connection(PacketPeerUDP p_udp_peer);

protected:
DTLSServer(WasGoId p_wasgo_id);
public:
DTLSServer();
~DTLSServer();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_DTLSServer_wrapper_setup(WasGoId wasgo_id, WasGoId p_key, WasGoId p_certificate, WasGoId p_chain);
WasGoId _wasgo_DTLSServer_wrapper_take_connection(WasGoId wasgo_id, WasGoId p_udp_peer);

    //constructor and destructor wrappers
    WasGoId _wasgo_DTLSServer_constructor();
    void _wasgo_DTLSServer_destructor(WasGoId p_wasgo_id);
            
}
#endif