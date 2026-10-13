#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *right,*left;
    int height;
};
node *root=nullptr;
node* create(int data){
     node* temp=new node();
     temp->data=data;
     temp->left=nullptr;
     temp->right=nullptr;
     temp->height=1;
return temp;
}
int getHeight(node *t){
    if(t==nullptr)return 0;
    return t->height;
}
int max(int a,int b){
    if(a>b)return a;
    return b;
}
int getBalanceFactor(node *t){
    if(t==nullptr)return 0;
    return getHeight(t->left)-getHeight(t->right);
}
node *RR_Rotation(node *z){
    node *y=z->right;
    node *t1=y->left;
    y->left=z;
    z->right=t1;
    y->height=1+max(getHeight(y->left),getHeight(y->right));
    z->height=1+max(getHeight(z->left),getHeight(z->right));
    return y;
}
node *LL_Rotation(node *z){
    node *y=z->left;
    node *t1=y->right;
    y->right=z;
    z->left=t1;
    y->height=1+max(getHeight(y->left),getHeight(y->right));
    z->height=1+max(getHeight(z->left),getHeight(z->right));
    return y;
}
node* insertion(node *root,int data){
    if(root==nullptr)return create(data);
    if(data<root->data){
        root->left=insertion(root->left,data);
    }
    else if(data>root->data){
        root->right=insertion(root->right,data);
    }
    else return root;
    root->height=1+max(getHeight(root->left),getHeight(root->right));
    int balFac=getBalanceFactor(root);
    if(balFac==2 && data>root->right->data)return RR_Rotation(root);
    if(balFac==2 && data<root->right->data){
        root->right=LL_Rotation(root->right);
        return RR_Rotation(root);}
    if(balFac==-2 && data<root->left->data)return LL_Rotation(root);
    if(balFac==-2 && data>root->left->data){
        root->left=RR_Rotation(root->left);
        return LL_Rotation(root);}
    return root;
}
node* deletion(node *root,int data){
    if(root=nullptr){
        return root;
    }
    if(data<root->data)root->left=deletion(root->left,data);
    else if(data>root->data)root->right=deletion(root->right,data);
    else{
        if(root->left==nullptr || root->right==nullptr){
             node *temp=(root->left==nullptr)?root->right:root->left;
        }
    }
}
int main(){

}