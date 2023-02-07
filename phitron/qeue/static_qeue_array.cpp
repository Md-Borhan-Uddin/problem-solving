#include<bits/stdc++.h>

using namespace std;
const int MAX_SZ = 5;
template <class T>
class Queue{
    public:
    T arr[MAX_SZ];
    int f,r;
    int size;
    Queue(){
        f=0;
        size=0;
        r=-1;
    }
    void enqueue(T val){
        if(getSize()==MAX_SZ){
            cout<<"Overflow"; 
            return;
        }
        r++;
        if(r==MAX_SZ)
            r=0;
        arr[r]=val;
        size++;
    }
    void dequeue(){
        if(size==0){
            cout<<"Overflow";
            return;
        }
        f++;
        if(f==MAX_SZ)
            f=0;
        
        size--;

    }

    T front(){
        if(size==0){
            
            return -1;
        }
        return arr[f];
    }

    T rear(){
        if(size==0){
            
            return -1;
        }
        return arr[r];
    }
    int getSize(){
        return size;
    }

};

int main(){
    Queue<char> q;
    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');
    q.enqueue('d');
    q.enqueue('e');
    cout<<q.rear()<<"\n";
    q.dequeue();
    cout<<q.getSize()<<"\n";
    q.enqueue('f');
    cout<<q.rear()<<"\n";
    q.enqueue('f');

    return 0;
}