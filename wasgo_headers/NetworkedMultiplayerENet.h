/* THIS FILE IS GENERATED */
#ifndef NETWORKEDMULTIPLAYERENET_H
#define NETWORKEDMULTIPLAYERENET_H

#include <stdint.h>

#include "Erro.h"
#include "String.h"
#include "NetworkedMultiplayerPeer.h"
class NetworkedMultiplayerENet : public NetworkedMultiplayerPeer{
public: NetworkedMultiplayerENet();
enum CompressionMode{
COMPRESS_NONE: 0,
COMPRESS_RANGE_CODER: 1,
COMPRESS_FASTLZ: 2,
COMPRESS_ZLIB: 3,
};
void  close_connection(int wait_usec = 100);
enum.Error  create_client(String address, int port, int in_bandwidth = 0, int out_bandwidth = 0, int client_port = 0);
enum.Error  create_server(int port, int max_clients = 32, int in_bandwidth = 0, int out_bandwidth = 0);
void  disconnect_peer(int id, bool now = false);
int  get_channel_count();
int  get_channel_count();
enum.NetworkedMultiplayerENet::CompressionMode  get_compression_mode();
enum.NetworkedMultiplayerENet::CompressionMode  get_compression_mode();
int  get_last_packet_channel();
int  get_last_packet_channel();
int  get_packet_channel();
int  get_packet_channel();
String  get_peer_address(int id);
int  get_peer_port(int id);
int  get_transfer_channel();
int  get_transfer_channel();
bool  is_always_ordered();
bool  is_always_ordered();
bool  is_server_relay_enabled();
bool  is_server_relay_enabled();
void  set_always_ordered(bool ordered);
void  set_bind_ip(String ip);
void  set_channel_count(int channels);
void  set_compression_mode(int mode);
void  set_server_relay_enabled(bool enabled);
void  set_transfer_channel(int channel);
};
#endif