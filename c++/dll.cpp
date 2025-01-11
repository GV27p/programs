#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int d)
    {
        data = d;
        next = NULL;
        prev=nullptr;
    }
};
void insertAtEnd(node*& head,int data)
{
    node* newnode=new node(data);
    if(head==nullptr)
    {
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
bool ispalindrome(node*& head)
{
    node* t1=head;
    node* t2=head;
    while(t1->next!=nullptr)
    {
        t1=t1->next;
    }
    while(t2->next!=nullptr && t1->prev!=head)
    {
        if(t1->data!=t2->data)
        {
            return false;
        }
        else
        {
            t1=t1->prev;
            t2=t2->next;
        }
    }
    return true;
}
int main()
{
    node* head=nullptr;
    int n;
    cout<<"enter number of digits: ";
    cin>>n;
    int val;
    cout<<"enter number:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        insertAtEnd(head,val);
    }
    bool b=ispalindrome(head);
    if(b)
    {
        cout<<"the number is palindrome"<<endl;
    }
    else
    {
        cout<<"not a palindrome"<<endl;
    }
}