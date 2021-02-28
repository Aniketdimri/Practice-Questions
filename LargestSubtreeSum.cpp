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

int solve(Node* node,int &maximum){
    if(!node){return 0;}
    int left=solve(node->left);
    int right=solve(node->right);
    int total=node->data+left+right;
    if(total>maximum){
        maximum=total;
    }
    return total;
}

void largestSum(Node* node){
    int maximum=-1;
    solve(node,maximum);
    cout<<maximum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
