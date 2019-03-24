#ifndef ITERATOR_H
#define ITERATOR_H
#include<iterator>
#include<vector>
#include "Collection.h"

using namespace std;


namespace osman{

template<class T, class U>
class Iterator
{
    public:
        Iterator();
        bool hasNext();
        T next();
        void remove();

    private:
        typename U::iterator iter;
        U arr;
};

}
#endif // ITERATOR_H
