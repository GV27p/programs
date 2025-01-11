#include<iostream>
using namespace std;
struct node
{
    int key;
    node* l;
    node* r;
    node(int data)
    {
        key=data;
        l=r=NULL;
    }
};

node* insert(node* n, int key)
{
    if(n==nullptr)
    {
        return new node(key);
    }
    if(n->key==key)
    {
        return n;
    }
    if(key<n->key)
    {
        n->l=insert(n->l,key);
    }
    else
    {
        n->r=insert(n->r,key);
    }
    return n;
}
void inorder(node* root)
{
    if(root!=nullptr)
    {
        inorder(root->l);
        cout<<root->key<<" ";
        inorder(root->r);
    }
}
void preorder(node* root)
{
    if(root!=nullptr)
    {
        cout<<root->key<<" ";
        preorder(root->l);
        preorder(root->r);
    }
}
void postorder(node* root)
{
    if(root!=nullptr)
    {
        postorder(root->l);
        postorder(root->r);
        cout<<root->key<<" ";
    }
}
int leafnode(node* root)
{
    int c=0;
    if(root!=nullptr)
    {
        leafnode(root->l);
        leafnode(root->r);
        if(root->l==nullptr && root->r==nullptr)
        {
            c++;
            cout<<root->key<<" ";
        }
    }
    return c;
}
void search(node* root,int val)
{
    if(root==nullptr)
    {
        cout<<val<<" not found in the tree.\n";
        return;
    }
    if(root->key==val)
    {
        cout<<val<<" found in the tree.\n";
        return;
    }
    if(val<root->key)
    {
        search(root->l,val);
    }
    else
    {
        search(root->r,val);
    }
}
int main()
{
    node* root=new node(41);
    root=insert(root,13);
    root=insert(root,18);
    root=insert(root,67);
    root=insert(root,45);
    root=insert(root,27);
    root=insert(root,51);
    root=insert(root,91);
    root=insert(root,36);
    cout<<"Inorder traversal: ";
    inorder(root);
    cout<<"\nPreorder traversal: ";
    preorder(root);
    cout<<"\nPostorder traversal: ";
    postorder(root);
    cout<<"\nLeaf nodes: ";
    int c=leafnode(root);
    cout<<"the no. of leafnodes are: "<<c<<endl;
    cout<<"\nSearch for 36: ";
    search(root,36);
    cout<<"\nSearch for 100: ";
    search(root,100);
    return 0;
}