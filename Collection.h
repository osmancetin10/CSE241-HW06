#include <iostream>
#ifndef COLLECTION_H
#define COLLECTION_H
#include "Iterator.h"

using namespace std;

namespace osman{

template<class T, class U=vector<T>>
class Collection
{
    public:
        Collection();
        Collection(U obj){};
        //virtual T iterator()=0;
        virtual void add(T element)=0;
        virtual void addAll(Collection* obj)=0;
        virtual void clear()=0;
        virtual bool contains(T element)=0;
        virtual bool containsAll(Collection* obj)=0;
        virtual bool isEmpty()=0;
        virtual void remove(T element)=0;
        virtual void removeAll(Collection* obj)=0;
        virtual void retainAll(Collection* obj)=0;
        virtual int size()=0;

};

}
#endif // COLLECTION_H

