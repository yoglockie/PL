#include<iostream>
using namespace std;

class Node
{
   public : 
   int info;
   Node *left, *right;

   Node(int val)
   {
    info = val;
    left= right = NULL;

   }
};

void inorder(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->info<<" ";
    inorder(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left= new Node(2);
    root->right = new Node(3); 
   root->left->left = new Node(5);
   root->left->right = new Node(4);
    root->right->left = new Node(9);
     root->right->right = new Node(6);
     inorder(root);     
     

    return 0;
}