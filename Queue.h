#ifndef QUEUE_H
#define QUEUE_H
#include "Collection.h"

namespace osman{

template<class T, class U>
class Queue: public Collection<T,U>{
    public:
        Queue();
        virtual T element()=0;
        virtual void offer(T element)=0;
        virtual T poll()=0;

};

}
#endif // QUEUE_H
