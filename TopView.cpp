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

void topView(Node* node){
    map<int,int> mp;
    queue<pair<int,int>> q;
    if(!node){return ;}
    q.push({root,0});
    while(!q.empty()){
        Node* temp=q.front().first;
        int h=q.front().second;
        q.pop();
        if(!m[h]){m[h]=temp->data;}
        if(temp->left){q.push({temp->left,h-1});}
        if(temp->right){q.push({temp->right,h+1});}
    }
    for(auto i=m.begin();i!=m.en();i++){
        cout<<i.second<<" ";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
