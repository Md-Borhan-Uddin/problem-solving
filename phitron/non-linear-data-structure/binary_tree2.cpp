#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int Val;
    Node* Left;
    Node* Right;
    Node* Parent;

    Node(int val){
        Val = val;
        Left = NULL;
        Right = NULL;
        Parent = NULL;
    }

};

class BinaryTree{
public:
    Node* root;

    BinaryTree(){
        root = NULL;
    }

    void Insert(int val){
        Node* newnode = new Node(val);
        if(root==NULL){
            root=newnode;
            return;
        }
        queue<Node*> q;
        q.push(root);

        while (!q.empty())
        {
            Node* a = q.front();
            q.pop();
            if(a->Left==NULL){
                newnode->Parent = a;
                a->Left = newnode;
                return;
            }else{
                q.push(a->Left);
            }
            if(a->Right==NULL){
                newnode->Parent = a;
                a->Right = newnode;
                return;
            }else{
                q.push(a->Right);
            }
        }
        
    }

    void BFS(){
        if(root==NULL){
            cout<<"Binary Tree is empty\n";
            return;
        }
        queue<Node*> q;
        q.push(root);
        while (!q.empty())
        {
            int p=-1,l=-1,r=-1;
            Node* a = q.front();
            q.pop();
            
            if(a->Left!=NULL){
                l = a->Left->Val;
                q.push(a->Left);
            }
            if(a->Right!=NULL){
                r = a->Right->Val;
                q.push(a->Right);
            }
            if(a->Parent!=NULL){
                p = a->Parent->Val;
            }

            cout<<a->Val<<" "<<l<<" "<<r<<" "<<p<<"\n";
        }
        
    }

    void DFS(Node* a){
        if(a==NULL){
            return;
        }
        int p=-1,l=-1,r=-1;
        if(a->Left!=NULL){
            l = a->Left->Val;
        }
        if(a->Right!=NULL){
            r = a->Right->Val;
        }
        if(a->Parent!=NULL){
            p = a->Parent->Val;
        }
        cout<<"Node Is : "<<a->Val<<" parent : "<<p<<" Left : "<<l<<" Right : "<<r<<"\n"; 
        DFS(a->Left);
        DFS(a->Right);
    }


    bool Search(int val){
        if(root==NULL){
            return false;
        }
        queue<Node*> q;
        q.push(root);
        while (!q.empty())
        {
            Node* a = q.front();
            q.pop();

            if(a->Val==val){
                return true;
            }
            
            if(a->Left!=NULL){
                q.push(a->Left);
            }
            if(a->Right!=NULL){
                q.push(a->Right);
            }

            

        }
        return false;
    }

    void SearchPosition(Node* a, int val){
        if(a==NULL){
            return;
        }
        int n=0;
        if(a->Val==val){
            cout<<a->Val<<"\n";
            cout<<n<<"\n";
        }
        SearchPosition(a->Left,val);
        n++;
        SearchPosition(a->Right,val);
    }


 
};



int main(){ 

    BinaryTree bt;
    bt.Insert(1);
    bt.Insert(2);
    bt.Insert(3);
    bt.Insert(2);
    
    bt.SearchPosition(bt.root,2);


    return 0;
}