/* THIS FILE IS GENERATED */
#ifndef IP_H
#define IP_H

#include <stdint.h>

#include "Object.h"
#include "String.h"
#include "Variant.h"
class IP : public Object{
public: IP();
enum ResolverStatus{
RESOLVER_STATUS_NONE: 0,
RESOLVER_STATUS_WAITING: 1,
RESOLVER_STATUS_DONE: 2,
};
enum Type{
TYPE_NONE: 0,
TYPE_IPV4: 1,
TYPE_IPV6: 2,
};
void  clear_cache(String hostname = "");
void  erase_resolve_item(int id);
Array  get_local_addresses();
Array  get_local_addresses();
Array  get_local_interfaces();
Array  get_local_interfaces();
String  get_resolve_item_address(int id);
enum.IP::ResolverStatus  get_resolve_item_status(int id);
String  resolve_hostname(String host, int ip_type = 3);
int  resolve_hostname_queue_item(String host, int ip_type = 3);
};
#endif