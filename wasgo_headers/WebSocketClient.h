/* THIS FILE IS GENERATED */
#ifndef WEBSOCKETCLIENT_H
#define WEBSOCKETCLIENT_H

#include <stdint.h>

#include "String.h"
#include "WebSocketMultiplayerPeer.h"
#include "X509Certificate.h"
#include "PoolStringArray.h"
#include "Erro.h"
class WebSocketClient : public WebSocketMultiplayerPeer{
public: WebSocketClient();
enum.Error  connect_to_url(String url, PoolStringArray protocols = [], bool gd_mp_api = false, PoolStringArray custom_headers = []);
void  disconnect_from_host(int code = 1000, String reason = "");
String  get_connected_host();
String  get_connected_host();
int  get_connected_port();
int  get_connected_port();
X509Certificate  get_trusted_ssl_certificate();
X509Certificate  get_trusted_ssl_certificate();
bool  is_verify_ssl_enabled();
bool  is_verify_ssl_enabled();
void  set_trusted_ssl_certificate(X509Certificate arg0);
void  set_verify_ssl_enabled(bool enabled);
};
#endif