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
        next=nullptr;
    }
    node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};
class linked
{
    public:
    node* head;
    linked()
    {
        head=nullptr;
    }
    void inserthead(int val)
    {
        node* nnode=new node(val);
        nnode->next=head;
        head=nnode;
    }
    void removeduplicate(int key)
    {
        node* temp=head;
        node* prev=nullptr;
        int c=0;
        while(temp!=nullptr)
        {
            if(temp->data==key)
            {
                c++;
                if(prev==nullptr)
                {
                    head=temp->next;
                    delete temp;
                    temp=head;
                }
                else
                {
                    prev->next=temp->next;
                    delete temp;
                    temp=prev->next;
                }
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
        }
        cout<<"no. of occurences of key is: "<<c<<endl;
    }
    void print()
    {
        node* temp=head;
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
    l.inserthead(3);
    l.inserthead(1);
    l.inserthead(2);
    l.inserthead(1);
    l.inserthead(2);
    l.inserthead(1);
    int k;
    cout<<"enter key: ";
    cin>>k;
    l.removeduplicate(k);
    l.print();
}