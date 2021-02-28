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

vector<int> longestPath(Node* node,int h,int &max){
    if(!node){return {0,0};}
    vector<int> a=longestPath(root->left);
    vector<int> b=longestPath(root->right);
    if(a[0]>b[0]){return {a[0],node->data+a[1]};}
    else if(a[0]<b[0]){return {b[0],node->data+b[1]};}
    else{
        return {a[0]+1,node->data+max(a[1],b[1])};
    }
}
void sum(Node* node){
    vector<int> ans =solve(node);
    return ans[1];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
