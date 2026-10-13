#include<bits/stdc++.h>
using namespace std;
struct node{
    node* left;
    node* right;
    int data;
};
node* root=nullptr;
void insert(int x){
    node* newnode=new node();
    newnode->data=x;
    newnode->left=nullptr;
    newnode->right=nullptr;
    if(root==nullptr){
        root=newnode;
    return;
    }
    node* temp=root;
    node* parent;
    while(temp!=nullptr){
        parent =temp;
        temp=(temp->data<x)?temp->right:temp->left;}
    if(parent->data<x){
        parent->right=newnode;
    } 
    else parent->left=newnode;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    insert(38);
    insert(14);
    insert(56);
    insert(8);
    insert(23);
    insert(45);
    insert(82);
    insert(70);
    insert(18);
    cout<<root->data<<endl;
    cout<<root->left->data<<' '<<root->right->data<<endl;
    cout<<root->left->left->data<<' ' <<root->left->right->data<<' '<<root->right->left->data<<' '<<root->right->right->data<<endl;
    cout<<root->left->right->left->data<<' '<<root->right->right->left->data<<endl;
return 0;
}