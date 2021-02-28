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

int sumTreeOrNot(Node* root, int &f){
    if(!root){return 0;}
    if(!root->left && !root->right){return root->data;}
    if(f==0){return 0;}
    int a=sumTreeOrNot(root->left, f);
    int b=sumTreeOrNot(root->right,f);
    if(a+b != root->data){f=0;}
    return a+b+root->data;
}

bool isSumTree(Node* root){
    int f=1;
    if(sumTreeOrNot(root,f)){
        cout<<"Sum Tree";
    }else{
        cout<<"Not Sum Tree";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
