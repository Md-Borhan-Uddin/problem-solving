#include<bits/stdc++.h>

using namespace std;
template <class T>
class Node{
public:
    T data;
    Node *next;
    
    Node(T val){
        this->data=val;
        this->next = NULL;
    }
};
template <class T>
class Stack{
    public:
    int stack_size;
    Node<T> *head;
    Stack(){
        stack_size=0;
        head = NULL;
        
    }
    Node<T>* create(T val){
        Node<T> *a = new Node<T>(val);
        stack_size++;
        return a;
        
    }
    void push(T val){
        if(head==NULL){
            head = create(val);
            return;
        }
        Node<T> *a = create(val);
        a->next = head;
        head = a;
    }
    T top(){
        return head->data;
    }
    
    void pop(){
        if(head==NULL){
            cout<<"Stack Empty";
            return;
        }
        
        head = head->next;
        stack_size--;
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
    st.push(3);
    cout<<st.getSize()<<"\n";
    st.pop();
    st.push(8);
    cout<<st.getSize()<<"\n";
    while (st.stack_size>0)
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    


    return 0;
}