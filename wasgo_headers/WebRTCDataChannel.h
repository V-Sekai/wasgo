/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "Erro.h"
#include "String.h"
#include "PacketPeer.h"
class WebRTCDataChannel : public PacketPeer{
public: WebRTCDataChannel();
enum WriteMode{
WRITE_MODE_TEXT: 0,
};
enum ChannelState{
STATE_CONNECTING: 0,
STATE_OPEN: 1,
STATE_CLOSING: 2,
};
void  close();
void  close();
int  get_id();
int  get_id();
String  get_label();
String  get_label();
int  get_max_packet_life_time();
int  get_max_packet_life_time();
int  get_max_retransmits();
int  get_max_retransmits();
String  get_protocol();
String  get_protocol();
enum.WebRTCDataChannel::ChannelState  get_ready_state();
enum.WebRTCDataChannel::ChannelState  get_ready_state();
enum.WebRTCDataChannel::WriteMode  get_write_mode();
enum.WebRTCDataChannel::WriteMode  get_write_mode();
bool  is_negotiated();
bool  is_negotiated();
bool  is_ordered();
bool  is_ordered();
enum.Error  poll();
enum.Error  poll();
void  set_write_mode(int write_mode);
bool  was_string_packet();
bool  was_string_packet();
};