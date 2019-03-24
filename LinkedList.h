#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "List.h"
#include "Queue.h"

namespace osman{

template<class T, class U>
class LinkedList: public List<T,U>, public Queue<T,U>
{
    public:
        LinkedList(U obj){arr=obj;};
        inline T iterator(){ return iter; };
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
        T element();
        void offer(T element);
        T poll();

    private:
        U arr;
        typename U::iterator iter;
};

}
#endif // LINKEDLIST_H
