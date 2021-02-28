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

void func(Node* node,vector<int>& path,int k){
    if(!root){return ;}
    path.push_back(node->data);
    func(node->left,path,k);
    func(node->right,path,k);
    int f=0;
    for(int i=path.size()-1;i>=0;i--){
        f+=path[i];
        if(f==k){
            for(int j=i;j<path.size();j++){
                cout<<path[j]<<" ";
            }
            cout<<endl;
        }
    }
    path.pop_back();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

}
