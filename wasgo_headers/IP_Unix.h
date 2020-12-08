/* THIS FILE IS GENERATED */
#ifndef IP_UNIX_H
#define IP_UNIX_H

#include "wasgo\wasgoid.h"

#include "IP.h"
class IP_Unix : public IP{
public:

protected:
public:
explicit IP_Unix(WasGoID p_wasgo_id);
explicit IP_Unix(IP other);
IP_Unix();
IP_Unix new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{

    //constructor wrappers
    WasGoID _wasgo_IP_Unix_constructor();
            
}
#endif