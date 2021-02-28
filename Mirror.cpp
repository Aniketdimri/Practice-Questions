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
void mirror(Node* node){
    if(!node){return;}
    mirror(node->left);
    mirror(node->right);
    swap(root->left,root->right);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
