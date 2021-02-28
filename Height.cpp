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
    if(!node){return 0;}
    int left=height(node->left);
    int right=height(node->right);
    if(left>right){
        return 1+left;
    }
    return 1+right;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
