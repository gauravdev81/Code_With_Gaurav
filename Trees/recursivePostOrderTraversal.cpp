#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

void postOrderTrav(struct node *curr, vector<int> &postOrderVector)
{
    if (curr == NULL)
        return;

    postOrderTrav(curr->left, postOrderVector);

    postOrderTrav(curr->right, postOrderVector);
    postOrderVector.push_back(curr->data);
}

struct node *newNode(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

int main()
{
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(8);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->right->left = newNode(9);
    root->right->right->right = newNode(10);

    vector<int> postOrderVector;
    postOrderTrav(root, postOrderVector);

    for (int i : postOrderVector)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}