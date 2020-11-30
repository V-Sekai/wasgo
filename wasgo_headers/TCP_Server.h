/* THIS FILE IS GENERATED */
#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Variant.h"
#include "Reference.h"
#include "StreamPeerTCP.h"
#include "Error.h"
class TCP_Server : public Reference{
bool is_connection_available();
bool is_listening();
Error listen(int p_port, String p_bind_address = (String) *);
void stop();
StreamPeerTCP take_connection();

TCP_Server(WasGoId p_wasgo_id);
~TCP_Server();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_TCP_Server_wrapper_is_connection_available(WasGoId wasgo_id);
int _wasgo_TCP_Server_wrapper_is_listening(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_TCP_Server_wrapper_listen(WasGoId wasgo_id, int p_port, WasGo::WasGoId p_bind_address);
void _wasgo_TCP_Server_wrapper_stop(WasGoId wasgo_id);
WasGo::WasGoId _wasgo_TCP_Server_wrapper_take_connection(WasGoId wasgo_id);
}
#endif