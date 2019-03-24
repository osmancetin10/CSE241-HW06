#ifndef LIST_H
#define LIST_H
#include "Collection.h"

namespace osman{

template<class T, class U>
class List: public Collection<T,U>
{
    public:
        List();
};

}
#endif // LIST_H
