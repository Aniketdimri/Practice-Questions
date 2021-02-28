#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

void Inorder(Node* node,Node* &root,Node* &prev,int f){
    if(!node){return ;}
    Inorder(node->left,root,prev,f);
    if(f==0){
        root=node;
        prev=node;
    }
    else{
        prev->right=node;
        prev->right->left=prev;
        prev=prev->right;
    }
    Inorder(node->right,root,prev,f);
}

Node* toDLD(Node* node){
    int f=0;
    Node* root=NULL;
    Node* prev=NULL;
    solve(node,root,prev,f);
    return root;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
