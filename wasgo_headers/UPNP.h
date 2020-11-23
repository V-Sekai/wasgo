/* THIS FILE IS GENERATED */
#ifndef UPNP_H
#define UPNP_H

#include <stdint.h>

#include "Reference.h"
#include "String.h"
#include "UPNPDevice.h"
class UPNP : public Reference{
public: UPNP();
enum UPNPResult{
UPNP_RESULT_SUCCESS: 0,
UPNP_RESULT_NOT_AUTHORIZED: 1,
UPNP_RESULT_PORT_MAPPING_NOT_FOUND: 2,
UPNP_RESULT_INCONSISTENT_PARAMETERS: 3,
UPNP_RESULT_NO_SUCH_ENTRY_IN_ARRAY: 4,
UPNP_RESULT_ACTION_FAILED: 5,
UPNP_RESULT_SRC_IP_WILDCARD_NOT_PERMITTED: 6,
UPNP_RESULT_EXT_PORT_WILDCARD_NOT_PERMITTED: 7,
UPNP_RESULT_INT_PORT_WILDCARD_NOT_PERMITTED: 8,
UPNP_RESULT_REMOTE_HOST_MUST_BE_WILDCARD: 9,
UPNP_RESULT_EXT_PORT_MUST_BE_WILDCARD: 10,
UPNP_RESULT_NO_PORT_MAPS_AVAILABLE: 11,
UPNP_RESULT_CONFLICT_WITH_OTHER_MECHANISM: 12,
UPNP_RESULT_CONFLICT_WITH_OTHER_MAPPING: 13,
UPNP_RESULT_SAME_PORT_VALUES_REQUIRED: 14,
UPNP_RESULT_ONLY_PERMANENT_LEASE_SUPPORTED: 15,
UPNP_RESULT_INVALID_GATEWAY: 16,
UPNP_RESULT_INVALID_PORT: 17,
UPNP_RESULT_INVALID_PROTOCOL: 18,
UPNP_RESULT_INVALID_DURATION: 19,
UPNP_RESULT_INVALID_ARGS: 20,
UPNP_RESULT_INVALID_RESPONSE: 21,
UPNP_RESULT_INVALID_PARAM: 22,
UPNP_RESULT_HTTP_ERROR: 23,
UPNP_RESULT_SOCKET_ERROR: 24,
UPNP_RESULT_MEM_ALLOC_ERROR: 25,
UPNP_RESULT_NO_GATEWAY: 26,
UPNP_RESULT_NO_DEVICES: 27,
};
void  add_device(UPNPDevice device);
int  add_port_mapping(int port, int port_internal = 0, String desc = "", String proto = udp, int duration = 0);
void  clear_devices();
void  clear_devices();
int  delete_port_mapping(int port, String proto = udp);
int  discover(int timeout = 2000, int ttl = 2, String device_filter = internetgatewaydevice);
UPNPDevice  get_device(int index);
int  get_device_count();
int  get_device_count();
int  get_discover_local_port();
int  get_discover_local_port();
String  get_discover_multicast_if();
String  get_discover_multicast_if();
UPNPDevice  get_gateway();
UPNPDevice  get_gateway();
bool  is_discover_ipv6();
bool  is_discover_ipv6();
String  query_external_address();
String  query_external_address();
void  remove_device(int index);
void  set_device(int index, UPNPDevice device);
void  set_discover_ipv6(bool ipv6);
void  set_discover_local_port(int port);
void  set_discover_multicast_if(String m_if);
};
#endif