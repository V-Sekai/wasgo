/* THIS FILE IS GENERATED */
#ifndef TCP_SERVER_H
#define TCP_SERVER_H

#include "wasgo\wasgo.h"

#include "StreamPeerTCP.h"
#include "Reference.h"
#include "error_list.h"
#include "ustring.h"
class TCP_Server : public Reference{
public:
bool is_connection_available();
bool is_listening();
Error listen(int p_port, String p_bind_address = (String) *);
void stop();
StreamPeerTCP take_connection();

protected:
public:
explicit TCP_Server(WasGoId p_wasgo_id);
explicit TCP_Server(Reference other);
TCP_Server new_instance();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_TCP_Server_wrapper_is_connection_available(WasGoId wasgo_id);
int _wasgo_TCP_Server_wrapper_is_listening(WasGoId wasgo_id);
WasGoId _wasgo_TCP_Server_wrapper_listen(WasGoId wasgo_id, int p_port, const uint8_t * p_bind_address, int p_bind_address_wasgo_buffer_size);
void _wasgo_TCP_Server_wrapper_stop(WasGoId wasgo_id);
WasGoId _wasgo_TCP_Server_wrapper_take_connection(WasGoId wasgo_id);

    //constructor wrappers
    WasGoId _wasgo_TCP_Server_constructor();
            
}
#endif