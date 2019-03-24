#include <iostream>
#include <list>
#include <vector>

#ifndef HASHSET_H
#define HASHSET_H
#include "Set.cpp"
#include "Set.h"
#include "Collection.h"
#include "Collection.cpp"

using namespace std;

namespace osman{

template<class T, class U>
class HashSet: public Set<T,U>
{
    public:
        U arr;
        HashSet(){ };
        HashSet(U obj){ arr=obj; };
        //inline T iterator(){ return iter; };
        void add(T element);
        void addAll(Collection<T,U>* obj);
        void clear();
        bool contains(T element);
        bool containsAll(Collection<T,U>* obj);
        bool isEmpty();
        void remove(T element);
        void removeAll(Collection<T,U>* obj);
        void retainAll(Collection<T,U>* obj);
        int size();


    private:
        typename U::iterator iter;
};
}
#endif // HASHSET_H

