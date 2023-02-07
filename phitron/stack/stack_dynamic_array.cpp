#include<bits/stdc++.h>

using namespace std;

template<class T>
class Stack{
    public:
    int stack_size;
    T *arr;
    int arr_size;
    Stack(){
        stack_size=0;
        arr = new T[1];
        arr_size = 1;
    }
    void increseSize(){
        T *temp;
        temp = new T[arr_size*2];
        for(int i=0;i<arr_size;i++){
            temp[i]=arr[i];
        }
        swap(arr,temp);
        arr_size = arr_size*2;
        delete []temp;
    }
    void push(T val){
        if(stack_size+1==arr_size)
        {
            increseSize();
        }
        arr[stack_size]=val; 
        stack_size = stack_size+1;
    }
    T top(){
        if(stack_size==0)
            throw invalid_argument("There are no Element in stack");
        
        return arr[stack_size-1];
    }
    void decreaseSize(){
        if(stack_size<arr_size/2)
            arr_size = arr_size/2;
    }
    void pop(){
        if(stack_size==0)
            return;
        stack_size = stack_size-1;
        decreaseSize();
    }
    int getSize(){
        return stack_size;
    }
};



int main(){

    Stack<int> st;
    st.push(7);
    st.push(5);
    st.push(2);
    st.pop();
    st.push(3);
    cout<<st.arr_size<<"\n";
    cout<<st.getSize()<<"\n";
    while (st.stack_size>0)
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    


    return 0;
}