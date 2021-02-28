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
int height(Node* node){
    if(!root){return 0;}
    int left=height(node->left);
    int right=height(node->right);
    return (max(left,right)+1);
}
int diameter(Node* node){
    if(!root){return 0;}
    int hleft=height(node->left);
    int right=height(node->right);
    int dleft=diameter(node->left);
    int dright=height(node->right);
    return (max(1+hleft+hright,max(dleft,dright)));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
