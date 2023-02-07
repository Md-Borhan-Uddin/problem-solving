#include<bits/stdc++.h>

using namespace std;

int getValue(int index,list<int> l){
    auto it = l.begin();
    int c_index = 0;
    if(l.size()<=index)
    return -1;

    while (c_index!=index)
    {
        it++;
        c_index++;
    }
    return *it;

    
}

bool Search(int value,list<int> l){
    auto it = l.begin();
    
    

    while (it !=l.end())
    {
        if(value==*it)
            return true;
        it++;
    }
    return false;
  
}

int main(){

    list<int> l;
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    cout<<getValue(3,l)<<"\n";
    cout<<Search(5,l);
    
    return 0;
}