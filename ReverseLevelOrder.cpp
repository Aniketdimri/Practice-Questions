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

vector<int> ReverseOrder(Node* node){
    vector<int> ans;
    if(!root){return ans;}
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        Node* val=q.front();
        ans.push_back(q->data);
        if(val->right){q.push(val->right);}
        if(val->left){q.push(val->left);}
        q.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
