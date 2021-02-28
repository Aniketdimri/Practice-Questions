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
unordered_map<string,int> m;
string solve(Node* node){
    if(!node){return "#";}
    if(!node->left && !node->right){
        return to_string(node->data);
    }
    string s=to_string(node->data);
    s=s+to_string(node->left);
    s=s+to_string(node->right);
    m[s]++;
    return s;
}

bool dupSub(Node* node){
    m.clear();
    solve(node);
    for(auto x:m){
        if(x.second>=2){
            return true;
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
