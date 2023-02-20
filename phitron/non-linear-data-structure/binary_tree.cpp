#include <bits/stdc++.h>

using namespace std;


class Node{
public:
    int id;
    Node* left;
    Node* right;
    Node* parent;

    Node(int id){
        this->id = id;
        this->left = NULL;
        this->right = NULL;
        this->parent = NULL;
    }
};

class BinaryTree{
public:
    Node* root;

    BinaryTree(){
        root = NULL;
    }

    void Insert(int id){
        Node* newnode = new Node(id);
        // cout<<newnode<<"\n";
        if(root==NULL){
            root = newnode;
            return;
        }
        queue<Node*> qn;

        qn.push(root);
        while (!qn.empty())
        {
            
            Node* a = qn.front();
            qn.pop();
            if(a->left!=NULL){
                qn.push(a->left);
            }
            else{
                a->left = newnode;
                newnode->parent = a;
                return;
            }
            if(a->right!=NULL){
                qn.push(a->right);
            }
            else{
                a->right = newnode;
                newnode->parent = a;
                return;
            }
        }
        

    }
    void BFS(){

        queue<Node*> qn;
        qn.push(root);

        while (!qn.empty())
        {
            int p = -1,l = -1, r = -1;
            
            Node* a = qn.front();
            qn.pop();
            // cout<<a->parent<<"\n";
            if(a->left!=NULL){
                l = a->left->id;
                qn.push(a->left);
            }
            if(a->right!=NULL){
                l = a->right->id;
                qn.push(a->right);
            }
            if(a->parent!=NULL){
                l = a->parent->id;
            }
            cout<<"Node Is : "<<a->id<<" parent : "<<p<<" Left : "<<a->left<<" Right : "<<r<<"\n";
            
        }
    }
    

    void DFS(Node* a){
        if(a==NULL){
            return;
        }
        cout<<"Node Is : "<<a->id<<" parent : "<<a->parent->id<<" Left : "<<a->left->id<<" Right : "<<a->right->id<<"\n"; 
        DFS(a->left);
        DFS(a->right);
    }


};

int main(){
    BinaryTree bt;

    bt.Insert(0);
    bt.Insert(1);
    bt.Insert(2);
    bt.Insert(3);
    bt.BFS();

    return 0;
}