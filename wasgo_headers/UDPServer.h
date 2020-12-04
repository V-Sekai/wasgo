/* THIS FILE IS GENERATED */
#ifndef UDPSERVER_H
#define UDPSERVER_H

#include "wasgo\wasgo.h"

#include "PacketPeerUDP.h"
#include "Reference.h"
#include "error_list.h"
#include "ustring.h"
class UDPServer : public Reference{
public:
int get_max_pending_connections();
bool is_connection_available();
bool is_listening();
Error listen(int p_port, String p_bind_address = (String) *);
Error poll();
void set_max_pending_connections(int p_max_pending_connections);
void stop();
PacketPeerUDP take_connection();

protected:
public:
explicit UDPServer(WasGoId p_wasgo_id);
explicit UDPServer(Reference other);
UDPServer new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_UDPServer_wrapper_get_max_pending_connections(WasGoId wasgo_id);
int _wasgo_UDPServer_wrapper_is_connection_available(WasGoId wasgo_id);
int _wasgo_UDPServer_wrapper_is_listening(WasGoId wasgo_id);
WasGoId _wasgo_UDPServer_wrapper_listen(WasGoId wasgo_id, int p_port, const uint8_t * p_bind_address, int p_bind_address_wasgo_buffer_size);
WasGoId _wasgo_UDPServer_wrapper_poll(WasGoId wasgo_id);
void _wasgo_UDPServer_wrapper_set_max_pending_connections(WasGoId wasgo_id, int p_max_pending_connections);
void _wasgo_UDPServer_wrapper_stop(WasGoId wasgo_id);
WasGoId _wasgo_UDPServer_wrapper_take_connection(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_UDPServer_constructor();
            
}
#endif