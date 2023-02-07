#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int value;
    Node *nxt;
    Node(int value){
        this->value=value;
        this->nxt = NULL;
    }
};

class LinkedList{
    public:
    Node *head;
    int size;
    LinkedList(){
        head = NULL;
        size = 0;
    }

    Node *createNode(int value){
        Node *newnode = new Node(value);
        size++;
        return newnode;

    }

    void push_front(int value){ 
        Node *newnode = createNode(value);
        
        newnode->nxt = head;
        head = newnode;
    }

    void pup_front(){
        
        if(head==NULL){
            cout<<"don't have element";
            return;
        }
        
        head = head->nxt;
        size--;
    }

    void push_back(int value){
        Node *a = head;
        Node *newnode = createNode(value);
        if(a==NULL){
            head = newnode;
            cout<<"hello";
            return;
        }
        while (a->nxt!=NULL)
        {
            a = a->nxt;
            
        }
        a->nxt = newnode;
        
    }

    void pup_back(){
        Node *a = head;
        if(head==NULL){
            cout<<"don't have element";
            return;
        }
        Node *tem = NULL;
        while (a->nxt!=NULL)
        {   
            tem = a;
            a = a->nxt;
            
        }
        tem->nxt=NULL;
        delete a;
        size--;
    }

    void Print(){
        Node *a =head;
        while (a!=NULL)
        {
            cout<<a->value<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    int getSize(){

        return size;
    }

    int getValueFromIndex(int ndx){
        int i = 0;
        Node *a= head;
        while (a!=NULL)
        {
            if(i==ndx)
                return a->value;
            i++;
            a = a->nxt;
        }
        return -1;
        
    }

    int findValue(int value){
       
        Node *a= head;
        while (a!=NULL)
        {
            if(a->value==value)
                return 1;
            
            a = a->nxt;
        }
        return 0;
        
    }

    void sort(){
        int f = head->value;
        for(int i=0;i<getSize();i++){
            Node *a = head;
            while (a!=NULL)
            {
                if(a->value<f){
                    push_front(a->value);
                    f = a->value;
                }
                a = a->nxt;
                
            }
            
        }
    }

};

int main(){
    LinkedList l;
    l.push_front(7);
    l.push_front(3);
    l.push_front(9);

    l.sort();
    l.Print();
    return 0;
}