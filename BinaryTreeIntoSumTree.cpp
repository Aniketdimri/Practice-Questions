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
int sumTree(Node* node){
    if(!root){return 0;}
    int lData=sumTree(node->left);
    int rData=sumtree(node->right);
    int data=node->data;
    node->data=lData+rData;
    return data+node->data;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
