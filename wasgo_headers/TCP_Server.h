/* THIS FILE IS GENERATED */
#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include "stdint.h"
#include "wasgo\wasgo.h"

#include "Reference.h"
#include "ustring.h"
#include "error_list.h"
#include "StreamPeerTCP.h"
class TCP_Server : public Reference{
public:
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
WasGoId _wasgo_TCP_Server_wrapper_listen(WasGoId wasgo_id, int p_port, WasGoId p_bind_address);
void _wasgo_TCP_Server_wrapper_stop(WasGoId wasgo_id);
WasGoId _wasgo_TCP_Server_wrapper_take_connection(WasGoId wasgo_id);
}
#endif