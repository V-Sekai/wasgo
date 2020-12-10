/* THIS FILE IS GENERATED */
#ifndef DTLSSERVER_H
#define DTLSSERVER_H

#include "wasgo\wasgoid.h"

#include "PacketPeerUDP.h"
#include "error_list.h"
#include "PacketPeerDTLS.h"
#include "Reference.h"
#include "X509Certificate.h"
#include "CryptoKey.h"
class DTLSServer : public Reference{
public:
Error setup(CryptoKey p_key, X509Certificate p_certificate, X509Certificate p_chain = X509Certificate());
PacketPeerDTLS take_connection(PacketPeerUDP p_udp_peer);

protected:
public:
explicit DTLSServer(WasGoID p_wasgo_id);
explicit DTLSServer(Reference other);
DTLSServer();
DTLSServer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_DTLSServer_wrapper_setup(WasGoID wasgo_id, WasGoID p_key, WasGoID p_certificate, int wasgo_throwaway, WasGoID p_chain);
WasGoID _wasgo_DTLSServer_wrapper_take_connection(WasGoID wasgo_id, WasGoID p_udp_peer);

    //constructor wrappers
    WasGoID _wasgo_DTLSServer_constructor();
            
}
#endif