/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Erro.h"
#include "String.h"
#include "StreamPeerTCP.h"
#include "Reference.h"
class TCP_Server : public Reference{
public: TCP_Server();
bool  is_connection_available();
bool  is_connection_available();
bool  is_listening();
bool  is_listening();
enum.Error  listen(int port, String bind_address = *);
void  stop();
void  stop();
StreamPeerTCP  take_connection();
StreamPeerTCP  take_connection();
};