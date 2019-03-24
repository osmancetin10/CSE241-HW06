#ifndef SET_H
#define SET_H
#include "Collection.h"

namespace osman{

template<class T, class U>
class Set: public Collection<T,U>
{
    public:
        Set(U obj){};

};

}
#endif // SET_H

