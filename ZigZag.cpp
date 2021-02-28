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
vector<int> ZigZag(Node* node){
    queue<int> q;
    vector<int> ans;
    if(!node){return ans;}
    q.push(node);
    int flag=0;
    while(!q.empty()){
        vector<int> v;
        int s=q.size();
        while(q--){
            Node* temp=q.front();
            v.push_back(temp->data);
            if(q->left){q.push(q->left);}
            if(q->right){q.push(q->right);}
            q.pop();
        }
        if(flag){
            reverse(v.begin(),v.end());
        }
        for(auto i:v){
            ans.push_back(*i);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i=1;
    cout<<(!i);

}
