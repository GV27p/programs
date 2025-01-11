#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node()
    {
        data=0;
        next=NULL;
    }
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class linked
{
    node* head;
    public:
    linked()
    {
        head=NULL;
    }
    void insertAtHead(int data)
    {
        node* newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        newnode->next=this->head;
        this->head=newnode;
    }
    void print()
    {
        node *temp=head;
        if(head==NULL)
        {
            cout<<"list is empty"<<endl;
            return;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    linked l;
    l.insertAtHead(13);
    l.insertAtHead(14);
    l.insertAtHead(18);
    l.insertAtHead(5);
    l.insertAtHead(11);
    l.insertAtHead(25);
    cout<<"elements of the list are: ";
    l.print();
    cout<<endl;
    return 0;
}