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

void LeftTree(Node* root, vector<int> &ans){
    if(!root){return;}
    if(root->left){
        ans.push(root->data);
        LeftTree(root->left,ans);
    }
    else if(root->right){
        ans.push(root->data);
        LeftTree(root->right,ans);
    }
}

Void Leaf(Node* root,vector<int> &ans){
    if(!root){return ;}
    if(root->left){
        Leaf(root->left,ans);
    }
    if(root->right){
        Leaf(root->right,ans);
    }
    if(!root->left && !root->right){
        ans.push_back(root->data);
    }
}

void RightTree(Node* root,vector<int> &ans){
    if(!root){return ;}
    if(root->right){
        ans.push_back(root->data);
        RightTree(root->right,ans);
    }
    else if(root->left){
        ans.push_back(root->data);
        RightTree(root->left,ans);
    }
}

vector<int> printBoundary(Node* node){
    vector<int> ans;
    ans.push_back(root->data);
    LeftTree(root->left,ans);
    Leaf(root,ans);
    RightTree(root,ans);
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
