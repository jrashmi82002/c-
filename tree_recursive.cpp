# include <iostream>
# include <stdlib.h>
using namespace std;

struct node
{
  int val;
  node * left;
  node *right;
  node(int val)
  {
      this->val = val;
      this->left = NULL;
      this->right = NULL;
  }
};

void preorder(node*root)
{
    if(root != NULL)
    {
        cout<<root->val<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node*root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
}

void postorder(node*root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->val<<" ";
    }
}

int main(int argc, char const *argv[])
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->right->right = new node(7);
    root->right->left = new node(6);
    root->left->left = new node(4);
    root->left->right = new node(5);

    preorder(root);cout<<":preorder\n";
    inorder(root);cout<<":inorder\n";
    postorder(root);cout<<":postorder\n";

    return 0;
}
