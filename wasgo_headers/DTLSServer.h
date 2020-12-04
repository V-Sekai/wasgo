/* THIS FILE IS GENERATED */
#ifndef DTLSSERVER_H
#define DTLSSERVER_H

#include "wasgo\wasgo.h"

#include "Reference.h"
#include "X509Certificate.h"
#include "PacketPeerUDP.h"
#include "CryptoKey.h"
#include "error_list.h"
#include "PacketPeerDTLS.h"
class DTLSServer : public Reference{
public:
Error setup(CryptoKey p_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [object:null]);
PacketPeerDTLS take_connection(PacketPeerUDP p_udp_peer);

protected:
public:
explicit DTLSServer(WasGoID p_wasgo_id);
explicit DTLSServer(Reference other);
DTLSServer new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_DTLSServer_wrapper_setup(WasGoID wasgo_id, WasGoID p_key, WasGoID p_certificate, WasGoID p_chain);
WasGoID _wasgo_DTLSServer_wrapper_take_connection(WasGoID wasgo_id, WasGoID p_udp_peer);

    //constructor wrappers
    WasGoID _wasgo_DTLSServer_constructor();
            
}
#endif