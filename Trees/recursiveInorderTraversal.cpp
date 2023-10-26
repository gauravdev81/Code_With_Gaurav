#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

void inOrderTrav(struct node *curr, vector<int> &inOrderVector)
{
    if (curr == NULL)
        return;

    inOrderTrav(curr->left, inOrderVector);
    inOrderVector.push_back(curr->data);
    inOrderTrav(curr->right, inOrderVector);
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

    vector<int> inOrderVector;
    inOrderTrav(root, inOrderVector);

    for (int i : inOrderVector)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}