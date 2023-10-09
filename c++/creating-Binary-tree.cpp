#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};

node * newnode(int data)
{
    node * temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node * preorder(node * root)
{
    if(root == NULL)
    return 0 ;
    else
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    return root;
}

node * post_order(node * root)
{
    if(root==NULL)
    return 0;
    else
    {
        post_order(root->left);
        post_order(root->right);
        cout<<root->data<<" ";
    }
    return root;
}

node * in_order(node * root)
{
    if (root==NULL)
    return 0;
    else
    {
        in_order(root->left);
        cout<<root->data<<" ";
        in_order(root->right);
    }
    return root;
}

int main()
{
    node * root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->left->right->left = newnode(8);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    root->right->right->left = newnode(9);
    root->right->right->right = newnode(10);
    cout<<"The preoder is "<<endl;
    root = preorder(root);
    cout<<"The post-order is"<<endl;
    root = post_order(root);
    cout<<"The in-order is"<<endl;
    root = in_order(root);
}
