//PLACEHOLDER
#ifndef WASGO_VARIANT_H
#define WASGO_VARIANT_H

#include "wasgo/wasgo.h"
// class WasGo;
typedef uint32_t WasGoId;

class Variant{
    protected:
        Variant(WasGoId id){
			wasgo_id = id;
		}

	public:
		WasGoId wasgo_id;
		static Variant from_wasgo_id(WasGoId id){
			return Variant(id);
		}
};

#endif