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
int idx=0;
unordered_map<int,int> m;
Node* solve(int pre[],int in[],int lb,int ub){
    if(lb>ub) return NULL;
    Node* res=new Node(Pre[idx++]);
    if(lb==ub){return res;}
    int mid=m[res->data];
    res->left=solve(pre,in,lb,mid-1);
    res->right=solve(pre,in,lb,mid+1);
    return res;
}

Node* buildTree(int in[],int pre[], int n){
    idx=0;
    m.clear();
    for(int i=0;i<n;i++){m[in[i]]=i;}
    Node* root=solve(pre,in,0,n-1);
    return root;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
