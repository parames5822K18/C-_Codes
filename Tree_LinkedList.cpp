#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node* Left;
    Node* Right;
};
class {
    public:
    Node* Create(){
    int x;
    cin>>x;
    if(x==-1)return nullptr;
    Node* temp=new Node();
    temp->value=x;
    temp->Left=Create();
    temp->Right=Create();
    return temp;
    }
    void Display_(Node* root){
        queue <int> q;
        for()
    }
    void Display(Node * temp){
    if(temp==nullptr)return;
    cout<<temp->value<<' ';
    Display(temp->Left);
    Display(temp->Right);
    }}Bin_Tree;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Node* Root=Bin_Tree.Create();
    Bin_Tree.Display(Root);
return 0;
}