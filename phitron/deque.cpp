#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* nxt;
    Node* pre;
    
    Node(int val){
        data = val;
        nxt = NULL;
        pre = NULL;
    }
};

class Deque{
    Node* head;
    Node* tail;
    int sz;
    void InsertHead(Node* node){
        head = node;
        tail = node;
        sz++;
    }
public:
    Deque(){
        head = NULL;
        tail = NULL;
        sz=0;
    }

    void push_back(int val){
        Node* newnode = new Node(val);
        if(sz==0){
            InsertHead(newnode);
            return;
        }
        
        newnode->pre = tail;
        tail = newnode;
        sz++;
    }

    void push_front(int val){
        Node* newnode = new Node(val);
        if(sz==0){
            InsertHead(newnode);
            return;
        }
        
        newnode->nxt = head;
        head = newnode;
        sz++;
    }


    void pop_back(){
        Node* a = tail;
        if(sz==0){
            cout<<"Queue is empty\n";
            return;
        }
        if(sz==1){
            delete a;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        
        tail = tail->pre;
        tail->nxt = NULL;
        sz--;
        delete a;
    }


    int front(){
        if(sz==0){
            cout<<"Queue is empty\n";
            return -1;
        }
        return head->data;
    }

    int back(){
        if(sz==0){
            cout<<"Queue is empty\n";
            return -1;
        }
        return tail->data;
    }
    int getSize(){
        return sz;
    }

};

int main(){

    Deque dq;
    dq.push_back(4);
    dq.push_front(5);
    dq.push_front(1);
    dq.push_front(8);
    dq.pop_back();
    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";
    cout<<dq.getSize()<<"\n";

    return 0;
}