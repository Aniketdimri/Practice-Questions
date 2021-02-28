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

unordered_map<Node* node,int> dp;
int func(Node* node){
    if(!root){return dp[root];}
    if(dp[root]){return dp[root];}
    int inc=root->data;
    if(root->left){
        inc+=func(root->left->left);
        inc+=func(root->left->right);
    }
    if(root->right){
        inc+=func(root->right->left);
        inc+=func(root->right->right);
    }
    int exc=func(root->left) + func(root->right);
    dp[root]=max(inc,exc);
    return dp[root];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
