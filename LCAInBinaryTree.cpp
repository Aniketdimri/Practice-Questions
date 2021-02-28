#include<bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *left, *right;
    int data;
};

// Utility function to create a new tree Node
Node* newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->left = temp->right = NULL;
    return temp;
}

Node* findLCA(Node* node,int n1,int n2){
    if(!node){return NULL;}
    if(node->data==n1 || node->data==n2){return node;}
    Node* l=findLCA(node->left,n1,n2);
    Node* r=findLCA(node->right,n1,n2);
    if(l && r){return node;}
    if(l){return l;}
    else if(r){
        return r;
    }
    else{
        return NULL;
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Let us create binary tree given in the above example
    Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5)->data;
    cout << "\nLCA(4, 6) = " << findLCA(root, 4, 6)->data;
    cout << "\nLCA(3, 4) = " << findLCA(root, 3, 4)->data;
    cout << "\nLCA(2, 4) = " << findLCA(root, 2, 4)->data;
    return 0;
}

