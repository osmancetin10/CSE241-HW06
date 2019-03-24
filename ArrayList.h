#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include "List.h"

namespace osman{

template<class T, class U>
class ArrayList: public List<T,U>
{
    public:
        ArrayList(U obj){arr=obj;};
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

    private:
        U arr;
        typename U::iterator iter;
};

}
#endif // ARRAYLIST_H
