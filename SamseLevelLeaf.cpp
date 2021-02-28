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

int ans=1;

void solve(Node* node, int h, int &m){
    if(!node){return;}
    if(!node->left && !node->right){
        if(m==-1){
            ans=1;
            m=h;
        }
        else{
            if(h==m){
                ans=0;
            }
        }
        return;
    }
    solve(node->left,h+1,m);
    solve(node->right,h+1,m);
}

bool sameLeaf(Node* node){
    int m=-1;
    int h=0;
    solve(node,h,&m);
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
