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

vector<int> RightView(Node* node){
    vector<int> ans;
    queue<int> q;
    if(!node){return ans;}
    q.push(node);
    while(!q.empty()){
        int s=q.size();
        ans.push_back(q.front()->data);
        while(s--){
            Node* n=q.front();
            if(n->right){q.push(n->right);}
            if(n->left){q.push(n->left);}
            q.pop();
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
