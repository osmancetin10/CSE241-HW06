#include "LinkedList.h"

namespace osman{

template<class T, class U>
void LinkedList<T,U>::add(T element){

    iter=arr.end();
    arr.insert(iter,element);
    iter++;


}

template<class T, class U>
void LinkedList<T,U>::addAll(Collection<T,U>* obj){

    int i;
    iter=arr.end();
    for(i=0;i<obj.arr.size();i++){

            arr.insert(iter,obj.arr[i]);
            iter++;

    }

}

template<class T, class U>
void LinkedList<T,U>::clear(){

    typename U::iterator it1,it2;
    it1=arr.begin();    it2=arr.end();
    iter=arr.erase(it1,it2);

}

template<class T, class U>
bool LinkedList<T,U>::contains(T element){

    for(iter=arr.begin();iter!=arr.end();iter++){

        if(*iter==element) return true;
        else return false;
    }
}

template<class T, class U>
bool LinkedList<T,U>::containsAll(Collection<T,U>* obj){

    int control=0;
    for(obj.iter=obj.arr.begin();obj.iter!=obj.arr.end();obj.iter++){

        for(iter=arr.begin();iter!=arr.end();iter++){
            if(*obj.iter==*iter){
                control++;
                break;
            }
        }
    }

        if(control==obj.arr.size()) return true;
        else return false;

}

template<class T, class U>
bool LinkedList<T,U>::isEmpty(){

    if(arr.empty=true) return true;
    else return false;
}

template<class T, class U>
void LinkedList<T,U>::remove(T element){

    for(iter=arr.begin();iter!=arr.end();iter++){

        if(*iter==element){
            iter=arr.erase(iter);
            break;
        }
    }

}

template<class T, class U>
void LinkedList<T,U>::removeAll(Collection<T,U>* obj){

    for(obj.iter=obj.arr.begin();obj.iter!=obj.arr.end();obj.iter++){

        for(iter=arr.begin();iter!=arr.end();iter++){
            if(*obj.iter==*iter){
                iter=arr.erase(iter);
                break;
            }
        }
    }
}

template<class T, class U>
void LinkedList<T,U>::retainAll(Collection<T,U>* obj){

    int counter=0;

    for(iter=arr.begin();iter!=arr.end();iter++){

        for(obj.iter=obj.arr.begin();obj.iter!=obj.arr.end();obj.iter++){

            if(*iter==*obj.iter) counter++;
        }

        if(counter==0) iter=arr.erase(iter);

        counter=0;
    }
}

template<class T, class U>
int LinkedList<T,U>::size(){

    return arr.size();
}

template<class T, class U>
T LinkedList<T,U>::element(){

    iter=arr.begin();
    return *iter;

}

template<class T, class U>
void LinkedList<T,U>::offer(T element){

    iter=arr.end();
    arr.insert(iter,element);
    iter++;
}

}

