/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Reference.h"
#include "WebRTCDataChannel.h"
#include "Erro.h"
#include "Dictionary.h"
class WebRTCPeerConnection : public Reference{
public: WebRTCPeerConnection();
enum ConnectionState{
STATE_NEW: 0,
STATE_CONNECTING: 1,
STATE_CONNECTED: 2,
STATE_DISCONNECTED: 3,
STATE_FAILED: 4,
};
enum.Error  add_ice_candidate(String media, int index, String name);
void  close();
void  close();
WebRTCDataChannel  create_data_channel(String label, Dictionary options = {});
enum.Error  create_offer();
enum.Error  create_offer();
enum.WebRTCPeerConnection::ConnectionState  get_connection_state();
enum.WebRTCPeerConnection::ConnectionState  get_connection_state();
enum.Error  initialize(Dictionary configuration = {});
enum.Error  poll();
enum.Error  poll();
enum.Error  set_local_description(String type, String sdp);
enum.Error  set_remote_description(String type, String sdp);
};