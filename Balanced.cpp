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

bool balanced(Node* node){
    if(!node){return true;}
    int left=height(node->left);
    int right=height(node->right);
    if((abs(left-right)<2) && balanced(node->left) && balanced(node->right)){
        return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
