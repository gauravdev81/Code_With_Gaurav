#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node * left,*right;
};

void preOrderTraversal(struct node *curr,vector<int> &preOrder)
{
    if(curr==NULL)
    return;

    preOrder.push_back(curr->data);
    preOrderTraversal(curr->left,preOrder);
    preOrderTraversal(curr->right,preOrder);
    

}

struct node* newnode(int val)
{
    struct node *temp;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

int main()
{
    struct node * root = newnode(1);
    root->left= newnode(2);
    root->right= newnode(4);
    root->left->right= newnode(3);

    vector<int> preOrder;
    preOrderTraversal(root,preOrder);

    for(auto i:preOrder)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}