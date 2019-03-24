#include <iostream>
#include <list>
#include <vector>

#include "Collection.h"
#include "ArrayList.h"
#include "Collection.h"
#include "HashSet.h"
#include "Iterator.h"
#include "LinkedList.h"
#include "List.h"
#include "Queue.h"
#include "Set.h"


using namespace std;
using namespace osman;

int main()
{
    int i;
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(4);

    HashSet< int, vector<int> > obj(vec);
    obj.add(17);

    for(i=0;i<obj.arr.size();i++){
        cout<< obj.arr[i]<< endl;
    }

    return 0;
}

