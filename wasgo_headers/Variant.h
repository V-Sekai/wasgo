//PLACEHOLDER
#ifndef WASGO_VARIANT_H
#define WASGO_VARIANT_H

#include "wasgo/wasgo.h"
class Variant{
    protected:
        Variant(WasGo::WasGoId id){
			wasgo_id = id;
		}

	public:
		WasGo::WasGoId wasgo_id;
		static Variant from_wasgo_id(WasGo::WasGoId){
			return Variant(id);
		}
};

#endif