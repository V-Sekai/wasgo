/* THIS FILE IS GENERATED */
#ifndef WEBRTCMULTIPLAYER_H
#define WEBRTCMULTIPLAYER_H

#include <stdint.h>

#include "Erro.h"
#include "Dictionary.h"
#include "NetworkedMultiplayerPeer.h"
#include "WebRTCPeerConnection.h"
class WebRTCMultiplayer : public NetworkedMultiplayerPeer{
public: WebRTCMultiplayer();
enum.Error  add_peer(WebRTCPeerConnection peer, int peer_id, int unreliable_lifetime = 1);
void  close();
void  close();
Dictionary  get_peer(int peer_id);
Dictionary  get_peers();
Dictionary  get_peers();
bool  has_peer(int peer_id);
enum.Error  initialize(int peer_id, bool server_compatibility = false);
void  remove_peer(int peer_id);
};
#endif