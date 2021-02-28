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

vector<int> Diagonal(Node* node){
    queue<int> q;
    vector<int> ans;
    if(!root){return ans;}
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        while(temp){
            if(temp->left){q.push(temp->left);}
            ans.push_back(temp->data);
            temp=temp->right;
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
