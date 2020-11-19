/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "String.h"
#include "Reference.h"
class UPNPDevice : public Reference{
public: UPNPDevice();
enum IGDStatus{
IGD_STATUS_OK: 0,
IGD_STATUS_HTTP_ERROR: 1,
IGD_STATUS_HTTP_EMPTY: 2,
IGD_STATUS_NO_URLS: 3,
IGD_STATUS_NO_IGD: 4,
IGD_STATUS_DISCONNECTED: 5,
IGD_STATUS_UNKNOWN_DEVICE: 6,
IGD_STATUS_INVALID_CONTROL: 7,
IGD_STATUS_MALLOC_ERROR: 8,
};
int  add_port_mapping(int port, int port_internal = 0, String desc = "", String proto = udp, int duration = 0);
int  delete_port_mapping(int port, String proto = udp);
String  get_description_url();
String  get_description_url();
String  get_igd_control_url();
String  get_igd_control_url();
String  get_igd_our_addr();
String  get_igd_our_addr();
String  get_igd_service_type();
String  get_igd_service_type();
enum.UPNPDevice::IGDStatus  get_igd_status();
enum.UPNPDevice::IGDStatus  get_igd_status();
String  get_service_type();
String  get_service_type();
bool  is_valid_gateway();
bool  is_valid_gateway();
String  query_external_address();
String  query_external_address();
void  set_description_url(String url);
void  set_igd_control_url(String url);
void  set_igd_our_addr(String addr);
void  set_igd_service_type(String type);
void  set_igd_status(int status);
void  set_service_type(String type);
};