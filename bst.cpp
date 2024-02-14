#include<iostream>
using namespace std;
class Node
{
   public :
   int info;
   Node *left,*right;

   Node(int val)
   {
       info=val;
       left=right=NULL;
   }
};

Node* createBST(Node *root, int val)
{
   if(root==NULL)
   {
       return new Node(val);
   } 
   if(val<root->info)
   {
       root->left = createBST(root->left,val);
   }
   else{
       root->right = createBST(root->right,val);
       }
}
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
   Node *root =new Node(5);
   createBST(root,54);
   createBST(root,34);
   createBST(root,14);
   createBST(root,44);
   createBST(root,64);
   createBST(root,54);
   createBST(root,46);
   createBST(root,1);
   createBST(root,3);
   createBST(root,2);
   inorder(root);

    return 0;
}