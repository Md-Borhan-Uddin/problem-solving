#include<bits/stdc++.h>

using namespace std;
const int MAX_SIZE = 500; 

class Stack{
    public:
    int stack_size;
    int arr[MAX_SIZE];
    Stack(){
        stack_size=0;
        
    }
    void push(int val){
       
        arr[stack_size]=val; 
        stack_size = stack_size+1;
    }
    int top(){
        if(stack_size==0)
            return -1;
    
        return arr[stack_size-1];
    }
    void pop(){
        if(stack_size==0)
            return;
        stack_size = stack_size-1;
    }
    int getSize(){
        return stack_size;
    }

    void print(){
        for(int i=0; i<stack_size;i++){
            cout<<arr[i]<<" ";
        }
    }
};



int main(){

    Stack st;
    st.push(7);
    st.push(5);
    st.push(2);
    // st.pop();
    st.push(3);
    // cout<<st.getSize()<<"\n";
    // cout<<st.top()<<"\n";
    while (st.stack_size>0)
    {
        cout<<st.top()<<"\n";
        st.pop();
    }

    // st.print();
    


    return 0;
}