/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Erro.h"
#include "NetworkedMultiplayerPeer.h"
#include "WebSocketPeer.h"
class WebSocketMultiplayerPeer : public NetworkedMultiplayerPeer{
public: WebSocketMultiplayerPeer();
WebSocketPeer  get_peer(int peer_id);
enum.Error  set_buffers(int input_buffer_size_kb, int input_max_packets, int output_buffer_size_kb, int output_max_packets);
};