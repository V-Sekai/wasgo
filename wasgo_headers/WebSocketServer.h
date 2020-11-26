/* THIS FILE IS GENERATED */
#ifndef WEBSOCKETSERVER_H
#define WEBSOCKETSERVER_H

#include <stdint.h>

#include "WebSocketMultiplayerPeer.h"
#include "PoolStringArray.h"
#include "String.h"
#include "Erro.h"
#include "X509Certificate.h"
#include "CryptoKey.h"
class WebSocketServer : public WebSocketMultiplayerPeer{
public: WebSocketServer();
void  disconnect_peer(int id, int code = 1000, String reason = "");
String  get_bind_ip();
String  get_bind_ip();
X509Certificate  get_ca_chain();
X509Certificate  get_ca_chain();
String  get_peer_address(int id);
int  get_peer_port(int id);
CryptoKey  get_private_key();
CryptoKey  get_private_key();
X509Certificate  get_ssl_certificate();
X509Certificate  get_ssl_certificate();
bool  has_peer(int id);
bool  is_listening();
bool  is_listening();
enum.Error  listen(int port, PoolStringArray protocols = [], bool gd_mp_api = false);
void  set_bind_ip(String arg0);
void  set_ca_chain(X509Certificate arg0);
void  set_private_key(CryptoKey arg0);
void  set_ssl_certificate(X509Certificate arg0);
void  stop();
void  stop();
};
#endif