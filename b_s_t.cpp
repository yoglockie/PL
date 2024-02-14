#include<iostream>
using namespace std;

class Node
{  
     public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    } 
};

Node* createBST(Node *root, int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left = createBST(root->left, val);
    }
    else{
        root->right = createBST(root->right, val);
    }
}

void inorder(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{   
    Node *root;
    int size;
    cout<<"Howmany elements you want store in tree - ";
    cin>>size;
    int *p;
    p = new int[size];
    cout<<"Enter the elements - ";
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }
    root = new Node(p[0]);
    for(int i=1;i<size;i++)
    {
        createBST(root, p[i]);
    }
    inorder(root);
    return 0;
}