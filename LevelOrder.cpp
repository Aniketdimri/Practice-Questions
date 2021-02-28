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

vector<int> levelOrder(Node* node){
    vector<int> q;
    if(!root){return q;}
    queue<int>q;
    q.push(node);
    while(!q.empty()){
        Node* value=q.front();
        ans.push_back(t-data);
        if(t->left){q.push(t->left);}
        if(t->right){q.push(t->right);}
        q.pop();
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
