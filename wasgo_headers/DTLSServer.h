/* THIS FILE IS GENERATED */
#ifndef DTLSSERVER_H
#define DTLSSERVER_H

#include "wasgo\wasgo.h"

#include "CryptoKey.h"
#include "error_list.h"
#include "PacketPeerDTLS.h"
#include "Reference.h"
#include "X509Certificate.h"
#include "PacketPeerUDP.h"
class DTLSServer : public Reference{
public:
Error setup(CryptoKey p_key, X509Certificate p_certificate, X509Certificate p_chain = (X509Certificate) [object:null]);
PacketPeerDTLS take_connection(PacketPeerUDP p_udp_peer);

protected:
public:
explicit DTLSServer(WasGoId p_wasgo_id);
explicit DTLSServer(Reference other);
DTLSServer new_instance();
            
};


//Wrapper Functions
extern "C"{
WasGoId _wasgo_DTLSServer_wrapper_setup(WasGoId wasgo_id, WasGoId p_key, WasGoId p_certificate, WasGoId p_chain);
WasGoId _wasgo_DTLSServer_wrapper_take_connection(WasGoId wasgo_id, WasGoId p_udp_peer);

    //constructor wrappers
    WasGoId _wasgo_DTLSServer_constructor();
            
}
#endif