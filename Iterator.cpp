#include "Iterator.h"

namespace osman{

template<class T, class U>
bool Iterator<T,U>::hasNext(){

    if(iter==arr.end()) return false;
    else return true;
};

template<class T, class U>
T Iterator<T,U>::next(){

    iter++;
    return iter;
}

template<class T, class U>
void Iterator<T,U>::remove(){

    iter = arr.erase(iter);
}
}
