#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int value;
        Node *pnt;
        Node(int value){
            this->value = value;
            this->pnt = NULL;
        }
    
};

class LinkedList{
    Node *head;
    int size;
    Node* createNode(int value){
        Node *n = new Node(value);
        size++;
        return n;
    }
    void Reverce(Node *a){
        if(a==NULL){
            return;
        }   
        
        Reverce(a->pnt);
        cout<<a->value<<" ";
    }
    public:
    LinkedList(){
        head = NULL;
        size = 0;
    }
    

    void InsertAtHead(int value){
        Node *a = createNode(value);
        
        if(head==NULL){
            head = a;
            return;
        }
        a->pnt = head;
        head=a;

        
        
    }


    void Insert(int value,int index=NULL){
        if(index<0||index>size){
            return;
        }
        if(index==0||index==NULL){
            InsertAtHead(value);
            return;
        }
        Node *newNode = createNode(value);
        Node *h = head;
        int current_index = 0;
        while (current_index != index-1)
        {
            h = h->pnt;
            current_index++; 
        }
        
        newNode->pnt = h->pnt;
        h->pnt = newNode;
    }

    void Traverse(){
        Node *n = head;
        
        while (n!=NULL)
        {
            cout<<n->value<<" ";
            n = n->pnt;
        }
        cout<<"\n";
    }
    

    void printReverse(){

        if(head==NULL)
            return;
        
        
        

    }

    int getSize(){
        
        return size;
        
    }

    int getValue(int ndx){
        
        int i = 0;
        Node *n = head;
        while (n!=NULL)
        {
            if(i==ndx)
                return n->value;
            i++;
            n = n->pnt;
        }
        return -1;
    }


    void deleteAtHead(){
        Node *h = head;
        head = h->pnt;
        delete h;
        size--;
    }

    void Delete(int index){
        if(index<0||index>size){
            return;
        }
        if(index==0){
            deleteAtHead();
            return;
        }
        
        Node *h = head;
        int current_index = 0;
        while (current_index != index-1)
        {
            h = h->pnt;
            current_index++; 
        }
        
        head = h->pnt;
        delete h;
        size--;
    }

    void swapFirst(){
        if(this->getSize()<2)
            return;
        Node *c = head;
        head  = head->pnt;
        Node *p = head->pnt;
        head->pnt = c;
        c->pnt = p;
       
            

        
    }

    void RevercePrint(){
        Reverce(head);
        cout<<"\n";
    }

    void AddAfterValue(int value, int data){
        Node *a = head;
        while (a->value!=value)
        {   
           
            a = a->pnt;
            
        }
        if(a==NULL){
            cout<<value<<" don't find\n";
            return;
        }
        Node *newnode = createNode(data);
        newnode->pnt = a->pnt;
        a->pnt = newnode;
    }


};

int main(){
    
    LinkedList l;
    
    l.InsertAtHead(5);
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    
    l.RevercePrint();
    l.Traverse();
    l.AddAfterValue(5,12);
    l.Traverse();
    l.RevercePrint();

    return 0;
}